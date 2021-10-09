#include <iostream>
using namespace std;

int main(){

    double promedio,calificacion;
    int numero_calificaciones;
    
    
    //presenta el algoritmo
    cout<<"hola, soy un algoritmo para obtener el "<<
    "promedio de algunas calificiones, por favor "<<
    "ingresa los datos que se solicitan."<<endl;

    cout<<"\nNumero de calificaciones a promediar:"<<endl;
    cin>>numero_calificaciones;
    for (int x=1;x<=numero_calificaciones;++x){
        cout<<"calificacion "<<x<<":"<<endl;
        cin>>calificacion;
        promedio+=calificacion;
        

    }
    promedio=promedio/numero_calificaciones;
    
    cout<<"el promedio de las calificaciones ingresadas es de: "
    <<promedio<<endl;
    return 0;
}