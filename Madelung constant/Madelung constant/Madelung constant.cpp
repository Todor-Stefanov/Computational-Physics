#include <iostream>
#include <cmath>
using namespace std;


double MadelungConst(int n) {
	double Madelung = 1;
	double sumPart = 0;
	for (int i = 1; i < n; i++) {
		sumPart += pow(-1, (i + 1)) / (i * (i + 1));
	}
	Madelung += sumPart;
	return Madelung;
}

int main()
{
	int index;
	cout << "Enter the number of cycles: ";
	cin >> index;
	
	cout << "The result is: " << MadelungConst(index) << endl;

	
	return 0;
}
