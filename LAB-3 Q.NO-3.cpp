#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
	return sin(x);
}
int main(){
	int x0,x1,x2,I,h;
	cout<<"Enter value for x0:";
	cin>>x0;
	cout<<"Enter value for x2:";
	cin>>x2;
	h=(x2-x0)/2;
	x1=x0+h;
	I=(h/3)*(f(x0)+4*f(x1)+f(x2));
	cout<<"The required value is : "<<I<<endl;
	return 0;
}
