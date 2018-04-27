#pragma once
#include <string>

class employee {
public: 
	employee();
	employee(std::string name, std::string id, int emNum, std::string pwd, double salary, int priv);
	void setName(std::string);
	void setPassword(std::string);
	void setSalary(double);
	void setPrivilege(int);
	std::string getName();
	std::string getID();
	int getEmployeeNumber();
	std::string getPassword();
	double getSalary();
	int getPrivilege();
	std::string employeeBD();
private:
	std::string name;
	std::string ID;
	int employeeNumber;
	std::string password;
	double salary;
	int privilege;
};