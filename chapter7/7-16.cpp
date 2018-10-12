#include <iostream>

inline float area(float x, float y) {
	return x * y;
}

using namespace std;

int main() {
	float result1, result2;
	
	result1 = area(9.2, 4.5);
	result2 = area(2.5, 12.5);
	
	cout << "vales of first square: " << result1 << endl;
	cout << "vales of second square: " << result2 << endl;
	
	
	return 0;
}
