#include <iostream>
using namespace std;

int main(){

    //presenta la funcion del algoritmo, 
    cout<<"Hola, soy un algoritmo para obtener el area de algunas de las "
    <<"figuras mas comunes"<<endl;
    cout<<"\n";


    int figura;//la figura de la que el usuario desea obtener el area

    bool run = true;//checa si el usuario quiere seguir obteniendo areas
    string denuevo;
    while (run==true){
        // escribe las figuras de las que el usuario puede elegir
        cout<<"FIGURAS"<<endl;

        cout<<"\nPor favor ingrese el numero de la figura de la que"<<
        " desea obtener el area."<<endl;

        cout<<"1.cuadrado\n2.rectangulo\n3.triangulo\n4.circulo\n5.trapecio"<<
        "\n6.romboide\n7.poligono regular\n8.elipse"<<endl;

        cin>>figura;//solicita la figura al usuario

        switch(figura){
            case 1:{
                //-------cuadrado-----------//
                float ladoCuadrado;

                cout<<"CUADRADO\n"<<endl;
                cout<<"para calcular el area de un cuadrado, por favor "<<
                "ingrese la medida de uno de sus lados:"<<endl;
                cin>>ladoCuadrado;
                cout<<"el area del cuadrado en el que sus lados miden "<<
                ladoCuadrado<<" unidades, es de "<<ladoCuadrado*ladoCuadrado<<
                " unidades cuadradas."<<endl;

                break;
            }
            case 2:{
                //-------rectangulo-----------//
                float baseRect,alturaRect;

                cout<<"RECTANGULO\n"<<endl;
                cout<<"Para calcular el area de un rectangulo, por favor "<<
                "ingrese la medida de la base y posteriormente la medida de"<<
                " la altura"<<endl;
                cin>>baseRect>>alturaRect;
                cout<<"el area del rectangulo con base de " <<baseRect<<
                " unidades y altura de "<< alturaRect<<" unidades, es de "<<
                baseRect*alturaRect<< " unidades cuadradas."<<endl;

                break;
            }
            case 3:{
                //-------triangulo-----------//
                float baseTri,alturaTri;
                cout<<"TRIANGULO\n"<<endl;
                cout<<"para calcular el area de un triangulo, por favor"<<
                " ingrese la medida de la base y posteriormente la "<<
                "medida de la altura"<<endl;
                cin>>baseTri>>alturaTri;
                cout<<"el area del triangulo con base "<< baseTri<< 
                " y altura "<<alturaTri<<" es de "<<baseTri*alturaTri/2<<
                " unidades cuadradas."<<endl;



                break;
            }
            case 4:{
                //-------circulo-----------//
                float radio,pi;
                cout<<"CIRCULO\n"<<endl;
                pi=3.14159265358979323846264338327950288419716939937;
                cout<<"para calcular el area de un circulo, por favor ingrese"<<
                " la medida del radio"<<endl;
                cin>>radio;
                cout<< "la medida del area del circulo con radio " << radio<<
                ", es de "<<pi*radio*radio<<" unidades cuadradas."<<endl;

                break;
            }
            case 5:{
                //-------trapecio-----------//
                float basem,baseM,alturaTrap;
                cout<<"TRAPECIO\n"<<endl;
                cout<<"para calcular el area de un trapecio, por favor"<<
                "ingrese las medidas que se solicitan"<<endl;
                cout<<"base mayor:"<<endl;
                cin>>baseM;
                cout<<"base menor:"<<endl;
                cin>>basem;
                cout<<"altura:"<<endl;
                cin>>alturaTrap;
                cout<<"el area del trapecio con las medidas ingresadas es de "<<
                ((basem+baseM)*alturaTrap)/2<<" unidades cuadradas."<<endl;
                break;
            }
            case 6:{
                //-------rombo-----------//
                float diagonalm,diagonalM;
                cout<<"Romboide\n"<<endl;
                cout<<"para obtener el area de un romboide, por favor"<<
                " ingrese la medida de la diagonal menor, seguida de la mayor"<<
                endl;
                cin>>diagonalm>>diagonalM;
                cout<<"el area del romboide cuyas diagonales miden "<<
                diagonalM<<" y "<<diagonalm<<" respectivamente, es de "<<
                diagonalm*diagonalM/2<<" unidades cuadradas"<<endl;
                break;
            }
            case 7:{
                //-------poligono regular-----------//
                float ladoPoligono,apotema,nlados;
                cout<<"POLIGONO REGULAR\n"<<endl;
               cout<<"por favor ingrese el numero de lados del poligono:"<<endl;
                cin>>nlados;
                cout<<"para calcular el area de un poligono regular de "<<nlados
                <<" lados, por favor ingrese la medida de un lado, "
                <<"posteriormente ingrese la medida del apotema."<<endl;
                cin>>ladoPoligono>>apotema;
                cout<<"el area del poligono regular de "<<nlados<<" lados"<<
                " y medidas previamente proporcionadas es de "<<
                ((nlados*ladoPoligono)*apotema)/2<<" unidades cuadradas."<<endl;
                break;
            }
            case 8:{
                //-------elipse-----------//
                float a,b,pipi;
                pipi=3.14159265358979323846264338327950288419716939937;
                cout<<"ELIPSE\n"<<endl;
                cout<<"para calcular el area de una elipse, por favor ingrese"<<
                " la medida del centro al vertice superior y la "<<
                "medida del centro an un vertice lateral"<<endl;
                cin>> a>>b;
                cout<<"la medida del area de la elipse con medidas previamente"
                <<" proporcionadas, es de "<<a*b*pipi<<" unidades cuadradas"
                <<endl;
                break;
            }
        }
    
        cout<<"Te gustaria obtener el area de alguna otra figura? (y,n)"<<endl;
        cin>>denuevo;
        if(denuevo!="y"){
            run=false;
        }
        
        
    }



    return 0;
}

 

    

    