#include <iostream>
using namespace std;

int main(){
    cout<<"hola soy un algoritmo diseñado para calcular el area y perimetro"
    <<" de un rectangulo, por favor ingresa los datos que se solicitan"<<endl;

    cout<<"\nPor favor ingresa:\n1 si deseas calcular el area "<<
    "\n2 si deseas calcular el perimetro"<<endl;
    int proceso;
    float base,altura,lado1,lado2;
    cin>>proceso;

    switch(proceso){
        case 1:{
            //calculo del area
            cout<<"GENIAL, HAZ DECIDIDO CALCULAR EL AREA DE UN RECTANGULO"<<
            "\nPor favor ingresa los datos que se solicitan"<<endl;

            cout<<"base del rectangulo:"<<endl;
            
            cin>>base;

            cout<<"altura del rectangulo:"<<endl;
            cin>>altura;
            cout<<"el area del rectangulo con base "<<base<<
            " y altura "<<altura<< " es de "<<base*altura<<endl; 
            

            
            break;

        }
        case 2:{
            // calculo del perimetro
            cout<<"GENIAL, HAZ DECIDIDO CALCULAR EL PERIMETRO DE UN RECTANGULO"<<
            "\nPor favor ingresa los datos que se solicitan"<<endl;

            cout<<"base del rectangulo:"<<endl;
            
            cin>>lado1;
            cout<<"altura del rectangulo:"<<endl;
            cin>>lado2;
            cout<<"el perimetro del rectangulo con base "<<lado1<<
            " y altura "<<lado2<< " es de "<<2*lado1+2*lado2<<endl; 
            break;
        }
    }
    return 0;



}