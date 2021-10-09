#include <iostream>
using namespace std;

int main(){
    //presenta el algoritmo
    cout<< "hola, soy un algoritmo para sumar dos numeros"
    <<", por favor ingresa los dos numeros que desees sumar."<<endl;

    bool run=true;//hace que corra por primera vez
                  //y despues si el usuario lo desea

    int num1,num2;//los números que se desea sumar
    string denuevo;
    while (run){
        cout<<"\nNumero 1:"<<endl;
        cin>>num1;
        cout<<"Numero 2:"<<endl;
        cin>>num2;
        cout<<"la suma de "<<num1<< " y " << num2<<
        " es igual a " << num1+num2<<endl;
        cout<<"\nDeseas hacer otra suma? (si/no)"<<endl;
        cin>>denuevo;
        if (denuevo!="si"){
            run =false;
        }
    }

    return 0;
}