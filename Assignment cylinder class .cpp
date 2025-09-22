#include<iostream>
#include<cmath>
using namespace std;

class Cylinder {
	public:
		double radius,height ;
		

double calculateVolume() const {
	return M_PI *pow(radius,2) * height;

}
double calculateSurfaceArea() const{
	return 2 * M_PI * radius * (radius + height);

}
};
int main(){
	
	Cylinder cylinder1;
	double volume,surfaceArea;
	cylinder1.radius= 5.0;
	cylinder1.height=10.0;
	volume =cylinder1.calculateVolume();
	surfaceArea= cylinder1.calculateSurfaceArea();
	
	cout<< "The volume of the cylinder: "<< volume<< endl;
	cout<< "The surface area of the cylinder is:"<< surfaceArea<<endl;
	return 0;
}

