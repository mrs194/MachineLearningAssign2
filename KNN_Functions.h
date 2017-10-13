#ifndef KNN_FUNCTIONS_H_INCLUDED
#define KNN_FUNCTIONS_H_INCLUDED
#include <string>
#include <vector>
#include <fstream>

class point
{
    public:
        std::string x, y, z, w;
        std::string plantType;
        double distanceFromPoints(point point1, point point2);
        std::vector< std::vector<std::string> >readCSV(std::string fileName);

};


#endif // KNN_FUNCTIONS_H_INCLUDED
