/**********************************
 ** Program Filename: Box.cpp
 ** Author: reuben youngblom
 ** Date: October 26th 2016
 ** Description: header file for the Box program. The program creates a class called Box, and this calss can take three parameters which will describe a box, or it will default to zero.  Given these parameters, the program will calculate the volume and surface area.  This is the program file, which has the functions and main and constructors, and includes Box.hpp
 ** Input: The class could take three input variables (described above), but they can be predefined or user-input.
 ** Output: will kick out the volume and surface area of the described box
 **********************************/

#include "Box.hpp"

Box::Box( double lx, double wx, double hx)  //box constructor, used for when values are given
{
    setWidth(wx);  //sets one taken-in value to width
    setLength (lx);  //sets another to length
    setHeight (hx);  //sets the last to height
    
}


Box::Box()  //constructor for if there were no parameters given
{
    length = 1.0;  //defaults everything to 1.0
    width = 1.0;
    height = 1.0;
}


void Box::setLength(double lx)  //void function to set length to parameter l
{
    length = lx;  //sets it equal
}

void Box::setWidth (double wx)  //sets width to parameter w
{
    width = wx;  //sets it equal
}
void Box::setHeight (double hx) //void function to set height to parameter h
{
    height = hx;  //sets it equal
}

double Box::getVolume ()  //function used to get volume.  Contains volume calculation and kicks it back out
{
    return (length*width*height);  //volume calculation function
}


double Box::getSurfaceArea ()  //used to get surface area.  Contains formula and returns result
{
    double Area;  //creates holding variable.  This isn't strictly necessary (i could have just returned it), but i couldn't decide if named variable was more or less clear than just returning output so I did one of both)
    Area = ((2.0 * (length*width)) + (2.0 * (length*height)) + (2.0*(width*height)));  //sets Area equal to formula for surface area
    return Area;  //kicks back Area
}


//main, commented out
/*
int main() {
    
    
    Box box1 (2.4, 7.1, 5.0);
    Box box2;
    double volume1 = box1.getVolume();
    double surfaceArea1 = box1.getSurfaceArea();
    double volume2 = box2.getVolume();
    double surfaceArea2 = box2.getSurfaceArea();
    
    
    cout << box1.getSurfaceArea() << endl;
    cout << box1.getVolume() << endl;
    cout << box2.getSurfaceArea() << endl;
    cout << box2.getVolume() << endl;
    
    
    return 0;
}
*/
