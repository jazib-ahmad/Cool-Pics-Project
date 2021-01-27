/**
 * Color.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183, Fall 2020
 * Project 4: CoolPics
 *
 * <#Name(s)#> Jazib Ahmad, Guanghan Ma
 * <#uniqname(s)#> jaziba , maguangh
 *
 * <#Description#>  program that reads in a description of shapes, draws those shapes, and saves the result to a file.
 *   Represents the different shapes using classes
 */

#include "Color.h"

// TODO: implement first checkRange, then two constructors, setRed, getRed,
//       setGreen, getGreen, setBlue, getBlue, read, write.


Color::Color()
{
	red = 0;
	blue = 0;
	green = 0;
}
Color::Color(int redVal, int greenVal, int blueVal)
{
	red = checkRange(redVal);
	blue = checkRange(blueVal);
	green = checkRange(greenVal);
}
void Color::setRed(int redVal)
{
	red = checkRange(redVal);
}
int Color::getRed()
{
	return red;
}
void Color::setGreen(int greenVal)
{
	green = checkRange(greenVal);
}
int Color::getGreen()
{
	return green;
}
void Color::setBlue(int blueVal)
{
	blue = checkRange(blueVal);
}
int Color::getBlue()
{
	return blue;
}
void Color::read(istream & ins)
{
	ins >> red >> green >> blue;
	setRed(red);
	setBlue(blue);
	setGreen(green);
}
void Color::write(ostream & outs)
{
	outs << " " << red << " " << green << " " << blue << endl;
}
int Color::checkRange(int val)
{
	
    if (val < 0) {
		val = 0;
	}
	else if (val > 255) {
		val = 255;
	}
	else {
		val = val;
	}
	return val;
}
// Don't change the implementations below!

istream& operator >> (istream& ins, Color& color)
{
color.read(ins);
return ins;
}

ostream& operator << (ostream& outs, Color color)
{
color.write(outs);
return outs;
}
