#include "Employee.h"

employee::employee() {
	this->name = "Default";
	this->ID = "971124";
	this->employeeNumber = 0;
	this->password = "test";
	this->salary = 66.6;
	this->privilege = 0;
}
employee::employee(std::string name, std::string id, int emNum, std::string pwd, double salary, int priv) {
	this->name = name;
	this->ID = id;
	this->employeeNumber = emNum;
	this->password = pwd;
	this->salary = salary;
	this->privilege = priv;
}
void employee::setName(std::string name) {
	this->name = name;
}
void employee::setPassword(std::string pwd) {
	this->password = pwd;
}
void employee::setSalary(double salary) {
	this->salary = salary;
}
void employee::setPrivilege(int priv) {
	this->privilege = priv;
}
std::string employee::getName() {
	return this->name;
}
std::string employee::getID() {
	return this->ID;
}
int employee::getEmployeeNumber() {
	return this->employeeNumber;
}
std::string employee::getPassword() {
	return this->password;
}
double employee::getSalary() {
	return this->salary;
}
int employee::getPrivilege() {
	return this->privilege;
}
std::string employee::employeeBD() {
	std::string year = (this->ID).substr(0, 2);
	std::string month = (this->ID).substr(2, 2);
	std::string day = (this->ID).substr(4, 2);

	return (day+"/"+month+"/"+year);
}

