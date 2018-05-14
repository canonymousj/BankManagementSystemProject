#pragma once
#include <string>

class client {
public:
	client();
	client(int clientID, std::string cName, std::string cSAID, std::string cConNum, std::string cAddress);
	void setClientID(int clID);
	void setName(std::string cName);
	void setSAID (std::string SAID);
	void setContactNumber(std::string cConNum);
	void setAddress(std::string cAddress);
	int getClientID();
	std::string getName();
	std::string getSAID();
	std::string getContactNumber();
	std::string getAddress();
	std::string clientBirthday();
	virtual double calcBalance();
	virtual double calcDebt();
	virtual std::string findNextPayment(){return "";};
	virtual double interestEarned(){return 0.0;};
	virtual void withdraw(double amt){};
	virtual void deposit(double amt){};
protected:
    int clientID;
	std::string name, SAID, contactNumber, address;
};

class account:public client{
public:
    account();
    account(int accID, int clID, double bal, double interest);
    void setAccountID(int accID);
    void setType(int type);
	void setbalance(double bal);
	void setInterest(double interest);
	int getAccountID();
	int getType();
	double getBalance();
	double getInterest();
	double interestEarned();
	void withdraw(double amt);
	void deposit(double amt);
private:
    int accountID, type;
    double balance, interest;
};
