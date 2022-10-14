#include <iostream>
#include <cmath>
using namespace std;


double MadelungConst(float i) {
	double sumPart = 0;
	int n = 1;
	while (i < (1 / (n * (n + 1)))) {
		sumPart += pow(-1, n + 1) / (n * (n + 1));
		n++;
	}
	cout << "Number of cycles: "  << n << endl;
	return sumPart + 1;
}

int main()
{
	cout << "The result is: " << MadelungConst(0.001) << endl;
	return 0;
}
