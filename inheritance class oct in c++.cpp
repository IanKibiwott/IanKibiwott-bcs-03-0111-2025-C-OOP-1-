/*
Name; Ian Kibiwott
Reg no ; Bcs-03-0111/2025
Inheritance class work 


*/


#include<iostream>
using namespace std;
//base class
class AccountHolder {
	protected:
		string name;
		public:
			void setName(string n){
				name = n;
				
			}
			string getName (){
				return name;
			}
};
//derived class
class BankAccount: public AccountHolder{
	private:
		int AccountNumber;
		double balance;
		public:
			BankAccount( string n,int AccountNo, double bal){
				setName(n);
				AccountNumber = AccountNo;
				balance   = bal;
				
			}
				int getAccountNumber(){
					return AccountNumber;
					
				}
				double getBalance(){
					return balance;
						}   
};
//further derived class
class SavingsAccount: public BankAccount{
	private:
		double interestRate;
		public:
			SavingsAccount(string n,int AccountNo, double bal, double IntRate):BankAccount(n,AccountNo,bal){
				interestRate = IntRate;		
}

	double getInterestRate(){
		return interestRate;
		
	}};
	int main(){
		//Creating an object of savingsAccount 
		SavingsAccount mySavings("John doe",12445,5000.0,2.5);
		//Display account details
		cout << "\n===SAVINGS ACCOUNT===" << endl;
		cout << "AccountHolder;" << mySavings.getName() << endl;
      cout << "AccountNumber;" << mySavings.getAccountNumber() << endl;
	cout << "Balance $;" << mySavings.getBalance() << endl;
	cout << "Interest rate:" << mySavings.getInterestRate() << endl;
	return 0;}
	
/*
Name; Ian Kibiwott
Reg no ; Bcs-03-0111/2025
Inheritance class work 
*/
#include<iostream>
using namespace std;
//base class
class AccountHolder{
	protected:
		string name;
		public:
			void setName(string n){
				name = n;
				
			}
			string getName (){
				return name;
			}
};
//derived class
class BankAccount: public AccountHolder{
	private:
		int AccountNumber;
		double balance;
		public:
			BankAccount( string n,int AccountNo, double bal){
				setName(n);
				AccountNumber = AccountNo;
				balance   = bal;
				
			}
				int getAccountNumber(){
					return AccountNumber;
					
				}
				double getBalance(){
					return balance;
						}   
};
//further derived class
class SavingsAccount: public BankAccount{
	private:
		double interestRate;
		public:
			SavingsAccount(string n,int AccountNo, double bal, double IntRate):BankAccount(n,AccountNo,bal){
				interestRate = IntRate;		
}

	double getInterestRate(){
		return interestRate;
		
	}};
	int main(){
		//Creating an object of savingsAccount 
		SavingsAccount mySavings("John doe",12445,5000.0,2.5);
		//Display account details
		cout << "\n===SAVINGS ACCOUNT===" << endl;
		cout << "AccountHolder;" << mySavings.getName() << endl;
      cout << "AccountNumber;" << mySavings.getAccountNumber() << endl;
	cout << "Balance $;" << mySavings.getBalance() << endl;
	cout << "Interest rate:" << mySavings.getInterestRate() << endl;
	return 0;
	}
	