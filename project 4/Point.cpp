/**
 * Point.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183, Fall 2020
 * Project 4: CoolPics
 *
 * <#Name(s)#> Jazib Ahmad, Guanghan Ma
 * <#uniqname(s)#> jaziba, maguangh
 *
 * <#Description#>    program that reads in a description of shapes, draws those shapes, and saves the result to a file.
 *   Represents the different shapes using classes
 */

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"

// TODO: implement two constructors, setX, getX, setY, getY, read, write, checkRange.

Point::Point()
{
    x = 0;
    y = 0;
}
Point::Point(int xVal, int yVal)
{
    x = checkRange(xVal);
    y = checkRange(yVal);
}
void Point::setX(int xVal)
{
    x = checkRange(xVal);
}

int Point::getX()
{
    return x;
}
void Point::setY(int yVal)
{
    y = checkRange(yVal);
}
int Point::getY() {
    return y;
}
void Point::read(istream& ins)
{
    char parensAndComma;
    ins >> parensAndComma >> x >> parensAndComma >> y >> parensAndComma;
}
void Point::write(ostream& outs)
{
    outs << "(" << x << "," << y << ")"<< endl;
}
int Point::checkRange(int val)
{
    if (val < 0)
    {
        val = 0;
    }
    else if (val >= DIMENSION)
    {
        val = DIMENSION - 1;
    }
    return val;
}


istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}



