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
	this->clientID = 0;
	this->balance = 0;
	this->interest = 0;
}
account::account(int accID, int clID, double bal, double interest){
	this->accountID = accID;
	this->clientID = clID;
	this->balance = bal;
	this->interest = interest;
}
void account::setClID(int clID){
    this->clientID = clID;
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
int account::getClientID(){
    return this->clientID;
}
int account::getBalance(){
    return this->balance;
}
int account::getInterest(){
    return this->interest;
}
void account::withdraw(double amt){

}
void account::deposit(double amt){

}
