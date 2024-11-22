#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
	public:
		
		Management()
		{
			mainMenu();
		}
};


class Details
{
	public:
		
		static string firstName, lastName, gender;
		static long long int phoneNo;
		static int age;
		static string add;
		static int cId;
		char arr[500];
		
		void information()
		{
			cout<<"\nEnter the customer ID Number :";
			cin>>cId;
			cout<<"\nEnter Your First Name :";
			cin>>firstName;
			cout<<"\nEnter Your Last Name :";
			cin>>lastName;
			cout<<"\nEnter Your Age :";
			cin>>age;
			cout<<"\nEnter Your Phone No. :";
			cin>>phoneNo;
			cout<<"\n Address :";
			cin>>add;
			cout<<"\n Gender :";
			cin>>gender;
			cout<<endl<<"Your details are saved with us\n"<<endl;
			
		}
};

int Details::cId;
string Details::firstName;
string Details::lastName;
long long int Details::phoneNo;
int Details::age;
string Details::add;
string Details::gender;

class registration
{
	public:
		static int flightNo;
		int select;
		int back;
		static float charges;
		
		void flights()
		{
			string flightN[]={"Dubai","Russia","UK","USA","Australia","Europe"};
			
			for(int a=0;a<6;a++)
			{
				cout<<(a+1)<<". flight to "<<flightN[a]<<endl;
				
			}
			
			cout<<"\nWelcome to the Fly Safe Airlines!"<<endl;
			cout<<"Press the number of the country of which you want to book the flight:";
			cin>>flightNo;
			
			switch(flightNo)
			{
				case 1:
					{
						cout<<endl<<"_______________________Welcome to Dubai Emirates____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. DUB - 498"<<endl;
						cout<<"\t08-01-2023 8:00AM 10hrs Rs. 14000"<<endl;
						cout<<"2. DUB - 658"<<endl;
						cout<<"\t09-01-2023 4:00AM 11hrs Rs. 10000"<<endl;
						cout<<"3. DUB - 508"<<endl;
						cout<<"\t11-01-2023 11:00AM 12hrs Rs. 9000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>select;
						
						if(select==1)
						{
							charges=14000;
							cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(select==2)
						{
							charges=10000;
							cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(select==3)
						{
							charges=9000;
							cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any Numeric key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
			}
			
			case 2:
				{
					cout<<endl<<"_______________________Welcome to Russian Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. RU - 198"<<endl;
						cout<<"\t09-05-2023 2:00PM 22hrs Rs. 34000"<<endl;
						cout<<"2. RU - 158"<<endl;
						cout<<"\t11-05-2023 6:00AM 23hrs Rs. 29000"<<endl;
						cout<<"3. RU - 208"<<endl;
						cout<<"\t14-05-2023 12:00AM 19hrs Rs. 40000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>select;
						
						if(select==1)
						{
							charges=34000;
							cout<<"\nYou have successfully booked the flight RU - 198"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(select==2)
						{
							charges=29000;
							cout<<"\nYou have successfully booked the flight RU - 158"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(select==3)
						{
							charges=40000;
							cout<<"\nYou have successfully booked the flight RU - 208"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any Numeric key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
						
				}
				
				case 3:
				{
					cout<<endl<<"_______________________Welcome to UK Airways______________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. UK - 798"<<endl;
						cout<<"\t12-01-2022 10:00AM 14hrs Rs. 43000"<<endl;
						cout<<"2. UK - 318"<<endl;
						cout<<"\t11-01-2022 6:00AM 23hrs Rs. 27000"<<endl;
						cout<<"3. UK - 448"<<endl;
						cout<<"\t14-01-2022 12:00AM 21hrs Rs. 39000"<<endl;
						
						
						
						cout<<"\nSelect the flight you want to book :";
						cin>>select;
						
						if(select==1)
						{
							charges=43000;
							cout<<"\nYou have successfully booked the flight UK - 798"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(select==2)
						{
							charges=27000;
							cout<<"\nYou have successfully booked the flight UK - 318"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(select==3)
						{
							charges=39000;
							cout<<"\nYou have successfully booked the flight UK - 448"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any Numeric key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					
				}
				case 4:
					{
						cout<<endl<<"_______________________Welcome to USA Airways____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. USA - 567"<<endl;
						cout<<"\t10-01-2022 9:00AM 22hrs Rs. 37000"<<endl;
						cout<<"2. USA - 658"<<endl;
						cout<<"\t09-01-2022 6:00AM 22hrs Rs. 39000"<<endl;
						cout<<"3. USA - 508"<<endl;
						cout<<"\t12-01-2022 10:00AM 21hrs Rs. 42000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>select;
						
						if(select==1)
						{
							charges=37000;
							cout<<"\nYou have successfully booked the flight USA - 567"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(select==2)
						{
							charges=39000;
							cout<<"\nYou have successfully booked the flight USA - 658"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(select==3)
						{
							charges=42000;
							cout<<"\nYou have successfully booked the flight USA - 508"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any Numeric key to go back to the main menu:"<<endl;
						cin>>back;
						
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					}
				case 5:
					{
						cout<<endl<<"_______________________Welcome to Australian Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. As - 698"<<endl;
						cout<<"\t018-01-2022 9:00AM 20hrs Rs. 44000"<<endl;
						cout<<"2. AS - 158"<<endl;
						cout<<"\t019-01-2022 4:00AM 22hrs Rs. 34000"<<endl;
						cout<<"3. AS - 708"<<endl;
						cout<<"\t17-01-2022 10:00AM 21hrs Rs. 42000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>select;
						
						if(select==1)
						{
							charges=44000;
							cout<<"\nYou have successfully booked the flight AS - 698"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(select==2)
						{
							charges=34000;
							cout<<"\nYou have successfully booked the flight AS - 158"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(select==3)
						{
							charges=42000;
							cout<<"\nYou have successfully booked the flight AS - 708"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any Numeric key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					}
					case 6:
						{
							cout<<endl<<"_______________________Welcome to European Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. EU - 898"<<endl;
						cout<<"\t02-01-2022 2:00AM 18hrs Rs. 36000"<<endl;
						cout<<"2. EU - 958"<<endl;
						cout<<"\t03-01-2022 6:00AM 19hrs Rs. 37000"<<endl;
						cout<<"3. EU - 608"<<endl;
						cout<<"\t12-01-2022 10:00AM 20hrs Rs. 31000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>select;
						
						if(select==1)
						{
							charges=36000;
							cout<<"\nYou have successfully booked the flight EU - 898"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(select==2)
						{
							charges=37000;
							cout<<"\nYou have successfully booked the flight EU - 958"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(select==3)
						{
							charges=31000;
							cout<<"\nYou have successfully booked the flight EU - 608"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any Numeric key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
						}
						default :
							{
								cout<<"Invalid input, Shifting you to the main menu !"<<endl;
								mainMenu();
								break;
							}
		}
	}
};
float registration::charges;
int registration::flightNo;


class ticket : public registration, Details
{
	public:
		
		void Bill()
		{
			string destination="";
			ofstream outf("records.txt");
			{
				cout<<endl<<endl;
				outf<<"______________FLY SAFE Airlines_______________"<<endl;
				outf<<" _________________Ticket_____________________"<<endl;
				outf<<"  _________________________________________"<<endl;
				
				outf<<"Customer ID :\t"<<Details::cId<<endl;
				outf<<"Name :\t\t"<<Details::firstName<<" "<<Details::lastName<<endl;
				outf<<"Phone No. :\t"<<Details::phoneNo<<endl;
				outf<<"Age :\t\t"<<Details::age<<endl;
				outf<<"Gender :\t"<<Details::gender<<endl;
				outf<<"Address :\t"<<Details::add<<endl;
				outf<<endl<<"\tDescription"<<endl<<endl;
			
				
				if(registration::flightNo==1)
				{
					destination="Dubai";
				}
				
				else if(registration::flightNo==2)
				{
					destination="Russia";
				}
				else if(registration::flightNo==3)
				{
					destination="UK";
				}
				else if(registration::flightNo==4)
				{
					destination="USA";
				}
				else if(registration::flightNo==5)
				{
					destination="Australia";
				}
				else if(registration::flightNo==6)
				{
					destination="Europe";
				}
				
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight Name :\t\tRU - 198"<<endl;
				outf<<"Flight cost :\t\t"<<registration::charges<<endl;
				
			}
			outf.close();
			
		}
		void dispBill()
		{
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr, 100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};



void mainMenu()
{
	
	
	int lchoice;
	int schoice;
	int back;
	cout<<endl<<endl;
	do
	{
								//system("pause");
		      					system("CLS");
	
	cout<<"\t              ___FLY SAFE Airlines___ \n"<<endl;
	cout<<"\t ____________________Main Menu__________________"<<endl;
	cout<<"\t  _____________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t|" <<endl;
	
	cout<<"\t|\t Press 1 to add the Customer Details\t|"<<endl;
	cout<<"\t|\t Press 2 for Flight Registration\t|"<<endl;
	cout<<"\t|\t Press 3 for Ticket and Charges\t\t|"<<endl;
	cout<<"\t|\t Press 4 to Exit\t\t\t|"<<endl;
	cout<<"\t|\t\t\t\t\t\t|"<<endl;
	cout<<"\t _______________________________________________"<<endl;
	
	cout<<endl<<"Enter the Choice : ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice)
	{
		
		case 1:
			{
		system("CLS");
			   cout<<endl<<"____________________ Customer Details ____________________\n"<<endl;
			   	d.information();
			   	cout<<"Press any Numeric key to go back to Main menu ";
			   	cin>>back;
			   	
			   	if(back==1)
			   	{
			   		mainMenu();
				   }
				   else
				   {
				   	mainMenu();
				   }
				   break;
			}
			
			case 2:
				{
		system("CLS");
					cout<<endl;
					cout<<"________________Book a flight using this system _______________\n"<<endl;
					r.flights();
					break;
				}
				
				case 3:
					{
		system("CLS");
				cout<<"_______________GET YOUR TICKET________________\n"<<endl;
				t.Bill();
				
				cout<<"Your ticket is printed, you can collect it \n"<<endl;
				cout<<"Press 1 to display your ticket ";
				
				cin>>back;
				
					if(back==1)
					{
		system("CLS");
						t.dispBill();
						cout<<"Press any Numeric key to go back to main menu:";
						cin>>back;
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
						
					}
					else
					{
						mainMenu();
					}
					break;
				}
		
		case 4:
			{
				cout<<"\n\n\t________________Thank-you___________________"<<endl;
				cout<<endl<<endl;
				exit(0);
			
			}
			
			default :
				{
					cout<<"Invalid input, Please try again!\n"<<endl;
					mainMenu();
					break;
				}
	}
	
	
	}while (1);
	 
	

}


int main()
{
	Management Mobj;

	return 0;
}
