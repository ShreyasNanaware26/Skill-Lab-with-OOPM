/* Write a C++ program for Basic bank Management System */

#include<iostream>
using namespace std;

class BankLab2 {
	public:      //Access Specifier
		
	string name;          //Attribute of the class
	char account_type;     //Attribute of the class
	int account_number,amount;       //Attribute of the class
	float balance;   //Attribute of the class

	BankLab2(string n,int a, char t, float b) {        //constructor is created
		name = n;
		account_number=a;
		account_type=t;
		balance=b;

	}
	int deposit()   //method
	{
		cout<<" \n Enter the amount to	deposit: "; // asking user input
	    cin>>amount; //storing the user input
		if(amount<0)
		{
			cout<<"\n Invalid amount,Enter a valid amount"; 
			return 0;
		}
		balance=balance+amount;
		return 1;
	}

	int withdraw()   //method
	{
		cout<<"\n Your Balance= "<<balance; 
		cout<<"\n Enter amount to withdraw: "; // asking user input
		cin>>amount;  //storing the user input
		if (balance<amount)
		{
			cout<<"\n Insufficient Balance: "; 
			return 0;
		}

		if(amount<0)

		{
			cout<<"\n Invalid	amount"; 
			return 0;
		}
		balance=balance-amount; 
		return 1;

	}

	void display()   //method
	{
	cout<<"Name :"<<name;
	cout<<"\n Account Number:"<<account_number;
    cout<<"\n Account Type:"<<account_type;
    cout<<"\n Balance: "<<balance;
	}

};
    int main()
    {	

	int account_number;
	char ans;
	BankLab2 b1("salman",1,'s',2000);
	BankLab2 b2("makarand",2,'s',2000);
	BankLab2 b3("siddharth",3,'s',2000);

	cout<<"Menu"<<endl;
	cout<<"1.Deposit"<<endl;
	cout<<"2.Withdraw"<<endl;
	cout<<"3.Display"<<endl;
	cout<<"Enter option"<<endl;  //asking  the user input
	
    int op;
	cin>>op;//storing the user input

		do
		{
			cout<<"Please enter your account number:"<<endl; // asking user input
			cin>>account_number;		 //storing the user input
				switch(account_number)
				{
					case 1:	if(op==1)
								b1.deposit();
							if(op==2)
								b1.withdraw();
							if(op==3)
								b1.display();
							break;


					case 2:	if(op==1)
								b2.deposit();
							if(op==2)
								b2.withdraw();
							if(op==3)
								b2.display();
							break;
							
							
					case 3:	if(op==1)
								b3.deposit();
							if(op==2)
								b3.withdraw();
							if(op==3)
								b3.display();
							break;
					default: cout<<"Enter value between 1 to 3";
							break;

				}
               	cout<<"\n Do you want to continue?[Y/N]"; // asking user input
				cin>>ans;   //storing the user input
				if(ans=='Y' || ans == 'y') 
				{
				cout<<"Menu"<<endl;
			    cout<<"1.Deposit"<<endl;
			    cout<<"2.Withdraw"<<endl;
		        cout<<"3.Display"<<endl;
				cout<<"Enter option"<<endl; 
				cin>>op;
				}
				else if(ans=='N' || ans=='n')
				{
					break ;
				}

			}
			while(ans!='N' || ans!='n');
	}
