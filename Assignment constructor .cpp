#include<iostream>
using namespace std;
//class definition 
class Car{
	private:
	//private datamembers 
	string brand;
	string model;
	float price;
	int mileage;
	public:
	 Car(string a, string b, float c, int d){//constructor 
		 brand = a;
		 model = b;
		 price= c;
		 mileage = d;	 
	 }
	 //display function
	 void display(){
		 cout<<"Brand:" <<brand<<endl;
		 cout<<"Model:"<<model<<endl;
		 cout<<"Price:"<<price<<endl;
		 cout<<"mileage:"<<mileage<<endl;
		 
	 } 
	 //drive function 
	 void drive(int distance){
	 	mileage+=distance;
	 	cout<< "Car driven for" << distance<< "miles." << endl;
	 	cout<< "Updated Millage" << mileage<< "miles." << endl;
	 	
	 	
	 	
	 }
	 //destructor
	 ~Car(){  
		 cout<<"This is a destructor\n";
	 }
};
int main(){
	//create car objects 
	Car carobj1("Toyota","Corolla",2000.0,5000);
	//display carobjects using display function 
	carobj1.display();
	//simulate driving 
	carobj1.drive(150);
	carobj1.drive(300);
	return 0;
}