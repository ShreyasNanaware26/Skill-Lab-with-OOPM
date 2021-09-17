//To Add Two Numbers, Print Number Entered by User,Swap Two Numbers, Check Whether Number is Even or Odd

#include<iostream> // #include is preprocessor directive and iosream is header file
using namespace std; //Using namespace with the help of which we can define the context in which names are defined.
int main()
{
	int num1,num2,temp; //variable declaration
	cout << "Enter num1:" << endl;  //asking user for input
	cin >> num1;                  //storing user input
	cout << "Enter num2:" <<endl;    //asking user for input
	cin >> num2;            //storing user input
	cout <<"1st number is "<<num1<<endl<<"2nd number is "<<num2<<endl;
	cout << "Addition of  " <<num1<<" &  "<<num2<<" is "<<num1+num2;
	cout<<"\nSwapping the two given numbers: "<<endl;
	temp=num1;     //swapping the inputs
	num1=num2;
	num2=temp;
	cout<<"Swapped numbers are as follows:  num1= "<<num1<<" and num2= "<<num2<<endl;
	cout<<" Determining whether the num1 is even or odd "<<endl;
	if(num1%2==0)   //condition for determining whether the number is even or odd
	{
		cout<<num1<<" is even \n";   //displaying the output when  if condition is satisfied
	}
	else
	{
		cout<<num1<<" is odd \n"; //displaying the output when else condition is satisfied
	}
	return 0;    //returning an integer value
}


