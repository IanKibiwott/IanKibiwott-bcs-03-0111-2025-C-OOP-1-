/*
Name- Ian Kibiwott
ADM- BCS-03-0111/2025
CAT 2 QUESTION 2
*/
#include<iostream>
using namespace std;
 //Base class Person 
 class Person {
	 protected:
	 	//protected data member name
	 	string name;
	 	public:
	 		//public function setName 
	 		void setName(string n){
				 name = n;
			 }
			 //public function to get  name
			 string getName(){
				 return name;
			 }
 };
 //derived class LibraryMember inheriting from Person
 class LibraryMember: public Person{
	 private:
	 	//private data members
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
	 	//private data member
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
	 PremiumMember Mem1("Ian  Kibiwott",111,2,100.00);
	 //Display 
	 cout << "\n===LIBRARY MANAGEMENT SYSTEM===" << endl;
	 cout<< "Member Name:" << Mem1.getName() << endl;
	 cout << "Member Id:" <<  Mem1.getMemberID() << endl;
	 cout << "Books Borrowed:" <<  Mem1.getBooksBorrowed() << endl;
	 cout << "Membership fee: " << Mem1.getMembershipFee() << endl;
	 return 0;
 }