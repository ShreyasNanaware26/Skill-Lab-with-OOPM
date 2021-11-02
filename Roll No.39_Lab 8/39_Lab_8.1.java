/*1. To perform Multilevel Inheritance in JAVA. Create a Person class representing name,
age and address. Inherit person class to employee class with emp ID and salary factor.
Inherit the Employee class to programmer class with technical skills and hike attributes.
Implement valid methods to input the details from the user in the main method and display
for 3 programmers.*/

package javaprogramming2;
import java.util.Scanner;
class Person{   //creating a class named Person
	int age;          //attributes
	String name, address;     //attributes
}
class Emp_class extends Person{    //using multilevel inheritance,inheriting class Emp_class from Person
	int Emp_id;          //attributes
	float Emp_salary;    //attributes
}
class programmer extends Emp_class{   //using multilevel inheritance,inheriting class programmer from Emp_class
	float hike , Total_salary;      //attributes
	String Tech_skills;     //attributes
	Scanner sc = new Scanner(System.in);
	void Input_details(){
		
			System.out.println("Enter details for programmer " );
			System.out.println("Enter name: " );
			name=sc.next();
			System.out.println("Enter age: " );
			age=sc.nextInt();
			System.out.println("Enter address: "  );
			address=sc.next();
			System.out.println("Enter id: "  );
			Emp_id=sc.nextInt();
			System.out.println("Enter salary: Rs. "  );
			Emp_salary=sc.nextFloat();
			System.out.println("Enter % hike on salary: " );
			hike=sc.nextFloat();
			System.out.println("Enter your technical skills: " );
			Tech_skills=sc.next();
			System.out.println("\n");
	}
		void calculation_method()
		{
			Total_salary= Emp_salary+ (Emp_salary*hike) / 100;  //calculating the total salary by adding the increment to the base salary
		}
		
		void Output_details(){
			System.out.println("Details for programmer : ");
			System.out.println("Name: " +name);
			System.out.println("Age: " +age);
			System.out.println("Address : " +address);
			System.out.println("Technical Skills: " +Tech_skills );
			System.out.println(" Base Salary: Rs. " +Emp_salary);
			System.out.println("Percentage hike: "+hike+ " %");
			System.out.println("Salary after the hike: Rs. " +Total_salary);
			System.out.println("\n");
	}
	
}
public class Lab8_1 {
	public static void main(String[] args) {   //main function
              programmer object1 = new programmer();
              programmer object2 = new programmer();
              programmer object3 = new programmer();
              
              object1.Input_details();
              object2.Input_details();
              object3.Input_details();
              
              object1.calculation_method();
              object2.calculation_method();
              object3.calculation_method();
              
              object1.Output_details();
              object2.Output_details();
              object3.Output_details();
	}
}

