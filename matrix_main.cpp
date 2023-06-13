#include <iostream>

using namespace std;

int main() {
	string userSelection;
	double a, b, c, d;

	// WIP Message
	cout << "This calculator is currently in progress" << endl;

	// Matrix Input (CURRENTLY DOES 2X2)
	cout << "Enter your 2x2 matrix: a b c d" << endl;
	cout << "[ a b ]" << endl;
	cout << "[ c d ]" << endl;
	cin >> a >> b >> c >> d;

	// Selection Input
	cout << "Please select your choice(s): " << endl;
	cout << "Determinant (D)" << endl;
	cout << "Reduced Row Echelon (R)" << endl;
	cin >> userSelection;

	

	return 0;
}