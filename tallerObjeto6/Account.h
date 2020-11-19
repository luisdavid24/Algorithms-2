#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
	private:
		int accountNumber;
		double balance=0;
	public:
		Account(int accountNumber,double balance);
		int getAccountNumber();
		int getBalance();
		void setBalance(double balance);
		void credit(double amount);
		void debit(double amount);
		void print();
	
};

#endif
