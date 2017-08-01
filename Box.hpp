/**********************************
 ** Program Filename: Box.hpp
 ** Author: reuben youngblom
 ** Date: October 26th 2016
 ** Description: header file for the Box program. The program creates a class called Box, and this calss can take three parameters which will describe a box, or it will default to zero.  Given these parameters, the program will calculate the volume and surface area.  This is the header file, which contains the class and function prototypes.
 ** Input: The class could take three input variables (described above), but they can be predefined or user-input.
 ** Output: will kick out the volume and surface area of the described box
 **********************************/

#include <iostream>
using namespace std;

class Box  //creates the class Box
{
private:  //private members, used to create variables
    double length;
    double width;   //these are three variables.  Almost doesn't matter which one is which.
    double height;
public:
    Box (double l, double w, double h);   //box prototype for if specs are given.  takes three parameters
    Box ();   //box prototype for no parameters, in which case they will default to 1.0
    void setLength (double);  //this will set the length of the box by taking in a double
    void setWidth (double);   //sets the width
    void setHeight (double);  //sets the height
    double getVolume ();   //this is the volume function.  Contains the volume formula and returns is
    double getSurfaceArea ();   //surface area function, contains the formula for calculating surface area and returns result of the calculation.
    
};
