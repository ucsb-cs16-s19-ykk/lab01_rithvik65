#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])  {
	int rows = 1;
  	int columns = 1;

  	while (rows != 0 and columns != 0){
		cout << "Enter number of rows and columns:" << endl;
  		cin >> rows >> columns;
  		for (int r =  rows; r > 0; r--){
      			for (int c =  columns; c > 0; c--){
		      		cout <<"X."; 
  }
    			cout << "\n";
  }
	}
  }

