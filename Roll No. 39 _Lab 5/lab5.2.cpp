//Write a C++ program to overload the ‘+’ operator so that it can add two matrices.

# include<iostream>
using namespace std;

class matrices  //creating a class 
{
	int x[3][3];   //class attributes
	int y[3][3];   //class attributes
	int z[3][3];   //class attributes
	public:        //access specifier
		void get_elements();	//take numbers from user
		matrices operator +(matrices m2);	//operator overloading
		void display();	//print the result
};
//functions outside class, using scope resolution

void matrices::get_elements()  //method for getting the input elements
{
	cout<<"Enter the  Matrix elements \n";
	for(int i=0;i<3;i++)	//for row
	{
		for(int j=0;j<3;j++)	//for columns
		cin>>x[i][j];
	}
}

void matrices:: display()   //method to display the resultant matrix
{
	for(int i=0;i<3;i++)

	{
		for(int j=0;j<3;j++)
		cout<<x[i][j]<<"  ";
		
		cout<<endl;
	}
}

matrices matrices::operator+(matrices m2)  //overloading '+' operator

{

	matrices m3;

	for(int i=0;i<3;i++)

	{
		for(int j=0;j<3;j++)
		m3.x[i][j]=x[i][j]+m2.x[i][j];

	}	
	return(m3);
}

int main()
{
	matrices object1,object2,object3;
	object1.get_elements();   //calling the methods
	object2.get_elements();    //calling the methods
	cout<<"\nMatrix 1 is as follows :\n";
	object1.display();       //calling the methods 
	cout<<"\nMatrix 2 is as follows :\n";
	object2.display();       //calling the methods
	object3=object1+object2;
	cout<<"\nResultant Matrix is as follows :\n";
	
	object3.display();      //calling the methods
}
