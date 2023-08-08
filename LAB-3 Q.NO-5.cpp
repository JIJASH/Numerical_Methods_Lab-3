#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
	return sin(x);
}
int main(){
	int x0,x1,x2,x3,I,h;
	cout<<"Enter value for x0:";
	cin>>x0;
	cout<<"Enter value for x3:";
	cin>>x3;
	h=(x3-x0)/3;
	x1=x0+h;
	x2=x1+h;
	I=((3*h)/8)*(f(x0)+3*f(x1)+3*f(x2)+f(x3));
	cout<<"The required value is : "<<I<<endl;
	return 0;
}
