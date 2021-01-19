#include<iostream>
using namespace std;

int main()
{
	double weight;
	cout<<"Enter weight in pounds: ";
	cin>>weight;
	
	double height;
	cout<<"Enter height in inches: ";
	cin>>height;
	
	const double K=0.45359237;
	const double M=0.0254;
	
	double Weight=weight*K;
	double Height=height*M;
	double bmi=Weight/(Height*Height);
	
	cout<<"BMI is "<<bmi<<endl;
	if(bmi<18.5){
		cout<<"Underweight"<<endl;
	}
	
	else if(bmi<25){
			cout<<"Normal"<<endl;
		}
	else if(bmi<30){
		cout<<"Overweight"<<endl;
	}
	else{
		cout<<"Obese"<<endl;	
	}
	return 0;
}
