/* 
Name; Ian Kibiwott
Adm: BCS-0111-03/2025
Assignment: Polymorphism for shapes ;Rectangle and Circle
*/


#include <iostream>

using namespace std;
//Base class shape
class Shape {
	public:
		//virtual function for polymorphism
		virtual void area(){
			cout << "Area calculation not defined for generic Shape." << endl;
		}
		
		//virtual destructor 
		virtual ~Shape(){}
		};
		//derived class Rectangle
		class Rectangle : public Shape {
			private:
				double length;
				double width;
				public:
					//constructure to initialize length and width 
				Rectangle( double l,double w){
				length = l;
				width = w;
				}
				//overide area()method(without usinf 'override ' keyword)
				void area()  {
					cout << "The Area of Rectangle is:" << length * width << endl; 
					}
					};
				//derived class Circle
		class Circle : public Shape{
			private:
				double radius;
				public:
					//constructor to initialize radious
				Circle( double r ){
					radius = r;
				}
					//overide area()method(without using 'override' keyword)
				void area() {
					cout << "The Area of the circle is: " <<  3.142 * radius * radius  << endl;
				}
				};
				//class to test polymorphism
				class PolymorphismTest{
					public:
						void testPolymorphism(){
						Shape* shapeptr; //Base class pointer
						char choice;
						//get user inputs for shapes choice
						cout << "Choose a Shape( R for Rectangle, C for Circle):" ;
						cin >> choice;
						//create appropriate object based on user choice 
						if (choice == 'R' || choice == 'r') {
							double l, w;
							cout << "Enter Length and Width:";
							cin >> l >> w;
							shapeptr = new Rectangle(l, w);
						}else{
							double r;
							cout << "Enter radius:";
							cin >> r;
							shapeptr = new Circle(r);
						}
						shapeptr->area();//polymorphism in action
						delete shapeptr;
						}
							};
						int main(){
							PolymorphismTest test;
							test.testPolymorphism();//Run Polymorphism test
						return 0;
						}
						
						
						
						
						
						
						
