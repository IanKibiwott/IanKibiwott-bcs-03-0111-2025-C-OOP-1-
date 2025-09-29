/*assignment question 6
Name: Ian Kibiwott 
adm:Bcs-03-0111/2025
Date: 15/09/2025
Assignment;
Question 6
Write a program that requests the user to enter hours worked in a week and the houly wage.The program shoul
then print the gross pay,the taxes and the net pay. Assume the following;
-overtime(in excess of 40 hoursof for week )=time and half 
-tax rate:15% of the first 600$,20% of the rest 
*/




#include<iostream>
using namespace std;
int main(){
	//declare variables 
	double hours,wage,grossPay,taxes,netPay;
	//input
	cout<<"Enter hours worked in a week:";
	cin>>hours;
	cout<<"Enter hourly wage:";
	cin>>wage;
	//Gross pay calculation 
	if(hours<=40){
		grossPay=hours*wage;
	}else{
		grossPay= 40*wage+(hours-40)*wage*1.5;
	}
	//Tax calculation 
	if(grossPay<=600){
		taxes=0.15*grossPay;
	}else{
		taxes=0.15*600+0.20*(grossPay-600);
	}
	//Net pay
	netPay =  grossPay-taxes;
	//Output
	
	cout<<"\n---PAYSLIP---\n";
	cout<<"GrossPay:$"<<grossPay<<endl;
	cout<<"Taxes: $"<<taxes<<endl;
	cout<<"Net Pay: $"<<netPay<<endl;
	return 0;
}
