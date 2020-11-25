#include "Account.h"
#include <iostream>
#include <iomanip>


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
	balance+=a;
}
void Account::debit(double b){
	if(b>balance){
		cout<<"La cantidad es mayor que el saldo"<<endl;
	}else{
		balance-=b;	
	}
	
}
void Account::print(){
	cout<<"A/C no: "<<accountNumber<<" Balance= $"<<fixed<<setprecision(2)<<balance<<endl;
}
