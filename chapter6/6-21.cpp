#include <iostream>

using namespace std;

int main() {
	int num = 0, num2 = 1, sum = 1;

	while (num <= 4) {
		sum *= (num + num2);

		num++;
		num2++;
	}

	cout << "1 * (1+2) * (2+3) * (3+4) * (4+5) = " << sum << endl;

	return 0;
}
