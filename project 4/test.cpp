/**
 * test.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183, Fall 2020
 * Project 4: CoolPics
 *
 * <#Name(s)#> Jazib Ahmad
 * <#uniqname(s)#> jaziba
 *
 * Contains functions for testing classes in the project. 
 */

#include "Graphics.h"
#include "Circle.h"
#include "Color.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"

#include <iostream>
#include <fstream>

using namespace std;


void test_Circle();
void test_Color();
void test_Graphics();
void test_Line();
void test_Point();
void test_Rectangle();
void test_Triangle();

void startTests()
{
    test_Point();
    test_Rectangle();
    test_Color();
    test_Circle();
    test_Line();
    test_Triangle();
    
    
    return;
}

void test_Circle()
{
    Point p(50, 60);
    Point p2(40, 40);
    Point p3(0, 0);
    Point p4(99, 99);
    Point p5(100, 100);
    
    Color color(148, 0, 211);
    Circle c;
    Circle c2(p, 20,color);
    Circle c3(p3, 200, color);
    Circle c4(p, -10, color);
    
    //test of constructors
    cout << c3 << endl;
    cout << c4 << endl;
    cout << c2 << endl;
    cout << c << endl;
    
    
    c2.setCenter(p2);
    c2.getCenter();
    c2.setCenter(p3);
    c2.getCenter();
    c2.setCenter(p4);
    c2.getCenter();
    c2.setCenter(p5);
    c2.getCenter();
    
    //tests for setRadius()
    c2.setRadius(10);
    c2.getRadius();
    c2.setRadius(-10);
    c2.getRadius();
    c2.setRadius(200);
    c2.getRadius();
    c2.setRadius(50);
    c2.getRadius();
    c2.setRadius(-300);
    c2.getRadius();
    
    
    c.setRadius(10);
    c.getRadius();
    c.setRadius(-10);
    c.getRadius();
    c.setRadius(200);
    c.getRadius();
    c.setRadius(50);
    c.getRadius();
    c.setRadius(-300);
    c.getRadius();
    
    
    c3.setRadius(10);
    c3.getRadius();
    c3.setRadius(-10);
    c3.getRadius();
    c3.setRadius(200);
    c3.getRadius();
    c3.setRadius(50);
    c3.getRadius();
    c3.setRadius(-300);
    c3.getRadius();
    
    
    c4.setRadius(10);
    c4.getRadius();
    c4.setRadius(-10);
    c4.getRadius();
    c4.setRadius(200);
    c4.getRadius();
    c4.setRadius(50);
    c4.getRadius();
    c4.setRadius(-300);
    c4.getRadius();
    
    
    //more tests for setCenter()
    c.setCenter(p2);
    c.getCenter();
    c.setCenter(p3);
    c.getCenter();
    c.setCenter(p4);
    c.getCenter();
    c.setCenter(p5);
    c.getCenter();
    c.setRadius(10);
    c.getRadius();
    c.setRadius(-10);
    c.getRadius();
    c.setRadius(200);
    c.getRadius();
    c.setRadius(50);
    c.getRadius();
   
    
    
    
    c.read(cin);
    c.write(cout);
    c2.read(cin);
    c2.write(cout);
    
    
    
}

void test_Rectangle()
{
    Point p1(50, 60);
    Point p2(80, 100);
    Point s1(25,35);
    Point s2(55, 65);
    
    Color c1(100, 25, 13);
    Color c2(124, 230, 54);
    Color c3(54, 124, 13);
    Color c4(97, 43, 170);
    
    //test for constructors
    Rectangle test;
    cout << test <<endl;
    Rectangle r( p1, p2, c1, c2, c3, c4);
    cout << r <<endl;
    Rectangle r2(s1, s2, c3);
    cout << r2 << endl;
    r2.setColor(c4);
    
   
    
    Point p3(20, 40);
    Point p4(10, 50);
    
    //tests for setStart() and getEnd()
    r.setStart(p3);
    if (r.getStart().getX() != p3.getX() ||
        r.getStart().getY() != p3.getY())
    {
          cout << "   FAILED set/get point" << endl;
    }
    r.setEnd(p4);
    if (r.getEnd().getX() != p4.getX() ||
        r.getEnd().getY() != p4.getY())
    {
          cout << "   FAILED set/get point" << endl;
    }
    
    Color c5(34, 78, 13);
    Color c6(70, 17, 77);
    Color c7(99, 87, 27);
    Color c8(144, 10, 50);
    
    
    //tests for set color
    r.setColorTopLeft(c5);
    if(r.getColorTopLeft().getRed() != c5.getRed() ||
       r.getColorTopLeft().getGreen() != c5.getGreen() ||
       r.getColorTopLeft().getBlue() != c5.getBlue())
    {
        cout << "   FAILED set/get Color" << endl;
    }
    
    r.setColorTopRight(c6);
    if(r.getColorTopRight().getRed() != c6.getRed() ||
       r.getColorTopRight().getGreen() != c6.getGreen() ||
       r.getColorTopRight().getBlue() != c6.getBlue())
    {
        cout << "   FAILED set/get Color" << endl;
    }
    
    r.setColorBottomRight(c7);
    if(r.getColorBottomRight().getRed() != c7.getRed() ||
       r.getColorBottomRight().getGreen() != c7.getGreen() ||
       r.getColorBottomRight().getBlue() != c7.getBlue())
    {
        cout << "   FAILED set/get Color" << endl;
    }
    
    r.setColorBottomLeft(c8);
    if(r.getColorBottomLeft().getRed() != c8.getRed() ||
       r.getColorBottomLeft().getGreen() != c8.getGreen() ||
       r.getColorBottomLeft().getBlue() != c8.getBlue())
    {
        cout << "   FAILED set/get Color" << endl;
    }
    r.setColor(c2);
    
    r.read(cin);
    r.write(cout);
    
    
}



