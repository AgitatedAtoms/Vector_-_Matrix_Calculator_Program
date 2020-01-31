#pragma once
#ifndef SQUARE_H
#define SQUARE_H

//Use the MCG Library for MCG::.. functions
#include "MCG_GFX_Lib.h"
//Use the basic iostream for: std::cout, etc.
#include <iostream>
#include <Windows.h>

//Class to create a square
class Square
{
//Main variables for the class
private:
	float sideLength = NULL;			//Length of the square's sides
	glm::ivec2 startPosition{ NULL };	//Position the square's going to start being drawn to
	glm::ivec2 currentPosition{ NULL };	//Current position the square's drawing is at
	glm::ivec3 colour{ 255, 0, 0 };		//The RGB colour the square is drawn in(red)

	int currentSide = 1;				//To say which side the drawing is CURRENTLY on

	glm::ivec2 windowSize{ NULL };		//The windowSize is set to the window's dimensions to use later

//The class's functions
public:
	//Constructor with window's dimensions as pass by
	Square(glm::ivec2 windowDimension);
	//Deconstructor
	~Square();

	//Function which asks the user how long the square side lengths are going to be
	void askSideLengths();

	//Function to draw square
	void drawSquare();

	//Function to fill in newly created square
	void fillInShape();
};

#endif
