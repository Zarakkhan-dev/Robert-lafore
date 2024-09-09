#include<iostream>

using namespace std;

int main(){
	
	// 7.481  gallons is equal to 1 cubic foot 	
	float gallons , gallons_per_cubic_foot = 7.481;
	
	cout  << "Enter The Number of gallons : ";
	cin >> gallons;
	
	double result = gallons  / gallons_per_cubic_foot;
	cout << gallons  << " gallon in cubic feet is " << result ;
	
	return 0 ;
}
