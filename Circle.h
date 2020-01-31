#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

//Include appropriate files
#include "MCG_GFX_Lib.h"
#include <iostream>
#include <cmath>
#include <Windows.h>

//Class to create circle
class Circle
{
private:
	float diameter = 0;				//Diameter of circle
	glm::ivec2 windowSize{ NULL };	//Winow size to use in calculations and checks
	glm::ivec2 center{ NULL };		//vec2(x,y) center position of circle
	glm::ivec2 endPosition{ NULL };	//Position of the end point of the circle
	glm::ivec2 currentPosition{ NULL };	//The current position the pixel is at on the window

	glm::ivec3 colour{ 255, 0, 0 };		//The colour the pixel's drawn as

	float timer = 0.0;		//Timer used for calculation in currentPosition

public:
	//Class Constructor
	Circle(glm::ivec2 windowDimension);

	//Class Deconstructor
	~Circle();


	//Function to ask user the diameter as input
	void askRadius();


	//Function to draw circle onto window
	void drawCircle();


	//Function to fill circle with set colour
	//...Same calculation as 'drawCircle()' BUT minus from diameter to draw from outside towards the center..
	//...Draw a circle in a circle in a circle, etc. UNTIL completely filled with colour
	void fillCircle();
};

#endif
