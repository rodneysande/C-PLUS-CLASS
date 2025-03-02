#include <iostream>
using namespace std;

class Person {
	protected:
		string  name;
		
	public:
		void setName(string n) {
			name = n;
		}	
		
		string getName(){
			return  name;
		}
};

class LibraryMember : public Person {
	private:
		int memberID;
		int booksBorrowed;
	
	
//CODE FOR LIBRARY MANAGMENT SYSTEM
// RODNEY VALENCIA SANDE
// BSE-01-0212/2024	
	public:
		LibraryMember(string n, int id, int books) {
		  	name = n;
        	memberID = id;
        	booksBorrowed = books;	
		}
		
	int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

class PremiumMember : public LibraryMember {
	private:
		double membershipFee;
		
	public:
    	PremiumMember(string n, int id, int books, double fee) : LibraryMember(n, id, books) {
        membershipFee = fee;
    }
    
    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    // Creating a PremiumMember object
    PremiumMember pm("John Doe", 101, 5, 50.0);

    // Displaying details
    cout << "Name: " << pm.getName() << endl;
    cout << "Member ID: " << pm.getMemberID() << endl;
    cout << "Books Borrowed: " << pm.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << pm.getMembershipFee() << endl;

    return 0;
}


