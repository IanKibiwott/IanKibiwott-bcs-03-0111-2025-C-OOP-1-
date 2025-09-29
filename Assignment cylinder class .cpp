/*
	name:Ian Kibiwott
	adm:BCS-03-0111/2025
	Cylinder assignment 
	*/

#include<iostream>
#include<cmath>
using namespace std;
//define a cylinder class 
class Cylinder {
	public:
//data members
		double radius,height ;
		
//member function to calculate volume of the cylinder 
double calculateVolume() const {
	return M_PI *pow(radius,2) * height;

}
//member function to calculate the surface area of the cylinder 
double calculateSurfaceArea() const{
	return 2 * M_PI * radius * (radius + height);

}
};
int main(){
	//create an object for cylinder
	Cylinder cylinder1;
	//variables to store results 
	double volume,surfaceArea;
	//assign values to radius and height
	cylinder1.radius= 5.0;
	cylinder1.height=10.0;
	//call class functions to calculate values 
	volume =cylinder1.calculateVolume();
	surfaceArea= cylinder1.calculateSurfaceArea();
	//output 
	cout<< "The volume of the cylinder: "<< volume<< endl;
	cout<< "The surface area of the cylinder is:"<< surfaceArea<<endl;
	return 0;
}

