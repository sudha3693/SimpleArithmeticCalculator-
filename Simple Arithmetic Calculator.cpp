#include<iostream>
using namespace std;
int main()
{
	char op;
	double num1,num2;
	 
	cout<<"Enter the number first   :"<<endl;
	cin>>num1;
	cout<<"Enter the operator  (+, -, *, / )  :";
	cin>>op;
	cout<<"Enter the number second   :"<<endl;
	cin>>num2;
	switch( op )
	{
		case '+':
			cout<<num1<<"+"<<num2<<"="<<(num1 + num2);
			
		break;
			
		case '-':
			cout<<num1<<"-"<<num2<<"="<<(num1 - num2);
			
		break;	
		case '*':
			cout<<num1<<"*"<<num2<<"="<<(num1 * num2);
			
		break;
		case '/':
			if(num2 !=0.0)
			cout<<num1<<"/"<<num2<<"="<<(num1 / num2);
			else
			cout<<"divisible by  zero sitution";
			
		break;	
		default	:
			cout<<op <<"is invaid operator";
	}
	
	return 0;
}
