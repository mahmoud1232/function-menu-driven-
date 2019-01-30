#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//using Function in a menu-Driven program 
//this program Have 3 function 
void displaymenu();
int getchoice() ;
void showfees(string category , double rate , int months ) ;
 
int main()
{
	//const for months member ship rates
	const double ADULT_RATE = 120.0 ,CHILD_RATE=60.0 ,SENIOR_RATE=100.0 ; 
	
	int choice , months ; 
	
	cout <<fixed<<showpoint <<setprecision(2); 
	
	do 
	{
		displaymenu(); 
		choice=getchoice(); 
		
		if (choice !=4)
		{
			
			cout<<"for how many months?" ; 
			cin>>months ;
			
			switch (choice)
			{
				case 1:
					showfees("Adult",ADULT_RATE,months);
					break ; 
				case 2:
				    showfees("child",CHILD_RATE,months)	;
				    break ;
				case '3':
				    showfees("senior",SENIOR_RATE,months); 
					break ; 
		    }
			
			
		}
	}while (choice !=4) ; 
	
	return 0 ; 
}
void displaymenu()
{
	system ("cls") ;      //clear the screen 
	
	cout<<"\t\t Health Club Membership Menu "<<endl ; 
	cout<<"1.standerd adult Membership"<<endl ;
	cout<<"2.child Membership"<<endl;
	cout<<"3.Quit the program"<<endl ; 
	
}
int getchoice () 
{
	int choice ; 
	cin>>choice ;
	 
	while(choice<1||choice >4)
	{
		
	cout<<"the only chice 1-4 plz re-enter choice ";
	cin>>choice ; 	
	} 
return choice ; 		
}
void showfees(string category , double rate , int months )
{
	
	cout<<endl ; 
	cout<<"Membership : "<<endl ; 
	cout<<"Number of month is :"<<months<<endl;
	cout<<"total charge :$"<<(rate*months)<<endl  ;
	
	//hold scren until the user press enter key 
	
	cout <<"press enter to return to menu "<<endl ; 
	cin.get();   //clear the preivous 
	cin.get();   // wait for the user press enter  	
}
