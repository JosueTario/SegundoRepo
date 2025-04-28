#include <iostream>
using namespace std;

int main(){


    int numero;
        cout<<"ingresar numero positivo entero ";
        cin>>numero;

        if (numero%3==0 && numero%5==0){
           cout<<"FIzzBuzz";
        }else if (numero%3==0){
            cout<< "Fizz";
        }else if (numero%5==0){
            cout<< "Buzz";
        }else{
            cout<<"josuetario";
        }
        

        
        



return 0;


}