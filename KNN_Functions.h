#ifndef KNN_FUNCTIONS_H_INCLUDED
#define KNN_FUNCTIONS_H_INCLUDED

class point
{
    public:
        double x, y, z, w;
        string plantType = "";
        distanceFromPoints(point point1, point point2);

};


#endif // KNN_FUNCTIONS_H_INCLUDED
