/*create an Employee class with data members: 
Employee number, Employee name, Basic, DA, IT, Net Salary
class has 3 methods, one method to get employee details 
for name, ID and basic salary
other method to calculate net salary using formula
	DA=1.32*basic;
	IT=0.30*(basic+DA);
	net_sal=(basic+DA)-IT; 
third method to print emp name, ID, net salary alongwith all salary components */

#include<iostream>   //header file containing
#include<string>   //header file which helps us to use strings
using namespace std;
class Employee{        //class is created
	public:          //Access Specifier
		int Emp_id ,DA,IT,Basic;        //attributes
	    string Emp_name ;    //attributes
		float Net_Salary;       //attributes
		
		void input_details(){ 
	  //creating a method for getting employee's details
	  	        cout<<"Enter the name of the employee: \n";
	  	        cin>>Emp_name;
				cout<<"\n Enter Employee ID : "<<endl;
			    cin>>Emp_id;
			    cout<<"\n Enter Employee's basic salary : Rs.  ";
		     	cin>>Basic;
		    	cout<<"\n";
		 
		}
		
	        void salary_calculation(){   //creating a  method  for calculating net salary
			DA= 1.32 * Basic;
			IT=0.30 * (Basic + DA);
		    Net_Salary=(Basic + DA)-IT;
			
		}
	
		void display_details(){    //creating a method for displaying the employee details
		    cout<<"\n The details of the employees are as follows: \n";
		    cout<<"\n Employee name 1: "<<Emp_name;
			cout<<"\n Employee Number: "<<Emp_id;
			cout<<"\n Employee's Net Salary is Rs. "<<Net_Salary;
			cout<<"\n Employee's basic salary: Rs. "<<Basic;
			cout<<"\n Employee's Dearness Allowance is Rs. "<<DA;
			cout<<"\n Income tax deductions on employee's salary is Rs. "<<IT;
		
		}
};
int main(){
	
	/* creating object of the class employee */
	Employee emp1;      
    Employee emp2;
    Employee emp3;
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

	return 0;
}

