#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	cout << "BASEBALL GMAE!" << endl;

	// computer
	int com_number[3] = { 0, };
	int count = 1;
	// user
	int user_answer[3] = { 0,};

	srand(time(NULL));

	for (int i = 0; i < 3; i++) {
		com_number[i] = rand() % 9;

		if (com_number[0] == com_number[1] && com_number[1] == com_number[2])
			i = 0;
	}

	while (1) {

		cout << "\nEnter your ANSWER!" << endl;
		for (int i = 0; i < 3; i++) {
			cin >> user_answer[i];
		}

		// BALL
		int ball_count = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				com_number[i] == user_answer[j] ? ball_count++ : ball_count;
			}
		}

		// STRIKE
		int strike_count = 0;
		for (int i = 0; i < 3; i++) {
			if (com_number[i] == user_answer[i]) {
				strike_count++;
				ball_count--;
			}
		}

		

		cout << "COUNT: " << count << endl << "STRIKE: " << strike_count << endl << "BALL: " << ball_count << endl;

		count++;

		if (count > 9) {
			cout << "\n>>>You are LOSER<<<" << endl;
			break;
		}
		else if (strike_count == 3) {
			cout << "\nYou are WINNER!" << endl;
			break;
		}
	}
	
}