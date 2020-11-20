#include <iostream>
#include "Account.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Account c1(22,33);
	c1.getAccountNumber(43);
//	c1.getBalance(2233);
	c1.print();
	return 0;
}
