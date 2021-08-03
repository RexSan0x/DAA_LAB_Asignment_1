#include <iostream>
#include <vector>
using namespace std;

int factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else return n*factorial(n - 1);
}

int main() {
	int n;
	cout << "Enter number: ";
	cin >> n;
	int fact = factorial(n);
	cout << "Factorial of number: " << fact;
	cout << "\n\nName: Gaurav Navada\nReg.no.: 20BKT0128";
}
