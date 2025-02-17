// CODE TO FIND CAR DETAILS
// RODNEY VALENCIA SANDE
// BSE-01-0212/2024

#include <iostream>
#include <cmath>
using namespace std;

class car{
	
	public:
		string brand;
		string model;
		float price;
		int milage;
		
		string details_of_car(){
			 return "Brand: " + brand + ", Model: " + model + ", Price: $" + to_string(price) + ", Mileage: " + to_string(milage) + " miles";

		}
		
};

int main(){
	
	car c1;
	c1.brand = "Toyota" ;
	c1.model = "Corolla";
	c1.price = 200;
	c1.milage = 500;
	
	string car_detail;
	car_detail = c1.details_of_car();
	
	cout << "Car details : " << car_detail << endl;
	
	return 0;
};
