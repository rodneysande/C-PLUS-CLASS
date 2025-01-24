#include <iostream>
#include <cmath>

// float function
float addition(int x, int y) {
    float sum; // change sum to float to match the return type
    sum = x + y;
    return sum;
}

// function declaration
float simple_interest(int principle, float rate, float time) { // change return type to float
    float interest;
    interest = principle * rate * time;
    return interest;
}

float area_rectangle(float length, float width) { // correct return type is float
    float area;
    area = length * width;
    return area;
}

int main() {
    // Test the functions
    std::cout << "Addition result: " << addition(10, 5) << std::endl;
    std::cout << "Simple interest: " << simple_interest(1000, 0.05, 2) << std::endl;
    std::cout << "Area of rectangle: " << area_rectangle(5.5, 3.2) << std::endl;
    
    return 0;
}

