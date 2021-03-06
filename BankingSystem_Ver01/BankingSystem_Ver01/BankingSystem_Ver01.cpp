// BankingSystem_Ver01.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.

//Banking System Ver 0.1
//윤성우 열혈 c++ 프로그래밍

#include "stdafx.h"

using namespace std;

const int NAME_LEN = 20;

void Menu();	//Print Menu
void OpenAccount();	//To Open an Account
void Deposit();	//Deposit Money
void Withdraw();	//Withdraw Money
void Balance();	//Check Balance

enum
{
	MAKE=1,
	DEPOSIT,
	WITHDRAW,
	INQUIRE,
	EXIT
};

typedef struct {
	int bankAccID;	//Bank Account Number
	int balance;	//Balance
	char customer[NAME_LEN];	//Customer Name
} Account;

Account accArr[100];	//Array for Saving Account
int accNum = 0;	//Number of Stored Account

int main()
{
	int choice;

	while (1) {
		Menu();

		cout << "Choice: "; cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			OpenAccount();
			break;
		case DEPOSIT:
			Deposit();
			break;
		case WITHDRAW:
			Withdraw();
			break;
		case INQUIRE:
			Balance();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal selection . . .";
		}

		return 0;
	}

    return 0;
}

void Menu() {
	cout << "-----Menu-----" << endl;
	cout << "1. Account Opening" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdrawal" << endl;
	cout << "4. Full Output of Account Information" << endl;
	cout << "5. Exit" << endl;
}
void OpenAccount() {
	int id, balance;
	char name[NAME_LEN];

	cout << "[Open Account]" << endl;
	cout << "Account ID: "; cin >> accArr[accNum].bankAccID;
	cout << "Name: "; cin >> accArr[accNum].customer;
	cout << "Deposit amount: "; cin >> accArr[accNum].balance;
	cout << endl;

	accNum++;
}
void Deposit() {
	int money, id;

	cout << "[Deposit]" << endl;
	cout << "Account ID: "; cin >> id;
	cout << "Deposit amount: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].bankAccID == id) {
			accArr[i].balance += money;
			cout << "Deposit Completed" << endl << endl;

			return;
		}
	}
}
void Withdraw() {
	int money, id;

	cout << "[Withdraw]" << endl;
	cout << "Account ID: "; cin >> id;
	cout << "Amount Due: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].bankAccID == id) {
			if (accArr[i].balance < money) {
				cout << "Insufficient Balance" << endl;

				return;
			}

			accArr[i].balance -= money;
			cout << "Withdraw Completed" << endl << endl;
		}
	}

	cout << "The Account ID is not valid" << endl << endl;
}
void Balance() {
	for (int i = 0; i < accNum; i++) {
		cout << "Account ID: " << accArr[i].bankAccID << endl;
		cout << "Name: " << accArr[i].customer << endl;
		cout << "Balance" << accArr[i].balance << endl << endl;
	}
}
