#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	int a = 0;
	int n = -1;
	double pi = 0;
	double s = 0;
	double g = 0;
	do{	
		cout<< "Enter the value of parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
		cin >> n;

		if (n >= 0){
			for (int a = 0; a < n+1; a++) {
				s = (pow(-1,a))/(2*a + 1);
				g = g + s;
	}
		pi = 4 * g;
		cout << "The approximate value of pi using " << n+1 << " terms is: "<< pi << endl;

}
	else{
		exit(1);
	}
} while(n != -1);

}
