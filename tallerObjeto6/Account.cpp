#include "Account.h"
#include <iostream>

using namespace std;
Account::Account(int accountNumber,double balance):accountNumber(accountNumber),balance(balance){}
		
int Account::getAccountNumber()const{
	return accountNumber;
}
int Account::getBalance()const{
	return balance;
}
void Account::setBalance(double balance){
	this->balance=balance;
}
void Account::credit(double a){
	balance-=a;
}
void Account::debit(double b){
	balance+=b;
}
void Account::print(){
	cout<<"A/C no: "<<accountNumber<<" Balance= $"<<balance<<endl;
}
