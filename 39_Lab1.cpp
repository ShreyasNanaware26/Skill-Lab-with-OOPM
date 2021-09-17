//To Add Two Numbers, Print Number Entered by User,Swap Two Numbers, Check Whether Number is Even or Odd
#include<iostream>
using namespace std;
int main()
{
	/*int n1, n2,addition;
	cout<< "Enter two numbers in order to find its sum:";
	cin>>n1>>n2;
	addition=n1+n2;
	cout<<"The sum of the given numbers is as follows: \n"<< n1 <<" + "<< n2 <<" =  "<< addition;
	return 0;*/
	
    /*int n1,n2;
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
	cout<< "Number 1: "<< n1 <<" and Number 2: "<< n2 ;
	return 0;*/
	
/*	int n1,n2,temp;
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"The numbers after swapping are as follows:\n";
	cout<< "Number 1: "<< n1 <<" and Number 2: "<< n2 ;
	return 0;*/
	
	int a,remainder;
	cout<<"Enter a number to check whehter it is even or odd:\n";
	cin>>a;
	remainder=a%2;
	if(remainder==0)
	{
		cout<< a << " is even number";
	}
	else
	{
		cout<< a << " is odd number";
	}
	return 0;
}
