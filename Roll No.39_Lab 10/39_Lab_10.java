/*Write a java program to implement Multiple Inheritance using Interfaces.
Create an interface called Management with selectCandidate() method. Another interface
called Department with allotSubject() method. Class called HOD will implements these
two interfaces and define the methods and access them with valid objects.*/

package javaprogramming3;

import java.util.Scanner;

interface Management{  //creating an interface named Management
	 public void selectCandidate();  //abstract method
}

interface Department{  //creating an interface named Department
	 public void allotSubject();   //abstract method
}

class HOD implements Management,Department {   //class HOD is implementing both the interfaces 
	Scanner in= new Scanner(System.in);
	String Candidate_name= null;   //attributes of the class
	String Subject_name= null;

	public void selectCandidate() {   //method for taking input from the user
		System.out.println("Enter the name of Candidate :");
		Candidate_name=in.next();
	}
	
	public void allotSubject() {   //method for taking input from the user
		System.out.println("Enter the alloted subject for the candidate : ");
		Subject_name=in.next();
	}
void displaying_data() {    //method for displaying the output to the user
		System.out.println("\n" + Candidate_name +" has been alloted "+ Subject_name +" as the subject ");
	}
}

public class Lab_10 {   
	public static void main(String[] args) {
	HOD xyz = new HOD();   //creating object of the child(HOD) class
	xyz.selectCandidate();  //accessing the methods using the created object
	xyz.allotSubject();
	xyz.displaying_data();
	}
}
