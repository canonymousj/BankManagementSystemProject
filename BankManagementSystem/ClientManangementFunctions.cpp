#include "ClientalManagement.h"

client::client() {
	this->clientID = 0;
	this->name = "Null user";
	this->SAID = "971124";
	this->contactNumber = "error";
	this->address = "empty";
}
client::client(int clientID, std::string cName, std::string cSAID, std::string cConNum, std::string cAddress) {
	this->clientID = clientID;
	this->name = cName;
	this->SAID = cSAID;
	this->contactNumber = cConNum;
	this->address = cAddress;
}
void client::setClientID(int clID){
	this->clientID = clID;
}
void client::setName(std::string cName){
	this->name = cName;
}
void client::setSAID(std::string SAID){
	this->SAID = SAID;
}
void client::setContactNumber(std::string cConNum) {
	this->contactNumber = cConNum;
}
void client::setAddress(std::string cAddress) {
    this->address = cAddress;
}
int client::getClientID(){
    return this->clientID;
}
std::string client::getName(){
    return this->name;
}
std::string client::getSAID(){
    return this->SAID;
}
std::string client::getContactNumber(){
    return this->contactNumber;
}
std::string client::getAddress(){
    return this->address;
}
std::string client::clientBirthday(){
    std::string year = (this->SAID).substr(0, 2);
    std::string month = (this->SAID).substr(2, 2);
    std::string day = (this->SAID).substr(4, 2);

    return (day+"/"+month+"/"+year);
}

double client::calcBalance(){
    return 0.0;
}
double client::calcDebt(){
    return 0.0;
}


//Account functions
account::account(){
    this->accountID = 0;
    this->type = 0;
	this->balance = 0;
	this->interest = 0;
}
account::account(int accID, int type, double bal, double interest){
	this->accountID = accID;
    this->type = type;
	this->balance = bal;
	this->interest = interest;
}
void account::setAccountID(int accID){
    this->accountID = accID;
}
void account::setType(int type){
    this->type = type;
}
void account::setbalance(double bal){
    this->balance = bal;
}
void account::setInterest(double interest){
    this->interest = interest;
}
int account::getAccountID(){
    return this->accountID;
}
int account::getType(){
    return this->type;
}
double account::getBalance(){
    return this->balance;
}
double account::getInterest(){
    return this->interest;
}
double account::interestEarned(){
    return ((interest/100)*balance);
}
void account::withdraw(double amt){
    balance -= amt;
}
void account::deposit(double amt){
    balance += amt;
}

//loan class
loan::loan(){
    this->loanID = 0;
    this->amount = 0.0;
	this->interest = 0.0;
	this->type = 0;
	this->repayPeriod = 0;
	this->dateOfLoan = "";
}
loan::loan(int loanID, double amt, double interest, int type, int repayPeriod, std::string DOL){
    this->loanID = loanID;
    this->amount = amt;
	this->interest = interest;
	this->type = type;
	this->repayPeriod = repayPeriod;
	this->dateOfLoan = DOL;
}
void loan::setLoanID(int loanID){
    this->loanID = loanID;
}
void loan::setType(int type){
    this->type = type;
}
void loan::setAmount(double amt){
    this->amount = amt;
}
void loan::setInterest(double interest){
    this->interest = interest;
}
void loan::setRepayPeriod(int repayPeriod){
    this->repayPeriod = repayPeriod;
}
void loan::setDateOfLoan(std::string DOL){
    this->dateOfLoan = DOL;
}
int loan::getLoanID(){
    return this->loanID;
}
int loan::getType(){
    return this->type;
}
double loan::getAmount(){
    return this->amount;
}
double loan::getInterest(){
    return this->interest;
}
int loan::getRepayPeriod(){
    return this->repayPeriod;
}
std::string loan::getDateOfLoan(){
    return this->dateOfLoan;
}
double loan::interestEarned(){
    return ((interest/100)*amount);
}
void loan::withdraw(double amt){
    amount -= amt;
}
void loan::deposit(double amt){
    amount += amt;
}
