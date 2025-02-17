//CLASS TO APPLY PROPER ENCAPSULATION
// RODNEY VALENCIA SANDE
// BSE-01-0212/2024



#include <iostream>
#include<string>
using namespace std;

class BankAccount {
	private:
		string accountHolder;
		int balance;
		
	public:
		void setholder (string h){
		accountHolder = h;
		}
		
	string getholder(){
	return accountHolder;
	}
	
	    void setbalance (int b){
		balance = b;
		}
		
	int getbalance(){
	return balance;
	}
	
};

int main()
{
	BankAccount a1;
	a1.setholder ("RODNEY");
	a1.setbalance (5000);
	cout << a1.getholder() << endl;
	cout << a1.getbalance() << endl;
	
	return 0;

};
