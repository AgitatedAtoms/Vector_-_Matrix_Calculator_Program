//Include Misc files
#include "MCG_GFX_Lib.h"
#include <cmath>
#include <ctime>
#include <iostream>
#include <windows.h>

//Include header files for ray tracer classes
#include "Rasterization.h"
#include "Camera.h"
#include "Ray.h"
#include "Tracer.h"
#include "Sphere.h"
#include "Spiral.h"

//Include header files for 2D shape classes
#include "Line.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Curved Line.h"
#include "Matrix Transformations.h"

//Prototypes - Create Window & Start Menu
int createWindow(glm::ivec2 windowSize);
void menu();

//2D Shape Class Prototypes
class Line;
class Square;
class Triangle;
class Circle;
class Spiral;
class CurvedLine;
class MatrixTrans;

//Ray Tracer Class Prototypes - 3D Sphere
class Rasterization;
class Camera;
class Ray;
class Tracer;
class Sphere;

//First function set to run
int main()
{
	//Manin Menu
	menu();
}

//Function which acts as menu to reach different features / shape drawings
void menu()
{
	//Loop the entire program, until user enter's '0', IN THIS MENU, to close the program
	bool loop = true;
	do
	{
		//Reset console and drawing window
		system("CLS");
		MCG::Cleanup();

		//Create Window with set dimensions(x,y)
		glm::ivec2 windowSize(640, 640);
		createWindow(windowSize);

		//Tell user how to navigate around the program
		{
			std::cout << "\nEnter a corrosponding value to view the shape!\n";
			std::cout << "\n  1) Line...";
			std::cout << "\n  2) Square...";
			std::cout << "\n  3) Triangle...";
			std::cout << "\n  4) Circle...";
			std::cout << "\n  5) Spiral...";
			std::cout << "\n  6) Curved Line...";
			std::cout << "\n  7) Matrix Transformation...";
			std::cout << "\n  8) Ray Tracer(3D Sphere)... INCOMPLETE - Ray Sphere Intersection Problem, See 'Read Me.txt'";
			std::cout << "\n  0) QUIT PROGRAM...";
			std::cout << "\n\n>>>> ";
		}
		//Set input of user's to variable
		char numInput = '0';
		std::cin >> numInput;

		//Switch statement to check the input on what's chosen
		switch (numInput)
		{
			//Line -- DONE
			case '1':
			{
				//Tell the user which function they chose and WAIT for 1 second
				std::cout << "\nCreating Line...";
				Sleep(1000);

				//Create new class object of Line and call the line draw function to draw the line
				Line* line = new Line(windowSize);

				//Reset the menu's loop
				break;
			}

			//Square
			case '2':
			{
				//Tell the user that they chose to draw a square and WAIT 1 second
				std::cout << "\nCreating Square...";
				Sleep(1000);

				//Create a new square class object and call the square's draw function
				Square* square = new Square(windowSize);

				//Reset the menu's loop
				break;
			}

			//Triangle
			case '3':
			{
				//Tell the user that they chose to draw a triangle and WAIT 1 second
				std::cout << "\nCreating Trianlge...";
				Sleep(1000);

				//Create a new triangle class object
				Triangle* triangle = new Triangle(windowSize);

				//Reset the menu's loop
				break;
			}

			//Circle
			case '4':
			{
				//Tell the user they chose to draw a circle and WAIT 1 second
				std::cout << "\nCreating Circle...";
				Sleep(1000);

				//Create a new class circle object and call its draw function
				Circle* circle = new Circle(windowSize);

				//Reset the menu's loop
				break;
			}

			//Spiral
			case '5':
			{
				//Tell the user they chose to draw a circle and WAIT 1 second
				std::cout << "\nCreating Spiral...";
				Sleep(1000);

				//Create a new class Spiral object and call its draw function
				Spiral* spiral = new Spiral(windowSize);

				//Reset the menu's loop
				break;
			}
			
			//Curved Line
			case '6':
			{
				//Tell the user they chose to draw a Curved Line and WAIT 1 second
				std::cout << "\nCreating Curved Line...";
				Sleep(1000);

				//Create a new Curved Line class object and call its draw function
				CurvedLine* cLine = new CurvedLine(windowSize);

				//Reset the menu's loop
				break;
			}

			//Square Matrix Transformation
			case '7':
			{
				//Tell the user they chose to draw a Matrix Transformations and WAIT 1 second
				std::cout << "\nCreating Matrix Transformation...";
				Sleep(1000);

				//Create a new Martix Transformations class object -- Seperate Menu Screen is loaded
				MatrixTrans* matTrans = new MatrixTrans(windowSize);

				//Reset the menu's loop
				break;
			}

			//Rasterization(3D Sphere) -- INCOMPLETE
			case '8':
			{
				//Tell the user they chose to draw a 3D sphere and WAIT 1 second
				std::cout << "\nRasterization(3D Sphere)...\nThis takes a while to load.. Please wait...";
				Sleep(1000);

				//Create a new Rasterization class object -- The Draw Function is started within the constructor
				Rasterization* rasterObject = new Rasterization(windowSize);
				
				//Reset the menu's loop
				break;
			}

			//QUIT
			case '0':
			{
				//Tell the user they chose to quit and WAIT 1 second before closing the drawing window...
				std::cout << "\nQUITTING...";
				Sleep(1000);

				std::cout << "\n";
				MCG::Cleanup();
				//...and END menu's loop
				return;
			}

			//ERROR
			default:
			{
				//Tell the user they inputter an incorrect value and to re-enter, then WAIT 2 seconds before looping the menu
				std::cout << "\nERROR: Incorrect input value.\nPlease Re-enter...";
				Sleep(2000);
				break;
			}
		}
		//Loop the menu UNTIL the loop is equal to false OR 'return;' is used to exit the entire menu function(void menu())
	} while (loop == true);
}

//Function for calling the MCG Library's Initialise function to create a window with set dimensions
int createWindow(glm::ivec2 windowSize)
{
	if (!MCG::Init(windowSize))
	{
		return -1;
	}
}
