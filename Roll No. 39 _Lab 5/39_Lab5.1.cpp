/*To perform Operator Overloading using C++ for
Multiplying 2 complex numbers*/

#include<iostream>
using namespace std;
class Complex   //creating the class complex
{
int real, imag;   //declaring the variables 
public:   //Access Specifier
Complex operator*(Complex c)   //overloading the multiplication operator
{ 
int real1,real2;
real1=real;
real2=c.real;
real=(real*c.real)-(imag*c.imag);     //calculation part 
imag=(real1*c.imag)+(imag*real2);     //calculation part

Complex temp;
temp.real=real;
temp.imag=imag;
return temp;
}
void display()   //method for displaying the output 
{
cout<<"("<<real << " + " <<imag<<"i"<< ")"<<" \n"; 
}
void input()   //method for taking input
{
cout<<"Enter Real part: \n";   //asking for user input
cin>>real;          //storing the user input 
cout<<" Enter Imaginary part: \n";    //asking for user input 
cin>>imag;    //storing the user input
}
};
int main()
{

Complex c1,c2;     //creating the objects of the class 
c1.input();    //calling the methods
cout<<"Enter the other complex number: "<<"\n";
c2.input();    //calling the methods
c1*c2;   
cout<<"The multiplication of the two given complex numbers is as follows: \n ";
c1.display();  //calling the methods

}
