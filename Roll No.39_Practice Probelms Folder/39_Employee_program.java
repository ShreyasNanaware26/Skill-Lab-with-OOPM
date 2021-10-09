/*create an Employee class with data members:
Employee number, Employee name, Basic, DA, IT, Net Salary
class has 3 methods, one method to get employee details 
for name, ID and basic salary
other method to calculate net salary using formula
	DA=1.32*basic;
	IT=0.30*(basic+DA);
	net_sal=(basic+DA)-IT; 
third method to print emp name, ID, net salary alongwith all salary components
*/

package javaprogramming2;
import java.util.Scanner;
public class Employee {
	Scanner in=new Scanner(System.in);
	int Emp_id ,Basic;        //attributes
	double DA;
	double IT;
	String Emp_name;    //attributes
	float Net_Salary;       //attributes
	
	void input_details(){ 
  //creating a method for getting employee's details
		    Scanner sc = new Scanner(System.in);
			System.out.println("Enter the details for the employees: \n");
			System.out.println("Enter the name of the employee: "); 
            Emp_name= sc.next();
			System.out.println("Enter Employee ID : ");
		    Emp_id=sc.nextInt();
		    System.out.println("Enter Employee's basic salary : Rs. ");
		    Basic=sc.nextInt();
	     	System.out.println("\n");
		
	}
	
        void salary_calculation(){   //creating a  method  for calculating net salary
		DA= 1.32 * Basic;
		IT=0.30 * (Basic + DA);
	    Net_Salary=(float) ((Basic+ DA)-IT);
		
	}
	
	void display_details(){    //creating a method for displaying the employee details
		
		
		System.out.println("\n The details of the employees are as follows: \n");
		System.out.println("\n Employee name : "+Emp_name);
		System.out.println("\n Employee Number: "+Emp_id);
		System.out.println("\n Employee's Net Salary is Rs. "+Net_Salary);
		System.out.println("\n Employee's basic salary: Rs. "+Basic);
		System.out.println("\n Employee's Dearness Allowance is Rs. "+DA);
		System.out.println("\n Income tax deductions on employee's salary is Rs. "+IT);
	
	}

	public static void main(String[] args) {
		/* creating object of the class employee */
		Employee emp1= new Employee();      
	    Employee emp2= new Employee();
	    Employee emp3= new Employee();
		/* Calling the methods */ 
		emp1.input_details(); 
		emp2.input_details();	
		emp3.input_details();
		
		emp1.salary_calculation();
		emp2.salary_calculation();
		emp3.salary_calculation();
		
		emp1.display_details();
		emp2.display_details();
		emp3.display_details();
	}

}
