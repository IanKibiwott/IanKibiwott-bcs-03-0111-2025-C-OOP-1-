//polymorphism
#include <iostream>
using namespace std;
//defined class
class LoanProcessing{
	public:

			void processLoan(int amount){
				cout << "Processing Loan Amount:  " << amount << endl;	
		}
		
		void processLoan(double amount,double interest){
			cout << "Loan amount is:" << amount << endl;
			cout << "Interest is :" << interest << endl;
			 
		}
		void processLoan(string customerName, int amount, int duration ){
		cout<< "customer Name: " << customerName << endl;
		cout<< "Amount is:" << amount << endl;
		cout<< "Duration is : " << duration <<endl;
		}
};
int main(){

	LoanProcessing Li;
	Li.processLoan(1000);
	Li.processLoan(1000.00,10.5);
	Li.processLoan("Ian", 10000, 12);
	return 0;
}