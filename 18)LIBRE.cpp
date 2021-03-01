#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Ingrese un numero"<<endl;
    cin>>n;
     
    if (n<1||n>9999)
        cout<<"No esta dentro del rango permitido"<<endl;
    else
    if (n<10)
        cout<<"Tiene 1 digito"<<endl;
    else
    if (n<100)
        cout<<"Tiene 2 digitos"<<endl;
    else
    if (n<1000)
        cout<<"Tiene 3 digitos"<<endl;
    else
    if (n<10000)
        cout<<"Tiene 4 digitos"<<endl;
 
cin.ignore();
return 0;
}
