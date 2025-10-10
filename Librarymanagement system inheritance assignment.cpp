/*
Name; Ian Kibiwott
Reg no ; Bcs-03-0111/2025
Assignment; Library management system inheritance 
*/

#include<iostream>
using namespace std;
 //Base class Person 
 class Person {
	 protected:
	 	string name;
	 	public:
	 		//function to set name 
	 		void setName(string n){
				 name = n;
			 }
			 //function to get  name
			 string getName(){
				 return name;
			 }
 };
 //derived class LibraryMember inheriting from Person
 class LibraryMember: public Person{
	 private:
	 	int memberID;
	 	int booksBorrowed;
	 	public:
	 		//constructor to initialize all data members 
	 		LibraryMember(string n, int Id,int borrow){
				 setName(n);
				 memberID = Id;
				 booksBorrowed = borrow;
				 
			 }
			 //function to get memberID 
			 int getMemberID(){
				 return memberID;
			 }
			 //function to get books borrowed
			 int getBooksBorrowed(){
				 return booksBorrowed;
			 }
	 	
 };
 //further derived class PremiumMember Inheriting from LibraryMember
 class PremiumMember: public LibraryMember{
	 private:
	 	double membershipFee;
	 	public:
	 		//constructor that calls base class constructor 
	 		PremiumMember(string n, int Id, int borrow, int fee): LibraryMember(n,Id,borrow){
				 membershipFee = fee;
			 }
			 //function to get membership fee 
			 int getMembershipFee(){
				 return membershipFee;
			 }
 };
 int main(){
 	// Creating an object of PremiumMember
	 PremiumMember Member("John doe",1232,2,200.00);
	 //Display 
	 cout << "\n===LIBRARY MANAGEMENT SYSTEM===" << endl;
	 cout << "Member Id:" << Member.getMemberID() << endl;
	 cout << "Books Borrowed" << Member.getBooksBorrowed() << endl;
	 cout << "Membership fee " << Member.getMembershipFee() << endl;
	 return 0;
 }