#pragma once
#ifndef LINE_H
#define LINE_H

//Use the MCG Library to use MCG::... function
#include "MCG_GFX_Lib.h"
//Also use the basic iostream for: std::cout, etc.
#include <iostream>
#include <Windows.h>

//Line creator's class
class Line
{
//Class's main variables
private:
	float lineLength = NULL;			//Line's Length
	glm::ivec2 startPosition{ NULL };	//Position the shape is going to start drawing from
	glm::ivec2 currentPosition{ NULL };	//Position the pixel the drawing is currently at
	glm::ivec3 colour{ 255, 0, 0 };		//The RGB colour the pixel is drawn as(Red)

	glm::ivec2 windowSize{ NULL };		//Used to calculate where the drawing should start

//Class's functions
public:
	//Constructor
	Line(glm::ivec2 windowDimensions);

	//Deconstructor
	~Line();


	//Ask the user how long the side lengths should be
	void askLineLength();


	//Function the draw the line onto the created window
	void drawLine();
};


#endif
