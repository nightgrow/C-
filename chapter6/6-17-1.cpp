#include <iostream>

using namespace std;

int main() {
	int line;
	
	cout << "���ϴ� �� ���� �Է��ϼ���: ";
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
