#include <iostream>

using namespace std;

class Id {
public:
	int score;
} id;

int main() {
	Id *p_id = &id;
	
	cin >> p_id->score;
	
	cout << "Your score is " << p_id->score << endl;
	
	return 0;
}
