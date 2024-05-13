#ifndef Punto_hpp
#define Punto_hpp
using namespace std;
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
    void muestra_punto();
private:
    // Atributos
    double x_coordinate=0;
    double y_coordinate=0;
};
#endif /*Punto_hpp*/
