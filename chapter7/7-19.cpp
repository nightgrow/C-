#include <iostream>

using namespace std;

void Outfunc(int x = 60, int y = 50);

int main() {
	Outfunc();
	Outfunc(20);
	Outfunc(20, 40);	
	
	return 0;
};

void Outfunc(int x, int y) {
	cout << "x: " << x << "\ty: " << y << endl;
}
