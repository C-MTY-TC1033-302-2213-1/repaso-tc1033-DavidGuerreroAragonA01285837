#include "Punto.cpp"
#ifndef Triangulo_hpp
#define Triangulo_hpp
#include <stdio.h>
#include <math.h>
#include <iostream>
class Triangulo{
public:
    // Constructores
    Triangulo();
    Triangulo(Punto _p1,Punto _p2,Punto _p3);
    // Metodos
    Punto getVertice1();
    Punto getVertice2();
    Punto getVertice3();
    void setVertice1(Punto _p1);
    void setVertice2(Punto _p2);
    void setVertice3(Punto _p3);
    double perimetro();
    double area();
private:
    // Atributos
    Punto punto_1;
    Punto punto_2;
    Punto punto_3;
};
#endif /*Triangulo_hpp*/