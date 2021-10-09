
/*Write a Java program to input electricity unit charge and calculate the total electricity bill 
	according to the given condition:
	For first 50 units Rs. 0.50/unit
	For next 100 units Rs. 0.75/unit
	For next 100 units Rs. 1.20/unit
	For unit above 250 Rs. 1.50/unit
	An additional surcharge of 20% is added to the bill.
	*/
package javaprogramming2;
import java.util.Scanner;

public class LightBill {
	public static void main(String [] args)
	{
	    int units_consumed;
	    float amt, total_amt, sur_charge;
	    
	    Scanner sc = new Scanner(System.in);
	    System.out.println("Enter total units consumed: ");
	    units_consumed=sc.nextInt();

	    if(units_consumed <= 50)
	    {
	        amt = (float) (units_consumed * 0.50);
	    }

	    else if(units_consumed <= 150)
	    {
	        amt = (float) (25 + ((units_consumed-50) * 0.75));
	    }

	    else if(units_consumed <= 250)

	    {
	        amt = (float) (100 + ((units_consumed-150) * 1.20));
	    }

	    else

	    {
	        amt = (float) (220 + ((units_consumed-250) * 1.50));
	    }

	    sur_charge = (float) (amt * 0.20);
	    total_amt  = amt + sur_charge;
	    System.out.println("Electricity Bill  to be paid is Rs. "+ total_amt);

	}

}