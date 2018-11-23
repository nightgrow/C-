#include <iostream>

using namespace std;

class Parent {
	private:
		int priv = 1;
	
	protected:
		int prot = 2;
		
	public:
		int pub = 3;
		
		
	public:
		int PPrint() {
			cout << priv << endl;
		}
};

class Child : public Parent {
	public:
		int CPrint () {
			cout << prot << endl;
			cout << pub << endl;
		}
};

int main() {
	Parent parent;
	Child child;
	
	parent.PPrint();
	child.CPrint();
	
	return 0;

}
