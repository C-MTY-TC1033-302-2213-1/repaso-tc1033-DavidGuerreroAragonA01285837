#ifndef Punto_hpp
#define Punto_hpp
#include <stdio.h>
#include <math.h>
#include <iostream>
class Punto{
public:
    // Constructores
    Punto();
    Punto(double _x,double _y);
    // Metodos
    double get_x();
    double get_y();
    void set_x(double _x);
    void set_y(double _y);
    double calculaDistancia(Punto p2);
private:
    // Atributos
    double x_coordinate;
    double y_coordinate;
};
#endif /*Punto_hpp*/
