#include <iostream>

using namespace std;


class Add
{	private:
		int value;
	
	public: 
		Add(int i) {
			value = i;
		}
		
		void Display() {
			cout << value << endl;
		}
		
		Add add() {
			value = value + 1;
			
			return (*this);
		}
		
		Add operator++() {
			value = value + 10;
			
			return (*this);
		}
};

int main() {
	Add data1(100), data2(200);
	
	data1.Display();
	data2.Display();
	
	++data1;
	data2.operator++();
	data1.Display();
	data2.Display();
	
	data1.add();
	data2.add();
	data1.Display();
	data2.Display();
}
