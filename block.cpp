#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])  {
  int rows = 0;
  int columns = 0;
  cout << "Enter number of rows and columns:" << endl;
  cin >> rows >> columns;
  for (int r =  rows; r > 0; r = r - 1){
      for (int c =  columns; c > 0; c = c - 1){
        cout <<"X."; 
  }
    cout << endl;
    rows --;
  }

  } 