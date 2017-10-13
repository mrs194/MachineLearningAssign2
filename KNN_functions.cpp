#include "KNN_Functions.h"
#include <cmath>
#include <vector>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>

/*
double point::distanceFromPoints(point point1, point point2)
{
    double result;
    double pt2X, pt2Y, pt2W, pt2Z, pt1X, pt1Y, pt1W, pt1Z;

    strtod()
    //The points x,y,w,z are all strings now and must be converted
    //back in to doubles.
    result = sqrt(pow((point2.x - point1.x), 2)
                 + pow((point2.y - point1.y), 2) +
                  pow((point2.w - point1.w), 2) +
                  pow((point2.z - point1.z), 2));
    return result;
}
*/
std::vector< std::vector<std::string> > point::readCSV(std::string fileName)
{


    std::ifstream inFile;
    std::string value;
    int numOfRows = 0;
    int numOfCols = 0;

    inFile.open(fileName);

    /*
        These two lines of code will find how many features there are
        in one line.  It will leave off the y value element though.
        If needing the rows we will need to add one to the numOfRows.
        Same with numOfCols since this will only count the commas
        that are leading up to the y value element.
    */
        getline(inFile, value);
        numOfCols = std::count(value.begin(), value.end(), ',');
        numOfCols++;



    /*
        Finding how many rows there are in a file and setting
        numOfRows to that.
    */
    while(std::getline(inFile, value))
    {
        numOfRows++;
    }
    numOfRows++;

    inFile.clear();
    inFile.seekg(0, std::ios::beg);


    std::vector< std::vector<std::string> > points;

    for(int i = 0; i < numOfRows; i++)
    {
        std::vector <std::string> newVector;

        for(int j = 0; j < numOfCols; j++)
        {
            getline(inFile, value, ',');
            newVector.push_back(value);

        }
        points.push_back(newVector);
    }

    std::cout << points.at(1).at(4);


   // while(!inFile.eof())
   // {
        //point newPoint;




        //std::cout << value;
   // }

return points;
}
