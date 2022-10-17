#include "./vect2d.h"

using namespace layzar;

Vect2D::Vect2D(double x, double y)
{
    this->x = x;
    this->y = y;
}

Vect2D::~Vect2D()
{

}

double Vect2D::getX()
{
    return this->x;
}

double Vect2D::getY()
{
    return this->y;
}

double dotProduct(Vect2D a, Vect2D b)
{
    return a.getX() * b.getX() + a.getY() * b.getY();
}

