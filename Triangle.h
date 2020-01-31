#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H 

//Use the MCG Library for MCG::.. functions
#include "MCG_GFX_Lib.h"
//Use the basic iostream for: std::cout, etc.
#include <iostream>
//Used for calculations
#include <cmath>
#include <Windows.h>

//Triangle Class
class Triangle
{
//Class's variables
private:
	float triangleSize = NULL;			//Length of the square's sides
	glm::ivec2 startPosition{ NULL };	//Position the square's going to start being drawn to
	glm::ivec2 currentPosition{ NULL };	//Current position the square's drawing is at
	glm::ivec3 colour{ 255, 0, 0 };		//The RGB colour the square is drawn in(red)

	int currentSide = 1;				//To say which side the drawing is CURRENTLY on
	int oppositeXSide = 0;
	int adjacentYSide = 0;
	int hypotenuseSide = 0;

	float timer = 0.0;

	glm::ivec2 windowSize{ NULL };		//The windowSize is set to the window's dimensions to use later

//Class's functions
public:
	//Constructor
	Triangle(glm::ivec2 windowDimension);

	//Deconstructor
	~Triangle();


	//Function to draw Right Angle Triangle
	void rightAngleTri();
};

#endif
