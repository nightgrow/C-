#include <iostream>

using namespace std;

int main() {
	int x, y, z1, z2;
	
	x = 3;
	y = 7;
	
	z1 = x != y ? x-- : ++y + 3;
	
	cout << "z1의 값 = " << z1 << endl;
	
	z2 = x > y ? ++x : --y + 2;
	
	cout << "z2의 값 = " << z2 << endl;
	cout << "결과 = " << ((x < y) ? 15 : 10) << endl;
	
	return 0;
}
