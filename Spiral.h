#pragma once
#ifndef SPIRAL_H
#define SPIRAL_H

//Include appropriate libs
#include "MCG_GFX_Lib.h"
#include <iostream>
#include <cmath>
#include <ctime>

//Class to create Spiral shape
class Spiral
{
private:
	glm::ivec2 windowSize{ NULL };		//windowSize set to pass by, used for calculations/checks

	glm::ivec2 oneCurrentPosition{ NULL };	//1st Curret position of the pixel on the window
	glm::ivec2 twoCurrentPosition{ NULL };	//2nd Curret position of the pixel on the window
	glm::ivec2 threeCurrentPosition{ NULL };	//3rd Curret position of the pixel on the window
	glm::ivec2 fourCurrentPosition{ NULL };	//4th Curret position of the pixel on the window

	glm::ivec2 startPosition{ NULL };	//The starting position of the pixel on the window
	glm::ivec3 colour{ 255, 0, 0 };		//The colour of the drawn pixel

	float timer = 0.0;		//Timer used for creating spiral

public:
	//Class Constructor
	Spiral(glm::ivec2 windowDimension);

	//Class Deconstructor
	~Spiral();


	//Fucntion to draw out Spiral
	void drawSpiral();
};

#endif