void test_Color(){
    
    //test for constructors
    Color c;
    cout << c <<endl;
    
    Color c2(100,240,60);
    cout << c2 << endl;
       
    
    c.setRed(150);
    if (c.getRed()!= 150)
    {
          cout << "FAILED set/get " << endl;
    }
    
    //tests for getGreen()
    c.setGreen(220);
    if (c.getGreen()!= 220)
    {
          cout << "   FAILED set/get " << endl;
    }
    //test for setBlue() and getBlue()
    c.setBlue(100);
    if (c.getBlue()!= 100)
    {
          cout << "   FAILED set/get " << endl;
    }
    c.setBlue(0);
    c.setBlue(255);
    c.setBlue(279);
    c.setBlue(-10);
    
    c.setRed(0);
    c.setRed(255);
    c.setRed(279);
    c.setRed(-10);
    
    c.setGreen(0);
    c.setGreen(255);
    c.setGreen(279);
    c.setGreen(-10);
    
    
    c2.setRed(60);
    if (c2.getRed()!= 60)
    {
          cout << "   FAILED set/get " << endl;
    }
    //test for setGreen
    c2.setGreen(70);
    if (c2.getGreen()!= 70)
    {
          cout << "   FAILED set/get " << endl;
    }
    
    c2.setBlue(100);
    if (c.getBlue()!= 100)
    {
          cout << "   FAILED set/get " << endl;
    }
    //more tests for set functions
    c2.setBlue(0);
    c2.setBlue(255);
    c2.setBlue(279);
    c2.setBlue(-10);
    
    c2.setGreen(0);
    c2.setGreen(255);
    c2.setGreen(279);
    c2.setGreen(-10);
    
    c2.setRed(0);
    c2.setRed(255);
    c2.setRed(279);
    c2.setRed(-10);
    
    
    
    c.read(cin);
    c.write(cout);
    
    
}


void test_Line()
{
    Point p(50, 60);
    Point p2(40, 40);
    Point p3(70, 80);
    Point p4(80,90);
    Point p5(0, 0);
    Point p6(99, 99);
    Point p7(400, 400);
    Point p8(50,50);
    Point p9(10, 10);
    Point p10(100, 100);

    Color color(148, 0, 211);
    Color c2(50, 0, 160);
    Color c3(37, 123, 84);
    
    Line a1(p2, p3, c3);
    a1.write(cout);
    Line a2(p, p4, c3);
    a2.write(cout);
    Line a3(p3, p2, c3);
    a3.write(cout);
    Line a4(p4, p, c3);
    a4.write(cout);
    Line a5(p5, p4, c3);
    a5.write(cout);
    Line a6(p4, p5, c3);
    a6.write(cout);
    Line a7(p5, p6, c3);
    a7.write(cout);
    Line a8(p6, p5, c3);
    a8.write(cout);
    Line a9(p4, p7, c3);
    a9.write(cout);
    Line a10(p7, p4, c3);
    a10.write(cout);
    Line a11(p7, p7, c3);
    a11.write(cout);

    
    
    
    
    
    
    
    
    //test for constructors
    Line l;
    Line l2(p, p2, color);
    Line l3(p2, p4, c2);
    cout << l3 << endl;
    l3.getColor();
    l3.setColor(c3);
    l3.getColor();
    cout << l3 << endl;
    
    
    
    cout << l << endl;
    cout << l2 << endl;
    
    //tests for getStart()
    l2.getStart();
    l2.setStart(p5);
    l2.write(cout);
    l2.getStart();
    l2.setStart(p6);
    l2.write(cout);
    l2.getStart();
    l2.setStart(p7);
    l2.write(cout);
    l2.getStart();
    l2.setStart(p8);
    l2.write(cout);
    l2.getStart();
    l2.setStart(p9);
    l2.write(cout);
    l2.getStart();
    
    l2.setEnd(p4);
    
    l.getStart();
    l.setStart(p5);
    l.write(cout);
    l.getStart();
    l.setStart(p6);
    l.write(cout);
    l.getStart();
    l.setStart(p7);
    l.write(cout);
    l.getStart();
    l.setStart(p8);
    l.write(cout);
    l.getStart();
    l.setStart(p9);
    l.write(cout);
    l.getStart();
    l.setStart(p10);
    l.write(cout);
    l.getStart();
   

    
    l.setEnd(p4);
    
    
    l2.write(cout);
    l.write(cout);
   
    
    
}


