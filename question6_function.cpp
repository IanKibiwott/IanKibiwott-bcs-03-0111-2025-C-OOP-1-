#include <iostream>
using namespace std;

//funtion prototype 
float simple_interest (float rate ,int time ,int principle);
float calculate_discount(float purchase);
 int main(){
	// function call
	float s_interest,rate, time, principle;
	// s_interest = simple_interest(10,5,20000);
	cout<<"Enter rate,time and principle"<<endl;
	cin>>rate>>time>>principle;
	s_interest = simple_interest(rate,time,principle);
	 cout<<"The Simple Interest is"<<s_interest<<endl;
	 //Discount calculation
	 float purchase;
	 cout<<"Enter Purchase Amount;";
	 cin>>purchase;
	 float finalAmount = calculate_discount(purchase);
	 cout<<"Final Amount after discount;"<<finalAmount<<endl;
 }
 //Funtion definition 
 float simple_interest (float rate ,int time ,int principle){
	 float interest;
	 interest= principle * rate/100 *time;
	 return interest;
	 
 }
 //Funtion definition for  discount
 float calculate_discount(float purchase){
 float discount=0;
 
 if (purchase > 5000)
 {
	 discount= purchase*0.10;//10% discount 
	 
 }else if (purchase>=1000){
	 discount=purchase*0.05;//5% discount 
	 
 } else {
	 discount=0;
 }
 
 return purchase - discount; //Final amount after discount
 } 
 