#pragma once
#include <string>

class client {
public:
	client();
	client(int clientID, std::string cName, std::string cSAID, std::string cConNum, std::string cAddress);
	void setName(std::string cName);
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
	virtual std::string findNextPayment();
	virtual double interestEarned();
	virtual void withdraw(double amt);
	virtual void deposit(double amt);
private:
    int clientID;
	std::string name, SAID, contactNumber, address;
};

class account:public client{
public:
    account();
    account(int accID, int clID, double bal, double interest);
    void setClID(int clID);
	void setbalance(double bal);
	void setInterest(double interest);
	int getAccountID();
	int getClientID();
	int getBalance();
	int getInterest();
private:
    int accountID, clientID;
    double balance, interest;
};
