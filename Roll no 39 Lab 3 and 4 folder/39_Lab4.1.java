/*Write a program to create a class Stduent along with two methods getData(), printData()to
 get the value through the argument and display the data in printData(). 
 Create the two objects and access the values from class StudentTest.*/


package javaprogramming;
 import java.util.InputMismatchException;
import java.util.Scanner;
class Student {
	
	Scanner in=new Scanner(System.in);
	String name;
	int roll_no;
	float cgpa;
	String branch;
	
	
	void getdata()       //method of class Student to input the data
	{
		System.out.println("Enter your name:");
		name=in.next(); //string input
		System.out.println("Enter your roll number:");
		roll_no=in.nextInt();
		System.out.println("Enter your CGPA:");
		cgpa=in.nextFloat();
		System.out.println("Enter your Branch: ");
		branch=in.next();
		
	}
	
	void getdata(String n,int r,float c,String b)  //parameterized method to get the data
	{
		name=n;
		roll_no=r;
		cgpa=c;
        branch=b;
		
	}
	
	void printdata()
	{
		System.out.println("\n\nName of the student: "+name);
		System.out.println("Roll-no of the student: "+roll_no);
		System.out.println("Cgpa of the student: "+cgpa);
		System.out.println("Branch  of the student: "+branch);
	}

};
 public class StudentTest {   //class where two objects are created to display data of 2 students

	public static void main(String[] args) {
		
		Student s1=new Student();
		Student s2=new Student();
		s1.getdata(); // getting data in non parameterized manner
		s1.printdata();
		s2.getdata("Shubham",27,(float)8.94,"EXTC"); // getting data in parameterized manner
		s2.printdata();
		
	}
}