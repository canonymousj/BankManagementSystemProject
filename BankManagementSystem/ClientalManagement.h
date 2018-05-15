#pragma once
#include <string>

class client {
public:
	client();   //default constructor for base class client, then data member constructor
	client(int clientID, std::string cName, std::string cSAID, std::string cConNum, std::string cAddress);
	void setClientID(int clID);         //set methods for data members
	void setName(std::string cName);
	void setSAID (std::string SAID);
	void setContactNumber(std::string cConNum);
	void setAddress(std::string cAddress);
	int getClientID();                  //get methods for data members
	std::string getName();
	std::string getSAID();
	std::string getContactNumber();
	std::string getAddress();
	std::string clientBirthday();       //client birthday from ID
	virtual double calcBalance();       //virtual function to calculate the balance of that class
	virtual double calcDebt();          //virtual function to calc debt of that class
	virtual std::string findNextPayment(){return "";};  //virtual funct to return next payment for loan
	virtual double interestEarned(){return 0.0;};   //virtual funct interest earned/potential to earn for that class
	virtual void withdraw(double amt){};    //virtual funct withdraw an amount from that class overall amount
	virtual void deposit(double amt){};     //similar to withdraw
protected:
    int clientID;   //data members
	std::string name, SAID, contactNumber, address;
};

class account:public client{    //class account with inheritance from base client
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

class loan:public client{
public:
    loan();
    loan(int loanID, double amt, double interest, int type, int repayPeriod, std::string DOL);
    void setLoanID(int loanID);
    void setType(int type);
	void setAmount(double amt);
	void setInterest(double interest);
	void setRepayPeriod(int repayPeriod);
	void setDateOfLoan(std::string DOL);
	int getLoanID();
	int getType();
	double getAmount();
	double getInterest();
	int getRepayPeriod();
	std::string getDateOfLoan();
	double interestEarned();
	void withdraw(double amt);
	void deposit(double amt);
	std::string findNextPayment();
private:
    int loanID, type, repayPeriod;
    double amount, interest;
    std::string dateOfLoan;
};
