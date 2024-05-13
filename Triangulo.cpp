#include "Triangulo.hpp"
#include <math.h>
#include <iostream>
using namespace std;

// Constructores

Triangulo::Triangulo(){
    Punto punto_1;
    Punto punto_2;
    Punto punto_3;
}
Triangulo::Triangulo(Punto _p1,Punto _p2,Punto _p3){
    Punto punto_1=_p1;
    Punto punto_2=_p2;
    Punto punto_3=_p3;
}

// Metodos

Punto Triangulo::getVertice1(){
    return punto_1;
}
Punto Triangulo::getVertice2(){
    return punto_2;
}
Punto Triangulo::getVertice3(){
    return punto_3;
}

void Triangulo::setVertice1(Punto _p1){
    punto_1=_p1;
}
void Triangulo::setVertice2(Punto _p2){
    punto_2=_p2;
}
void Triangulo::setVertice3(Punto _p3){
    punto_3=_p3;
}

double Triangulo::perimetro(){
    double perimetro=punto_1.calculaDistancia(punto_2)+punto_1.calculaDistancia(punto_3)+punto_2.calculaDistancia(punto_3);
    return perimetro;
}

double Triangulo::area(){
    double area= 0.5*(((punto_1.get_x()*punto_2.get_y())+(punto_2.get_x()*punto_3.get_y())+(punto_3.get_x()*punto_1.get_y()))-((punto_1.get_x()*punto_3.get_y())+(punto_3.get_x()*punto_2.get_y())+(punto_2.get_x()*punto_1.get_y())));
    return area;
}

void Triangulo::str(){
    cout<<"Vertices del triangulo"<<endl;
    cout<<"Punto 1: ";
    punto_1.muestra_punto();
    cout<<"Punto 2: ";
    punto_2.muestra_punto();
    cout<<"Punto 3: ";
    punto_3.muestra_punto();
}