#pragma once
#include <vector>
#include "./vect2d.h"

namespace layzar
{
class VectorShape
{
public:
    virtual Vect2D center();
};

/**
 * This is an in place MST algorithm to determine the render
 * order of the shapes.
 * @param list the list of vector shapes to execute the algorithm on
 * @return void as the input is modified
 **/
void sortVectorShapes(std::vector<VectorShape> &list);
}

