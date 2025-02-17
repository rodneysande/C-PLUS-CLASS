//CODE TO FIND AREA AND VOLUME OF A CYLINDER
// RODNEY VALENCIA SANDE
// BSE-01-0212/2024


#include <iostream>
#include <cmath>
using namespace std;

class Cylinder {
	
	public:
		double height;
		double radius;
		double  pi = M_PI;
		
		double CalculateVolume(){
			return pi * pow(radius, 2) * height;
		}
		
		double CalculateArea(){
			return 2 * pi * pow(radius, 2);
		}
};


int main(){
	
	Cylinder c1;
	c1.height = 10;
	c1.radius = 5;
	
	double vol, area;
	vol = c1.CalculateVolume();
	area = c1.CalculateArea();
	
	cout << "Volume : " << vol << endl;
	cout << "Area : " << area << endl;

	return 0;
	
};
