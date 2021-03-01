#include <iostream>
using namespace std;

main(){
    int number;
    cout<<"INGRESE EL NUMERO :"<<endl;
    cin>>number;
    
    for(int i=1;i<=10;i++){
        int multiplicacion = i * number;
        cout<<number <<" x "<< i <<"="<< multiplicacion <<endl;
    }
    
    return 0;
}
