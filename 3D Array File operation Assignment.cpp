//c++ 3D array 
#include <iostream>//input/output to console
#include <fstream>//input/output to file
using namespace std;
int main(){
	int i,j,k;
	//2D Array - Write to file
	ofstream writeFile3D("D:\\array_3D.txt");
	//declare and initialize 
	int score[2] [3] [2] = {
	{
		{20,30},
		{40,50},
		{60,70}
	},
	{
	    {80,90},
		{100,110},
		{120,130}
								
	}
	};
	cout<< "Writing 3D array to file...." <<endl;
	
	//for(start;stop;step)
	for(i=0 ; i<2; i++){
		cout << "Layer " << i << ":" << endl;
		writeFile3D << "Layer " << i << ":" << endl;
		for(j=0;j<3;j++){
			for (k=0; k<2; k++){
				cout << score[i][j][k]<< " ";
				writeFile3D << score[i][j][k] << " ";
			}
			cout << endl;
		writeFile3D << endl;
		}
			cout << endl;
		writeFile3D << endl;
		}
		//close file 
		writeFile3D.close();
	//3D Array-Read from file
	ifstream readFile3D("D:\\array_3D.txt");
	//declare and initialize 
	int readScore[2][3][2];
	string dummy;
	//for(start;stop;step)
	for(i=0 ; i<2; i++){
		readFile3D >> dummy >> dummy;//read "layer x:"
		cout << "Layer " << i << ":" << endl;
		for(j=0;j<3;j++){
			for (k=0; k<2; k++){
				readFile3D >> readScore[i][j][k];
				cout << readScore[i][j][k]<< " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	//close file 
	readFile3D.close();
		cout << "3D array operation completed succesfully!" << endl;	
return 0;
	}	




