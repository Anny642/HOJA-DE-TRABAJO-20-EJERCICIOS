#include <iostream>
using namespace std;
int num, a;
int main()
{
cout << "Transformacion de numero arabigos a romanos" << endl;
cout << "Escribe el numero a convertir, que sea mayor o igual a 1 y menor o igual a 1000" << endl;
cin >> a;
num=a;
while(num!=0)
{

if (num<= 3999 && num>= 1000)
{
cout << "M";
num = num -1000;
}
else if(num <1000 && num>=900)
{
cout << "CM";
num = num - 900;
}
else if(num < 900 && num>500)
{
cout << "D";
num = num - 500;
}
else if (num == 500)
{
cout << "D";
num = num -500;
}
else if (num<500 && num>= 400)
{
cout << "CD";
num = num - 400;
}
else if (num<400 && num >99)
{
cout << "C";
num = num -100;
}
else if (num< 100 && num>89)
{
cout << "XC";
num = num - 90;
}
else if (num< 90 && num>59)
{
cout << "L";
num = num - 50;
}
else if(num<60 && num >50)
{
cout << "L";
num = num - 50;
}
else if (num ==50)
{
cout << "L";
num = num -50;
}
else if(num<50 && num>39)
{
cout << "XL";
num = num - 40;
}
else if(num< 40 && num> 10)
{
cout << "X";
num = num - 10;
}
else if(num == 10)
{
cout << "X";
num = num -10;
}
else if(num==9)
{
cout << "IX";
num = num - 9;
}
else if(num<=8 && num>=6)
{
cout << "V";
num = num - 5;
}
else if (num == 5)
{
cout << "V";
num = num - 5;
}
else if (num == 4)
{
cout << "IV";
num = num - 4;
}
else if (num<= 3 && num>=1)
{
cout << "I";
num = num - 1;
}
}
return 0;
}



