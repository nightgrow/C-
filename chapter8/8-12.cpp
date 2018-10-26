#include <iostream>

using namespace std;

class student {
private: 
	int id;
	int score;
	
public: 
	void reset() {
		id = 0;
		score = 0;
	}
	void set_id(int id_value) {
		id = id_value;
	}
	void set_score(int score_value) {
		score = score_value;
	}
	void print();
};

void student::print() {
	cout << "id: " << id << endl;
	cout << "id: " << score << endl;
}

int main() {
	student s, *ps= &s;
	
	s.reset();
	//ps->reset();
	s.print();
	//ps->print();
	
	s.set_id(11031);
	//ps->set_id(11031);
	s.set_score(85);
	//ps->set_score(85);
	
	s.print();
	//ps->print();
	
	return 0;
}