void test_Point() {
        // test of default constructor
    Point p1;
    cout << p1 << endl;
    
    // test of the non-default constructor
    Point p2(3, 9);
    cout << p2 << endl;

    // test of member function: setX()
    p1.setX(5);
    // test of member function: setY()
    p1.setY(3);

    // test of member functions getX() and getY()
    cout << "( " << p1.getX()
         << ", " << p1.getY()
         << " )" << endl;
    
    // you can also do cin >> p1;
    p1.read(cin);
    cout << p1 << endl;
    
    return;
}

void test_Triangle()
{
   
    Color c(148, 0, 211);
    Color c2(250,0,50);
    Color c3(50,160,250);
    Color c10(250, 250, 250);
    Color c11(0,0,0);
    Color c12(400,300,290);
    Point p(50, 60);
    Point p2(40, 40);
    Point p3(70, 80);
    Point p4(80,90);
    Point p5(80, 400);
    Point p6(400, 80);
    Point p7(-100, 10);
    Point p8(0,0);
    Point p9(99,99);

    
    
    
    Triangle t;
    Triangle t2(p, p2, p3, c);
    Triangle t3(p, c, p2, c2, p3, c3);
    
    Triangle t4(p2, p2, p2, c);
    Triangle t5(p2, p5, p7, c);
    Triangle t6(p8, p6, p9, c);
    
    
    
    
    //tests for constructors
    cout << t << endl;
    cout << t2 << endl;
    cout << t3 << endl;
    
    
    t2.setColor(c10);
    t2.setColor(c11);
    t2.setColor(c12);
    t2.setColor(c2);
    t2.setColor(c3);
    t2.setColor(c);
   
    

   Point p10(150, 150);
    
    
    
    Color c4(20, 0, 211);
    Color c5(150,115,50);
    Color c6(68,160,199);
    
    
    //tests for getVertex()
    t3.setVertexOne(p8);
    t3.getVertexOne();
   
    
    t3.setVertexTwo(p9);
    t3.getVertexTwo();
  
    
   t3.setVertexThree(p10);
    t3.getVertexThree();
    
    t2.setVertexOne(p8);
    t2.getVertexOne();
   
    
    t2.setVertexTwo(p9);
    t2.getVertexTwo();
  
    
    t2.setVertexThree(p10);
    t2.getVertexThree();
  
    
    
    
    t3.setVertexOne(p5);
    t3.getVertexOne();
    t3.setVertexOneColor(c4);
    t3.getVertexOneColor();
    
    t3.setVertexTwo(p6);
    t3.getVertexTwo();
    t3.setVertexTwoColor(c5);
    t3.getVertexTwoColor();
    
    t3.setVertexThree(p7);
    t3.getVertexThree();
    t3.setVertexThreeColor(c6);
    t3.getVertexThreeColor();
    
    
    Triangle k;
    Point pa(3, 3);
    Point pb(3, 7);
    Point pc(7, 5);
    //More tests for setVertex and getVertex()
    k.setVertexOne(pa);
    k.setVertexOne(pb);
    k.setVertexOne(pc);
    cout << k.getVertexOne() << endl;
    cout << k.getVertexTwo() << endl;
    cout << k.getVertexThree() << endl;
    
    //tests for get vertexcolor()
    Color color1;
    color1.setRed(0);
    color1.setGreen(0);
    color1.setBlue(200);
    Color color2;
    color2.setRed(115);
    color2.setGreen(0);
    color2.setBlue(60);
    Color color3;
    color3.setRed(0);
    color3.setGreen(200);
    color3.setBlue(0);
    k.setVertexOneColor(color2);
    k.setVertexTwoColor(color1);
    k.setVertexThreeColor(color3);
    cout << k.getVertexOneColor() << endl;
    cout << k.getVertexTwoColor() << endl;
    cout << k.getVertexThreeColor() << endl;
    
    
    
    
    t3.write(cout);
    t3.read(cin);
    
}



