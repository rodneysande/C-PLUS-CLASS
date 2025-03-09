// CODE TO ARREYS
// RODNEY VALENCIA SANDE
// BSE-01-0212/2024


#include <iostream>
using namespace std;

int main(){
	
	int numbers[5] ;
	
	cout << "Enter five numbers: " << endl;
	for (int i = 0; i < 5; ++i){
		cin >> numbers[i];
	}
	
	cout << "The numbers are: " << endl;
	  for (int n = 0; n < 5; ++n) { 
    cout << numbers[n] << "  "; 
  } 
	
	
return 0;
}
