#include <iostream>
#include <cmath>
using namespace std;


double directSumming(double i) {
	double sumPart = 0;
	int n = 1;
	while (i <= (static_cast<double>(1) / n)) {
		sumPart += pow(-1, n + 1) / n;
		n++;
	}
	cout << "Number of cycles: " << n << endl;
	return 2 * sumPart;
}


double ewjensMethod(double i) {
	double sumPart = 0;
	int n = 1;
	while (i <= (1 / pow(n, 2))) {
		sumPart += pow(-1, n + 1) / (n * (n + 1));
		n++;
	}
	cout << "Number of cycles: "  << n << endl;
	return sumPart + 1;
}

int main()
{
	cout << "The result is: " << directSumming(0.001) << endl;
	cout << "The result is: " << ewjensMethod(0.001) << endl;
	return 0;
}
