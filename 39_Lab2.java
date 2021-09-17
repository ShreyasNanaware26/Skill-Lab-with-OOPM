//To Add Two Numbers, Print Number Entered by User,Swap Two Numbers, Check Whether Number is Even or Odd

package javaprogramming;
import java.util.Scanner;
public class Lab1 {
	public static void main(String[] args)
	{
	    Scanner sc = new Scanner(System.in);  // Scanner obj is created 
	
	    int num1,num2,temp;   //variable declaration 
	    System.out.println("Enter 1st number:");   //asking user for input
	    num1=sc.nextInt(); //storing the user input

	    System.out.println("Enter 2nd number:"); //asking user for input
	    num2=sc.nextInt(); //storing the user input

	    System.out.println("Number 1 = "+num1+" Number 2 = "+num2);
	    System.out.println("\n ADDITION OF THE TWO GIVEN NUMBERS\n");
	    System.out.println("\nAddition of the two numbers is : " +(num1+num2));
	    System.out.println("\n SWAPPING  OF THE TWO GIVEN  NUMBERS\n");
	    temp=num1;
	    num1=num2;    //swapping the given numbers values
	    num2=temp;
	    System.out.println("After swapping Number 1 = "+num1+" Number 2 = "+num2);
	    System.out.println("\n  DETERMINING WHETHER THE NUMBER 1 IS EVEN/ODD\n");
	    if(num1%2==0)   //checking whether num 1 is even or odd
	    {
	    	System.out.println(num1+" is Even");
	    }
	    else
	    {
	    	System.out.println(num1+" is Odd");
	    }
	  }
}

