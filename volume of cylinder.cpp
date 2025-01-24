#include <iostream>
#include <cmath>

using namespace std; 

int main(){
	int r, h;
	
	cout <<"Enter radius:" ;
	cin >> r;
	
	cout <<"Enter height:" ;
	cin >> h;
	
	float p = 3.14159;
	
	float volume_cylinder;
	volume_cylinder = pow(r, 2) * h * p;
	
	cout << "The volume of the cylinder is: "<< volume_cylinder << endl;
	
	return 0;
	
}


	
	
