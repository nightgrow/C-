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
	void sprint() {
		cout << "id: " << id << endl;
		cout << "score: " << score << endl;
	}
};

int main() {
	student s1;
	//student *p_s1 = &s1;
	
	s1.reset();
	//p_s1->reset();
	
	s1.set_id(11031);
	//p_s1->set_id(11031);
	s1.set_score(85);
	//p_s1->set_score(85);
	
	s1.sprint();
	//p_s1.sprint();
	
	return 0;
}
