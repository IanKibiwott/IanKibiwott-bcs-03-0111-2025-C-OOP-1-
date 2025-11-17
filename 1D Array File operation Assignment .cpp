//c++ 1D array 
#include <iostream>//input/output to console
#include <fstream>//input/output to file
using namespace std;
int main(){
	// 1D Array -Write to file
	ofstream Myfile1D("D:\\array_1D.txt");
	//declare and initialize
	int arr1D[5] = {10,20,30,40,50};
	cout<< "Writing 1D array to file...." <<endl;

	//for(start;stop;step)
	for (int i=0;i<5; i++){
		Myfile1D << arr1D[i] << " ";
		cout << arr1D[i] << " ";
	}
	Myfile1D << endl;
	// close the file
	Myfile1D.close();		
	//1D Array -Read from file
	ifstream readFile1D("D:\\array_1D.txt");
	int readArr1D[5];
	cout << "\nReading 1D array from file.." << endl;
	//for(start;stop;step)
	for (int i=0;i<5; i++){
		readFile1D >> readArr1D[i];
		cout << readArr1D[i] << " ";

	}
	//closefile
	readFile1D.close();
	
return 0;
}	




