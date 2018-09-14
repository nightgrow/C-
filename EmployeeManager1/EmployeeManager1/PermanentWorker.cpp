#include "stdafx.h"

class PermanentWorker {
private:
	char name[100];
	int salary;	//�Ŵ� �����ϴ� �޿���
public:
	PermanentWorker(char* name, int money) 
		: salary(money) {
		strcpy_s(this->name, name);
	}
	int GetPay() const {
		return salary;
	}
	void ShowSalaryInfo() {
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl << endl;
	}
};