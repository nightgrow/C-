#include <iostream>

using namespace std;

int main() {
	int x, y, result1, result2;
	
	x = 5;
	y = 7;
	
	result1 = ++x - 1;
	result2 = x++ + --y;
	
	cout << "result1 = " << result1 << endl;
	cout << "result2 = " << result2 << endl;
	
	return 0;
}
