//c++ 2D array 
#include <iostream>//input/output to console
#include <fstream>//input/output to file
using namespace std;
int main(){
	int i,j;
	//2D Array - Write to file
	ofstream writeFile2D("D:\\array_2D.txt");
	//declare and initialize 
	int score[2] [3] = {
	{20,30,40},{50,60,70}};
	cout<< "Writing 2D array to file...." <<endl;
	
	//for(start;stop;step)
	for(i=0 ; i<2; i++){
		for(j=0;j<3;j++){
		cout<<score[i][j]<<endl;
		writeFile2D<<score[i][j] << " ";
		}
		cout << endl;
		writeFile2D << endl;	
	}	
	//close file
	writeFile2D.close();
	//2D Array-Read from file
	ifstream readFile2D("D:\\array_2D.txt");
	int readScore[2][3];
	cout << "\nReading 2D array from file.." << endl;
	//for(start;stop;step)
        for(i=0 ; i<2; i++){
		for(j=0;j<3;j++){
	readFile2D >>readScore[i][j]; 
	cout << readScore[i][j] << " ";
		
	}	
	cout << endl;
		}
		// close the file
		readFile2D.close();
		cout << "2D array operation completed succesfully!" << endl;
	
return 0;	
}



