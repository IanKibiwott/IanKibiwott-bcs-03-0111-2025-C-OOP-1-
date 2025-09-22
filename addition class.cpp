#include<iostream>
using namespace std;
class Addition {
	public:
		int num1, num2, num3;
		long long calculate_product(){
			return static_cast<long long> (num1) * num2 * num3;
		
		}
		
};
int main(){
	Addition add1;
	long long product;
	add1.num1=22;
	add1.num2=30;
	add1.num3=50;
	product= add1.calculate_product();
	
	cout<<"The product of the three intergers is:"<<product <<endl;
	return 0;

}