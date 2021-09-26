/* 3.1 Write a C++ program to Create a class Student with
 two method getData() and printData(). 
getData() to get the value from the user and display the data in printData(). 
Create the two objects s1 ,s2 to declare and access the values from class StudentTest*/

#include<iostream>
#include<string>
using namespace std;
class Student {
	public:        //access specfier
	string name;  //attribute of the class
	int roll_no;   //attribute of the class
	float cgpa;   //attribute of the class
	string branch;  //attribute of the class
	
	
	void getdata()       //method of class Student to input the data
	{
		cout<<"Enter your name: "<<endl;
		cin>>name;
		cout<<"Enter your roll number:";
		cin>>roll_no;
		cout<<"Enter your CGPA:";
		cin>>cgpa;
		cout<<"Enter your Branch: "<<endl;
		cin>>branch;
		
	}
	
	void getdata(string n,int r,float c,string b)  //parameterized method to get the data
	{
		name=n;
		roll_no=r;
		cgpa=c;
        branch=b;
		
	}
	
	void printdata()  //defining method
	{
		
		cout<<"\n\nName of the student: "<<name<<endl;
		cout<<"Roll-no of the student: "<<roll_no<<endl;
		cout<<"Cgpa of the student: "<<cgpa<<endl;
		cout<<"Branch  of the student: "<<branch<<endl;
	}

};
 class StudentTest{
   private:	Student S1;Student S2;    //creating the objects of class Student
 	public:
 		void StudentS1()  //defining method
 		{
 			S1.getdata();
 			S2.getdata();
		 }
		 void StudentS2() //defining method
		 {
		 	S1.printdata();
		 	S2.printdata();
		 }
 };
 
 	int main() {
		
		Student s1;  
		Student s2;
		s1.getdata(); // getting data in non parameterized manner
		s1.printdata();    //displaying the output
		s2.getdata("Shubham",27,(float)8.94,"EXTC"); // getting data in parameterized manner
		s2.printdata();   //displaying the output
		return 0;  //returning an integer value
	}

