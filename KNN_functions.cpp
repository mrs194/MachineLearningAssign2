#include "KNN_Funcitons.h"

double point::distanceFromPoints(point point1, point point2)
{
    double result;

    result = sqrt(pow((point2.x - point1.x), 2)
                 + pow((point2.y - point1.y), 2));
    return result;
}
