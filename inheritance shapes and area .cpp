/*
Name: Ian Kibiwott
REG NO- BCS-03-0111/2025 
ASSIGNMENT FOR INHERITANCE OF SHAPE RECTANGLE AND AREA 
*/

#include <iostream>
#include <string>
using namespace std;
//base class shape
class Shape{
	protected:
		string color;//protected that derived class can access
		public:
			//constructor with default color
			Shape(string c = "NoColor"){color = c;}
		//set the color
			void setColor(const string c)
			{
			color = c;}
			//get the color
			string getColor(){
				return color;
				
			}};
			//derived class Rectangle
			//inherits from shapes and represents a rectangle
			class Rectangle : public Shape{
				private:
					float length;//rectangle length
					float width;//rectangle width
					public:
						//constructor to initialize length,width and color base class
					Rectangle (float i, float w, string c) : Shape(c){
						length = i;
						width = w;
						
					}
					//calculationn of the area of the rectangle 
					float area (){
						return length * width;
						
					}};
//derived class circle 
//inherits from shape and represents the circle
class Circle : public Shape{
				private:
					float radius;//circle radius 
					
					public:
						//constructor to initialize radius and color using base class 
					Circle (float r, string c) : Shape(c){
						radius = r;
						
					}
					//calculationn of the area of the rectangle 
					float area (){
						return 3.14159f * radius * radius;
						
					}};
					//main function 
					int main(){
						//create a rectangle object 
						Rectangle rect(10, 5, "Red");
						//create a circle object
						Circle circ(7, "Blue");
						//Display 
						cout << "Rectangle:" << rect.getColor() << endl;
						cout << "Color:" << rect.getColor() << endl;
						cout << "Area:" << rect.area() << endl;
						
						cout << "\nCircle:" << endl;
						cout << "Color:" << circ.getColor() << endl;
						cout << "Area:" << circ.area() << endl;
						return 0;
					}
					
