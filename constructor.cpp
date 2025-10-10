#include<iostream>
using namespace std;
class Car{//The class
	public:// access specifier 
		string brand;//attribute 
		string model;//attribute 
		int year;//attribute
		Car(string x, string y, int z){// Constructor with parameters 
		brand = x;
		model = y;
		year = z;
		}
		~Car()	{
		cout<<"The destructor has been called \n";
		}			
};
int main(){
	//Create car objects and call the constructor with different values
	Car carObj1("BMW","X5",1999);
	Car carObj2("Ford","Mustang",1969);
	Car carObj3("Toyota", "Rav4",1978);
	//print values 
	cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<"\n";
	cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<"\n";
	cout<<carObj3.brand<<" "<<carObj3.model<<" "<<carObj3.year<<"\n";
	return 0;
}