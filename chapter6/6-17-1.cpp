#include <iostream>

using namespace std;

int main() {
	int line;
	
	cout << "원하는 줄 수를 입력하세요: ";
	cin >> line;
	
	for(int i = 1; i <= line; i++) {
		for(int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	for(int i = line; i >= 1; i--) {
		for(int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
