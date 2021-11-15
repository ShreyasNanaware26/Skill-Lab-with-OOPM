/*Write a java program to create an abstract class named Shape that contains
two integers and an abstract method named printArea(). Provide three classes named 
Rectangle, Triangle and Circle such that each one of the classes extends
the class Shape. Each one of the classes contain only the method printArea()
that prints the area of the given shape.*/

package javaprogramming3;

import java.util.Scanner;

abstract class Shape {   //creating an abstract class using the abstract keyowrd
	int num1 , num2;    //declaring the attributes of the class
	abstract void printArea();    //declaring the abstract method
	Scanner in= new Scanner(System.in);
}

class Rectangle extends Shape  //inheriting the parent class using the concept of hierarchical inheritance
{
	void printArea() {
		System.out.println("Enter length of the rectangle: ");   //taking user input and storing it
		num1=in.nextInt();
		System.out.println("Enter breadth of the rectangle: ");
		num2=in.nextInt();
		System.out.println("Area of Rectangle = Length X Breadth = " + (num1*num2) + " sq. units \n"); //calculating the area and displaying the same
		
	}
}

class Triangle extends Shape   //inheriting the parent class using the concept of hierarchical inheritance
{
	void printArea() {
		System.out.println("Enter the base of the triangle : ");    //taking user input and storing it
		num1=in.nextInt();
		System.out.println("Enter the height of the triangle : ");
		num2=in.nextInt();
		System.out.println("Area of Triangle  = 1/2 X Base X Height = " + (0.5*num1*num2) + " sq. units \n");   //calculating the area and displaying the same
	}
}

class Circle extends Shape  //inheriting the parent class using the concept of hierarchical inheritance
{
	void printArea() {
		System.out.println("Enter the radius of the circle : ");  //taking user input and storing it
		num1=in.nextInt();
		float area = (float) (3.141592*num1*num1);
		System.out.println("Area of Circle  = 3.14 X radius X radius = " + area + " sq. units \n");   //calculating the area and displaying the same
	}
}

public class Lab9 {
	public static void main(String[] args) {  
		Shape rectangle = new Rectangle();  //creating the objects of the abstract class
		Shape triangle = new Triangle();
		Shape circle = new Circle();
		rectangle.printArea();  //calling the methods using the object
		triangle.printArea();
		circle.printArea();
	}
}
