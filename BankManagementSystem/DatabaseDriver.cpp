#include <iostream>
#include "Database.h"
#include <istream>
#include <string>
#include "Employee.h"
#include <iomanip>

using namespace std;

employee* createEmployee();
void createTable(Database *);
void actions(Database *, employee *);
void addEmployee(Database *);
void displayTable(Database *);
int displayEmployee(Database *, employee *);
void updateEmployee(Database *, employee *);

int actions() {
	int sel = 99;
	Database *db;
	employee *test = NULL;

	db = new Database("Database.sqlite");

	while (sel) {
		cout << "--------Selection menu--------" << endl;
		cout << "Choose option: 0 for exit" << endl;
		cout << "1. Setup employee table\n2. Add Employee\n3. Display entire table\n4. Display specific employee\n5. Update specific employee" << endl;

		cin >> sel;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Error: Integer" << endl;
			cout << "Re enter please" << endl;
			cin >> sel;
		}

		if (!sel) return 0;

		switch (sel) {
		case 1: createTable(db); break;
		case 2: addEmployee(db); break;
		case 3: displayTable(db); break;
		case 4: displayEmployee(db, test); break;
		case 5: updateEmployee(db, test); break;
		default: cout << "Invalid" << endl;
		}
		//system("pause");
		//system("cls");
	}
	db->close();
}

void addEmployee(Database *db) {
//	system("cls");

	employee *created = createEmployee();
	string q = "INSERT INTO tblEmployee VALUES(null, '" + created->getName() + "', '" + created->getID() + "', '" + created->getPassword() + "', " + to_string(created->getSalary()) + ", " + to_string(created->getPrivilege()) + ");";
	const char *cstr = q.c_str();

	db->query(cstr);
}

void displayTable(Database *db) {
	vector<vector<string> > result = db->query("SELECT * FROM tblEmployee;");

	cout << setw(3) << "ID" << setw(20) << "Name" << setw(18) << "SAID" << setw(15) << "Password" << setw(10) << "Salary" << setw(6) << "Priv" << endl;
	cout << "==========================================================================" << endl;
	for (vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
	{
		vector<string> row = *it;
		cout << setw(3) << row.at(0) << setw(20) << row.at(1) << setw(18) << row.at(2) << setw(15) << row.at(3) << setw(10) << row.at(4) << setw(6) << row.at(5) << endl;
	}
	cout << "==========================================================================" << endl;
}

int displayEmployee(Database *db, employee *test) {
	//system("cls");

	vector<vector<string> > resulta = db->query("SELECT * FROM tblEmployee;");

	int max = resulta.size();

	int ID = 0;
	
	while (ID<1 || ID>max) {
			
		cout << "Enter employee ID: (1-"<< max << ")" << endl;
		cin >> ID;

		while (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Error: Integer" << endl;
			cout << "Re enter please" << endl;
			cin >> ID;
		}
	
	}
	string q = "SELECT * FROM tblEmployee WHERE employeeID = " + to_string(ID) + ";";
	vector<vector<string> > result = db->query(q.c_str());

	test = new employee(result[0][1], result[0][2], stoi(result[0][0].c_str()), result[0][3], stof(result[0][4].c_str()), stoi(result[0][5].c_str()));
	cout << endl;
	cout << setw(3) << "ID" << setw(20) << "Name" << setw(18) << "SAID" << setw(15) << "Password" << setw(10) << "Salary" << setw(6) << "Priv" << endl;
	cout << "==========================================================================" << endl;
	
	cout << setw(3) << test->getEmployeeNumber() << setw(20) << test->getName() << setw(18) << test->getID() << setw(15) << test->getPassword() << setw(10) << test->getSalary() << setw(6) << test->getPrivilege() << endl;
	cout << "==========================================================================" << endl;
	cout << "Employee birthday: " << endl;
	cout << test->employeeBD() << endl;

	return ID;
}

void updateEmployee(Database *db, employee *test) {
	//system("cls");

	int ID = displayEmployee(db, test);	
	
	cout << "\nWhat to update? Enter - for text and 3 otherwise" << endl; //once again quick fix for testing
	employee *created = createEmployee();

	//this will be improved when implemented into a GUI, this is just a quick fix for now
	int cName = 1, cID = 1, cPW = 1, cSal = 1, cPriv = 1;
	string name, sID, pwd, sal, priv;

	if (created->getName() == "-") {
		cName = 0;
		name = "";
	}else {
		name = "employeeName = '" + created->getName()+"'";
		name += ((cID||cPW||cSal||cPriv) ? ", " : "");
	}
	if (created->getID() == "-") {
		cID = 0;
		sID = "";
	}
	else {
		sID = "SAID = '" + created->getID() + "'";
		sID += ((cPW || cSal || cPriv) ? ", " : "");
	}
	if (created->getPassword() == "-") {
		cPW = 0;
		pwd = "";
	}
	else {
		pwd = "password = '" + created->getPassword() + "'";
		pwd += ((cSal || cPriv) ? ", " : "");
	}
	if (created->getSalary() == 3) {
		cSal = 0;
		sal = "";
	}
	else {
		sal = "salary = " + to_string(created->getSalary());
		sal += (cPriv ? ", " : "");
	}
	if (created->getPrivilege() == 3) {
		cPriv = 0;
		priv = "";
	}
	else {
		priv = "privilege = " + to_string(created->getPrivilege());
	}
	

	string q = "UPDATE tblEmployee SET "+ name + sID + pwd + sal + priv + " WHERE employeeID = " + to_string(ID) +";";
	
	db->query(q.c_str());
}

void actions(Database *db, employee *test) {
	
}

void createTable(Database *db) {
	db->query("CREATE TABLE tblEmployee (employeeID INTEGER PRIMARY KEY, employeeName varchar(50), SAID varchar(13), password varchar(255), salary double, privilege int);");
}

employee* createEmployee() {
	employee *created;

	string name, ID, PWD;
	double sal = 0.0;
	int priv;

	cin.ignore();
	cin.clear();
	
	cout << "Enter Name: " << endl;
	getline(cin, name);
	
	cout << "Enter SAID: " << endl;
	getline(cin, ID);
	//code for ID validate goes here (omitted due to it being a pain to enter valid ID numbers)

	cout << "Enter PWD: " << endl;
	getline(cin, PWD);

	cout << "Enter salary: " << endl;
	cin >> sal;

	while (cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Error: Double" << endl;
		cout << "Re enter please" << endl;
		cin >> sal;
	}

	cout << "Enter priv: " << endl;
	cin >> priv;

	while (cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Error: Integer" << endl;
		cout << "Re enter please" << endl;
		cin >> priv;
	}

	created = new employee(name, ID, 0, PWD, sal, priv);
	return created;
}