//To Add Two Numbers, Print Number Entered by User,Swap Two Numbers, Check Whether Number is Even or Odd

package javaprogramming;
import java.util.Scanner;
public class Lab1 {
	public static void main(String[] args) {
		/*int n1,n2,addition;
		n1=39;
		n2=88;
		addition=n1+n2;
		System.out.println(n1+ " + " +n2+ " = " +addition);*/
		
		/*int n1,n2;
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter first number:");
		n1=sc.nextInt();
		System.out.println("Enter second number:");
		n2=sc.nextInt();
		System.out.println("Number 1 = " +n1+ " and  Number 2 = "+n2);*/
		
	  int num1,num2,temp;
	    System.out.println("Enter two numbers for swapping them :");
	    Scanner sc= new Scanner(System.in);
		System.out.println("Enter first number:");
		num1=sc.nextInt();
		System.out.println("Enter second number:");
		num2=sc.nextInt();
		temp=num1;
		num1=num2;
		num2=temp;
		System.out.println("Number 1: " +num1+ " and Number 2: "+num2);
		
	/*	int a,remainder;
		System.out.println("Enter a number to check whether it is even or odd:");
		Scanner sc= new Scanner(System.in);
		a=sc.nextInt();
		remainder=a%2;
		if(remainder==0)
		{
			System.out.println( a+" is even number");
		}
		else
		{
			System.out.println( a+" is odd number");
		}*/
	
	}
}
