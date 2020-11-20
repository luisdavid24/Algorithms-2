#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
	private:
		int accountNumber;
		double balance=0;
	public:
		Account(int accountNumber,double balance);
		int getAccountNumber()const;
		int getBalance()const;
		void setBalance(double balance);
		void credit(double a);
		void debit(double b);
		void print();
	
};

#endif
