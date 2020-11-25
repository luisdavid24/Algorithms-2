#include <iostream>
#include "Account.h"


int main() {
	Account c1(2,5);
//	c1.setBalance(3);
	c1.credit(1);
	c1.debit(44);
	c1.print();
	return 0;
}
