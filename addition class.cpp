/*NAME:IAN KIBIWOTT 
	REG NO:BCS-03-0111/2025
	ADDITION CLASS */
#include<iostream>
using namespace std;
//define a class called addition 
class Addition {
	public:
//data members 
		int num1, num2, num3;
//member function to calculate the product of three intergers 
		long long calculate_product(){
			return static_cast<long long> (num1) * num2 * num3;
		
		}
		
};
int main(){
	//create an object 
	Addition add1;
	//variable to hold the results 
	long long product;
	//assign values 
	add1.num1=22;
	add1.num2=30;
	add1.num3=50;
	//call the member function to compute the product 
	product= add1.calculate_product();
	//output
	cout<<"The product of the three intergers is:"<<product <<endl;
	return 0;

}
