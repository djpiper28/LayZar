#pragma once

namespace layzar
{
class Vect2D
{
public:
    Vect2D(double x, double y);
    ~Vect2D();
    double getX();
    double getY();
private:
    double x, y;
};

double dotProduct(Vect2D a, Vect2D b);
}
