/*  To write a program to demonstrate friend function in C++.  */

#include <iostream>
using namespace std;
class class1{  //creating a class
   int length , breadth ;  //attributes
   float square_area , rectangle_area; //attributes
   public:
   	class1(){ //constructor
   		
   		length = 0 , breadth = 0 ;   //giving the initial values of the variables
   		
	   }
	   
	   void calculation(){  //calculation part and ouput statement
	   	 square_area=length*breadth;
   		 rectangle_area=length*breadth;
	cout<<"Area of the square is "<<square_area<<" sq. units"<<"\n"<<"Area of the Rectangle is "<<rectangle_area<<" sq. units"<<"\n";
}

friend void input_values(class1 &a);  //friend function

};
void input_values(class1 &a){  //body of the friend function outside the class
	a.length=10;
	a.breadth=10;
}
int main()
{
	class1 a;  //creating the object of the class
	input_values(a);
	a.calculation();  //calling the method using the object
	return 0;
}



