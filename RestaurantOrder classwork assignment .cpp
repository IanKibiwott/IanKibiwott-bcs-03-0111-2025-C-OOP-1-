/*
Name : Ian Kibiwott
ADM: BCS-03-0111/2025
CLASS ASSIGNMENT: Write a C++ program that demonstrates function overloading in a restaurant Ordering system 

*/


#include <iostream>
#include <string>
using namespace std;

class RestaurantOrder{
	public:
		//function to accept only food item name
		void placeOrder( string itemName){
			cout << "Order Confirmed: " << itemName <<endl;
			
		}
		//function that accepts food item name and quantity
		void placeOrder(string itemName, int quantity){
			cout << "Order Confirmed:" << itemName << "quantity:" << quantity << endl;
			
		}
		//function that accepts food item name,quantity and takeout option 
	void placeOrder(string itemName, int quantity, bool takeout){
		string orderType = takeout ? "takeOut": "dine-in";
		cout << "Order Confirmed:" << itemName << "Quantity:" << quantity << "Take Out:" << takeout << endl;
		
	}	
};
int main(){
		// create an object of RestaurantOrder class
	RestaurantOrder order;
	
	// call the functions & output
	cout << "=== Restaurant Ordering System ===" << endl;
	order.placeOrder("Pizza");
	order.placeOrder("Pasta",5);
	order.placeOrder("Chips",6, 4);
	return 0;
	
}