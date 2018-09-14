#include "stdafx.h"

class EmployeeHandler {
private:
	PermanetWorker * empList[50];
	int empNum;
public: 
	EmployeeHandler() : empNum(0) { }
	void AddEmployee(PermanentWorker* emp) {
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const {
		int sum = 0;
		for (int i = 0; i < empNum; i++) 
			sum += empList[i]->GetPay;
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler() {
		for (int i = 0; i < empNum; i++) {
			delete empList[i]
		}
	}
};