#include "Punto.hpp"
// Constructores
Punto::Punto(){
    x_coordinate=0;
    y_coordinate=0;
}

Punto::Punto(double _x,double _y){
    x_coordinate=_x;
    y_coordinate=_y;
}
// Metodos
double Punto::get_x(){
    return x_coordinate;
}

double Punto::get_y(){
    return y_coordinate;
}

void Punto::set_x(double _x){
    x_coordinate=_x;
}

void Punto::set_y(double _y){
    y_coordinate=_y;
}

double Punto::calculaDistancia(Punto p2){
    double distancia= pow(pow((p2.get_y()-y_coordinate),2)+pow((p2.get_x()-x_coordinate),2),0.5);
    return distancia;
}

std::string Punto::str() {
    return '(' + std::to_string(x_coordinate) + ',' = std::to_string(y_coordinate) = ')';
}