#pragma once
#ifndef MATRIX_TRANS_H
#define MATRIX_TRANS_H

//include appropriate files
#include "MCG_GFX_Lib.h"
#include <GLM/gtx/transform.hpp>
#include <iostream>
#include <Windows.h>

//Class to create and calculate Matrix Transformations on 2D shapes
class MatrixTrans
{
private:
	//General
	glm::ivec2 windowSize{ NULL };
	glm::ivec3 firstColour{ 255, 0, 0 };
	glm::ivec3 secondColour{ 0, 255, 255 };

	//Positions
	glm::ivec2 currentPosition{ NULL };
	glm::ivec2 startPosition{ NULL };

	//Matrix Calculation
	float newX = 0.0, newY = 0.0;
	float xScalar = 0.0, yScalar = 0.0;
	glm::mat2x2 transMat{ NULL };
	glm::ivec2 newTransform{ NULL };

	//Line
	int lineLength = 100;

	//Square
	int sideLength = 100;
	int currentSide = 1;

	//Triangle
	int oppositeXSide = 0;
	int adjacentYSide = 0;
	int hypotenuseSide = 0;
	glm::ivec2 hStartPos{ NULL };

	//Circle
	glm::ivec2 center{ NULL };
	glm::ivec2 endPos{ NULL };
	int diameter = 100;
	float timer = 0.0;

	//Curved Line
	int ax = 0, ay = 0, bx = 0, by = 0, cx = 0, cy = 0;	//Used to collect user's inputs
	float curLength = 0.0;			//Current Line Length
	int xDifference = 0, yDifference = 0;		//X and Y difference between 1st point and 2nd point
	//1st Starting Positions
	glm::ivec2 aPosition{ NULL };		//Original(1st) aPosition
	glm::ivec2 bPosition{ NULL };		//Original(1st) bPosition
	glm::ivec2 curvePosition{ NULL };	//Original(1st) curveposition
	//2nd Starting Positions
	glm::ivec2 newAPosition{ NULL };		//New(2nd) aPosition
	glm::ivec2 newBPosition{ NULL };		//New(2nd) bPosition
	glm::ivec2 newCurvePosition{ NULL };	//New(2nd) curvePosition


public:
	//Class Constructor
	MatrixTrans(glm::ivec2 windowDimension);

	//Class Deconstructor
	~MatrixTrans();


	//Function to ask user which shape to create
	int whichShape();


	//Line Transformation Matrix -- DONE
	void lineTransform();


	//Square Transformation Matrix -- DONE
	void squareTransform();


	//Triangle Transformation Matrix -- NOPE
	void triangleTransform();


	//Circle Transformation Matrix -- DONE
	void circleTransform();


	//Curved Line Transformation Matrix -- WORKING ON -- LUNCH BREAK
	void curvedLineTransform();
};

#endif
