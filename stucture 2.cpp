// CODE FOR STRUCTURE.....BANK SYSTEM
// RODNEY VALENCIA SANDE
// BSE-01-0212/2024

#include <iostream>
using namespace std;

struct Customer
{
	string name;
	double account_balance;
	string last_transaction;
	
	void display_info(){
		cout << "Name " << name << endl;
		cout << "Account Balance "<< account_balance << endl;
		cout << "Last Transaction "<< last_transaction << endl;

	}
	
};

int main(){
	Customer c1, c2;
	
	cout << "Enter Name: " ;
	cin >> c1.name;
	
	cout << "Enter Account Balance: " ;
	cin >> c1.account_balance;
	
	cout << "Enter Last Transaction: " ;
	cin >> c1.last_transaction;
	
	cout << "\nDisplaying Information." << endl; 
    c1.display_info(); 
    
    
    
 	cout << " \nEnter Name: " ;
	cin >> c2.name;
	
	cout << "Enter Account Balance: " ;
	cin >> c2.account_balance;
	
	cout << "Enter Last Transaction: " ;
	cin >> c2.last_transaction;
	
	cout << "\nDisplaying Information." << endl; 
    c2.display_info();
	
	
return 0;	
}
