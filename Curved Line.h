#pragma once
#ifndef CURVEDLINE_H
#define CURVEDLINE_H

#include "MCG_GFX_Lib.h"
#include <iostream>
#include <Windows.h>

class CurvedLine
{
private:
	//The (ax,ay), (bx,by), and (cx, cy) points ready to be assigned by user
	int ax = 0, ay = 0, bx = 0, by = 0, cx = 0, cy = 0;
	glm::ivec2 windowSize{ NULL };
	//RGB colour to draw pixel as RED
	glm::ivec3 colour{ 255, 0, 0 };

	//Current position the drawing is at
	glm::ivec2 currentPosition{ NULL };

	//ivec2(x,y) for a,b,and c positions
	//a AND b positions = start and end point
	//c position = Curve Point Position
	glm::fvec2 aPosition{ NULL };
	glm::fvec2 bPosition{ NULL };
	glm::fvec2 cPosition{ NULL };

	float curLength = 0.0;

public:
	//Class Constructor
	CurvedLine(glm::ivec2 windowDimension);

	//Class Deconstructor
	~CurvedLine();


	//CHECK EACH INPUT FOR INCORRECT VALUE WITHIN 3 FUNCTIONS BELOW
	//Function to ask A's position
	void askAPosition();


	//Function to ask b's position
	void askBPosition();


	//Function to ask the Curve's position / C Position
	void askCurvePosition();


	//Function to draw the curved line using the users inputs, and a FUN MATH EQUATION
	int drawCurvedLine();
};

#endif
