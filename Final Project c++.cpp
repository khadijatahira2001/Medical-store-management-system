#include <iostream>    // Header file for input/output in c++
#include <windows.h>  // This Library is used to display different colors and for sleep function
#include <string>    // This Library is used for string class   
#include <conio.h>  // This Library is used for endl
#include <iomanip> // This Library is used for setw()
#include <fstream>// This Library is used for file handling
#include <time.h>//This Library  is used for time function to display current time on screen
using namespace std;
//main body starts form line no. 348
// use switch statement in line no. 386
// case 1 in line no.  388
// customer login in line no. 390
// Medicine counters start from line no. 437
//Counter 01 lie in  line 444
//Counter 02 lie in  line 611
//Counter 03 lie in  line 856
//Counter 04 lie in  line 1004
//Counter 05 lie in  line 1204
//case 2 in line no. 1335
//Employee login in line  1358
//Employee salary in line no. 1462
// case 3 in line no. 1499
//Manager login in line no. 1524
//Manager pay in line no. 1627  
//call stock function in line no. 1662
// Billing(int L) funcTion in line no. 82
// case 4 in line no. 1668
Stock ()
{
		system("cls");
		int rim;
	cout<<"***********************************************"<<endl;
    cout<<"********************REDOX*********************"<<endl;
	cout<<"*******************Item List*******************"<<endl;
    cout<<"***********************************************"<<endl;
    cout<<"Which department's stock do you want to see \n";
    cout<<"Press  1  for  kidney's  department  stock\n";
    cout<<"Press  2  for  lung's    department  stock\n";
    cout<<"Press  3  for  cardiac   department  stock\n";
    cin>>rim;
    if(rim==1)
    {
    	cout<<"************Kidney medicine Stock************\n";
    	cout<<"____________________________________________________\n";
        cout<<"Stock: 1000  (Prize = 30 RS) Diuretics (water tablets) \n";
    	cout<<"Stock: 1000  (Prize = 20 RS) Erythropoietin (EPO) \n";
    	cout<<"Stock: 1000  (Prize = 40 RS) Hepatitis B vaccination \n";
    	cout<<"Stock: 1000  (Prize = 10 RS) Iron supplements \n";
    	cout<<"Stock: 1000  (Prize = 10 RS) Phosphate binders \n";
    	cout<<"Stock: 1000  (Prize = 70 RS) Sodium Bicarbonate \n";
    	cout<<"Stock: 1000  (Prize = 70 RS) Statins (cholesterol tablets) \n";
    	cout<<"____________________________________________________\n";
	}
	if(rim==2)
    {
    	cout<<"************Lung medicine Stock************\n";
    	cout<<"____________________________________________________\n";
    	cout<<"Stock: 1000  (Prize = 30 RS) aclidinium (Tudorza) \n";
    	cout<<"Stock: 1000  (Prize = 20 RS) arformoterol (Brovana) \n";
    	cout<<"Stock: 1000  (Prize = 40 RS) formoterol (Foradil, Perforomist) \n";
    	cout<<"Stock: 1000  (Prize = 10 RS) glycopyrrolate (Seebri Neohaler, Lonhala Magnair) \n";
    	cout<<"Stock: 1000  (Prize = 10 RS) indacaterol (Arcapta) \n";
    	cout<<"Stock: 1000  (Prize = 70 RS) olodaterol (Striverdi Respimat) \n";
    	cout<<"Stock: 1000  (Prize = 90 RS) revefenacin (Yupelri) \n";
    	cout<<"Stock: 1000  (Prize = 90 RS) salmeterol (Serevent) \n";
	    cout<<"Stock: 1000  (Prize = 90 RS) umeclidinium (Incruse Ellipta) \n";
	    cout<<"Stock: 1000  (Prize = 90 RS) aclidinium/formoterol (Duaklir) \n";
	    cout<<"Stock: 1000  (Prize = 90 RS) glycopyrrolate/formoterol (Bevespi Aerosphere) \n";
    	cout<<"____________________________________________________\n";
}
if(rim==3)
    {
    	cout<<"************Cardiac medicine Stock************\n";
    	cout<<"____________________________________________________\n";
    	cout<<"Stock: 1000  (Prize = 30 RS) Statins \n";
    	cout<<"Stock: 1000  (Prize = 20 RS) Clopidogrel \n";
    	cout<<"Stock: 1000  (Prize = 40 RS) Warfarin \n";
    	cout<<"Stock: 1000  (Prize = 10 RS) Beta-blockers \n";
    	cout<<"____________________________________________________\n";
    }
}
Billing(int L)
{
        char Bill,cash,ATM,Transfer,End;
   Bill:
	 system("CLS");
     char Payment;
	 cout<<"Bill="<<L<<"\t:::Three different ways to pay the bill:::\n\n";
	 cout<<"1=Cash Paymant?, ::Please Press 'K' For cash payment::\n"<<endl;
	 cout<<"2=Use ATM Machine?, ::Press 'A'::\n"<<endl;
	 cout<<"3=Money Transfer form Easy Paisa?, ::Press 'H'::\n"<<endl;
	 cin>>Payment;
     cout<<"User Enter "<<Payment<<endl;

	 if(Payment=='k' || Payment=='K')
	    {
			system("CLS");
		    goto cash;
	    }

	 else if(Payment=='a' || Payment=='A')
	    {
			system("CLS");
		    goto ATM;
	    }

     else if(Payment=='h' || Payment=='H')
	    {
			system("CLS");
		    goto Transfer;
	    }

	 else
	    {
			system("CLS");
	    	goto Bill; 	
	    }	

cash :
	{
		system("CLS");
        cout<<"\t*::Press 'J'::*\n";
	    cin>>cash;

	 if(cash=='j'||cash=='J')
		{
			int w;
			cout<<"\t**Please Insert "<<L<<"\n\n";
			cin>>w;
            cout<<"User Enter "<<w<<endl;
		    if(w>=L)
			{
		        cout<<"Remaining Money is="<<w-L<<endl<<endl;
		        cout<<"\t:::Thanks! Please Collect Your Money:::\n"<<endl;
				cout<<"After Collect Press Any Key"<<endl;
				cin.get();
			}
		    else
		    {
		    	cout<<"Please Enter "<<L<<" Money Any Try Again\n"<<endl;
		 	    goto cash;
		    }
	    }

	 else
		{
		    cout<<"##please Enter The Amount##\n";
		    goto cash;
		} 
	char lable;

	 lable :
     char Take;
	 cout<<":::press 'E' After Collecting Your Money :::\n";
	 cin>>Take;
     if(Take=='e' || Take=='E')
        {
		 goto End;
        }
	 else
	    {
		 goto lable;
	    }
    }

  ATM :	
    {
	 system("CLS");
	 double pin;
	 int balance=1000000,amount;
	 char presss,Press;
	 char pressed;
	 char start;
	 cout<<"                          ||Welcome to HBL Bank||"<<endl;
	 cout<<"\n"<<endl;
	 cout<<"Please Insert Your Card in slot and press (S): "<<endl;
	 cin>>start;

	if(start=='S'||start=='s')
	{
		system("CLS");
    	int check;
		check :
    	cout<<"\n"<<endl;
    	cout<<"Enter your 4 Code Pin: ";
		cin>>pin;
        cout<<"User Enter "<<pin<<endl;

	if(pin==1234)
	{
		cout<<"\n"<<endl;
		cout<<"Your account balance is "<<balance<<endl;
		cout<<"\n"<<endl;
		int amount;
		amount:
		{
		    cout<<"Please Enter "<<L<<" Rs \n";
		    cin>>amount;
            cout<<"User Enter "<<amount;

			if(amount<balance && amount>=L)
			{
				system("CLS");
				cout<<"Your amount is ready to Collect"<<endl;
				cout<<"\n"<<endl;
				Bank:
				cout<<"Press (Y) to collect your amount"<<endl;
				cin>>presss;
				{
					int Bank;

					if(presss=='y'||presss=='Y')
					{
						system("CLS");
					 	cout<<"\n"<<endl;
					 	cout<<"Here is Your "<<amount<<" Rs \n "<<endl;
						cout<<"\n"<<endl;
						cout<<"Your remaining Balance is: "<<balance-amount<<endl;
						cout<<"\n"<<endl;
						cout<<"Thanks to visit HBL Bank..."<<endl;	
						cout<<"\n"<<endl;
						cout<<"Allah Hafiz\n"<<endl;
					}

					else
					{
						system("CLS");
						cout<<"\n"<<endl;
						cout<<" Please Enter 'Y' \n\n";
						goto Bank;
					}
			    }
			}

			else
			{
				system("CLS");
				cout<<"\n"<<endl;
                cout<<"Dear please enter "<<L<<" Rs\n";
				cout<<"You have Insuficient Balance..."<<endl;
				cout<<"\n"<<endl;
				cout<<"Please recharge your balance..."<<endl;
				cout<<"\n"<<endl;
				cout<<"If you have mistaken to write your Amount or any thing else then re-write your Amount... "<<endl;
				cout<<"\n"<<endl;
                char retry;
                retry:
				cout<<"Press (R) to Re-enter your Amount: ";
				cin>>Press;

				if(Press=='R'||Press=='r')
				{
				 goto amount;	
				}	
                else
                {
                    goto retry;
                }
			}	
			 
		}
	}

	 else
	   {
		   system("CLS");
	       cout<<"\n"<<endl;
	       cout<<"Your Pin Code is not correct..."<<endl;
		   cout<<"\n"<<endl;
		   cout<<"Please Try Again..."<<endl;
		   cout<<"\n"<<endl;
		 int pin;
		 pin:
		 cout<<"Press (R) to Re-enter your 4 Code Pin.."<<endl;
		 cin>>pressed;
		 if(pressed=='r'||pressed=='R')
		    {
			 goto check;
		    }		
	     else
            {
             goto pin;
            }
		}
	}

		 else
           {
             goto ATM;
           }

		goto cash;  //ENDING OF ATM AND GO TO CASH
    }

Transfer :
    {
	 int n2;
	 string x,n1;
	 char r,paisa;
	 paisa :
	 system("CLS");
	 cout<<"\t\t\t EASY PAISA\n\n";
	 cout<<"\t:::Please Sign in \n:::";
	 cout<<"*Enter Username & Password Without Giving Space '.' *\n\n";
	 cout<<"\t::Enter Your Number OR Username ID:: \n";
	 cin>>x;
	 cout<<"Enter Your Password \n";
	 cin>>n1;
	 cout<<"   Your User ID Is= "<<x<<" Your Password is= "<<""<<n1<<endl;
	 n2=100000;
	 cout<<"your Current Balance "<<n2<<""<<endl;
	 cout<<":::Please Transfer "<<L<<" RS to This Number 0309-2292229::: \n";
     cout<<"Transfer "<<L<<" Please :::Press W:::\n";
     cin>>paisa;
	 if(paisa=='W' || paisa=='w')
	   {
		 system("CLS");
	   	 int balance,R;
	   	 balance :
	   	 cout<<" Please, Enter "<<L<<" \n\n";
	   	 cin>>R;
         cout<<"User Enter "<<R;
	   	 if(R==L)
			{
				system("CLS");
				cout<<"Now Your Current Balence is "<<n2-L<<"\n"<<endl;
			}

		 else
		    {
				system("CLS");
		    	cout<<"Sir please Enter "<<L<<" Amount\n\n";
		    	goto balance;
			}
		}

	 else
	   {
		   system("CLS");
		   cout<<"##please press rigt key ##\n";
	       goto paisa;
	   }
    } 
    End:
     cout<<"Press any key for Menu \n";
    }   

int main()
{
	system("CLS");
	system("color 03");
	  time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    ifstream Fin;
    char ch;
    system("CLS");
    system("color 03");
    Fin.open("Welcome.txt");
    ch=Fin.get();
    while(!Fin.eof())
    {
        cout<<ch;
        ch=Fin.get();
    }
    Fin.close();
    cout <<setw(150)<<"Date     " <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900<< endl;
    cout <<setw(150)<<"Time     " << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec) << endl;
    string Username_Attempt;
	int Password_Attempt;
	int Password_Attempt1;
	int Confirm_password;
	int n;
    int mp;
	system("PAUSE");
	mp:
	
    system("CLS");
	int con;
	cout<<setw(120)<<" _____________________________________ \n";
	cout<<setw(120)<<"| Press 1        For Customer         | \n";
    cout<<setw(120)<<"| Press 2        For Employee         | \n";
    cout<<setw(120)<<"| Press 3        For Manager          | \n";
    cout<<setw(120)<<"| Press 4        For Exit             | \n";
    cout<<setw(120)<<"|_____________________________________| \n";
    cin>>n;
    switch(n)
    {
	case 1:
		{
		int cp,Ccp, Rcp,con;
    Ccp:
	cout<<setw(90)<<"Welcome , Customer! Please login below.\t\t\n\t\t\t"<<endl;
	cout<<setw(80)<<"Hey!  you need  to  enter  your  Redox  username  and  password.\t\t\n"<<endl;
	cin>>Username_Attempt;
	if(Username_Attempt=="Aqsa" || Username_Attempt=="aqsa" || Username_Attempt=="AQSA")
	{
        Rcp:
		cout<<setw(50)<<" Enter  Your  Password.\t\n\t\t\t\t"<<endl;
		cin>>Password_Attempt;
        int cp;
        cp:
      if(Password_Attempt==2001)
	{
		cout<<setw(90)<<"-------Thank  you  for  logging  in.-----------\t\n\t\t\t\t"<<endl;
	}
    else if(Password_Attempt==3)
		{
			cout<<setw(50)<<"--------Thank  you  for  logging  in.-----------\t\n\t\t\t\t"<<endl;
				cout<<setw(50)<<"Welcome  AQSA."<<endl<<endl;
		}
	else if(Password_Attempt!=2001)
	{
        int CP;
        CP:
		cout<<setw(90)<<"If you forget your password then reset your password.\t\n\t\t\t\t"<<endl;
		cin>>Password_Attempt1;
		cout<<setw(90)<<"Enter your existing Password_Attempt for confirmation.\t\n\t\t\t\t"<<endl;
		cin>>Confirm_password;
        
        if(Password_Attempt1==Confirm_password)
        {
            Password_Attempt=3;
            goto cp;
        }
        else
        {
            goto CP;
        }
	}
	else
	{
		cout<<setw(90)<<"---------Wrong  password.  Press Any Key to Try Again----------\t\n\t\t\t\t"<<endl;
	    system("PAUSE");
        goto Rcp;
    }
    
cout<<setw(10)<<"Counter no. 1 for kidney's  Medicines\n";
cout<<setw(10)<<"Counter no. 2 for lungs'    Medicines\n";
cout<<setw(10)<<"Counter no. 3 for regular   Medicines(desprin-panadol, etc)\n";
cout<<setw(10)<<"Counter no. 4 for bandages, injections AND tests (Bp , sugar , Blood test)\n";
cout<<setw(10)<<"Counter no. 5 for Cardiac   Medicines\n";
cout<<setw(15)<<"&&&&Press that counter no. where you wanna go&&&&\n";
cin>>con;
if(con==1)
{
	int i,j,k,l;
	int input = -2; //-2 just for while loop
	int L=0;
	int a=0;
		system("cls");
	cout<<"Hello, Customer! Here you can search your medicine\n";
	cout<<"*"<<endl;
    cout<<"REDOX*"<<endl;
	cout<<"Item List"<<endl;
    cout<<"*"<<endl;
	cout<<" press  1  for  Diuretics (water tablets)\n";
	cout<<" press  2  for  Erythropoietin (EPO)\n";
	cout<<" press  3  for  Hepatitis B vaccination\n";
	cout<<" press  4  for  Iron supplements\n";
	cout<<" press  5  for  Phosphate binders\n";
	cout<<" press  6  for  Sodium Bicarbonate\n";
	cout<<" press  7  for  Statins (cholesterol tablets)\n";
	cout<<" Select your medicines from of them\n";
	cout<<" press -1  for  total bill"<<endl;
    cout<<" press  0  for  Exit \n";
    while(input!=0)
	{
		cin>>input;   
		if(input==1)
		{
            int w2=1000;
            cout<<" price of 1 Medicine=30 \n";
			cout<<" Enter Quantity";
			cin>>i; // we also set the condition in (if .else ) incase user enter 1001 goto again
			cout<<" User Enter ="<<i;
            a=a+1;
			L=L+(i*30);
            for (int w1=1; w1<=i; w1++)
            {
                w2=w2-1;
            }
            cout<<" Stock : Your Remaining Diuretics (water tablets) ="<<w2<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";

		}
		if(input==2)
		{
            int x=1000;
            cout<<" price of 1 Medicine=20 \n";
			cout<<" Enter quantity";
			cin>>l;
            cout<<" User Enter ="<<l;
			a=a+1;
			L=L+(l*20);
            for (int x1=1; x1<=l; x1++)
            {
                x=x-1;
            }
            cout<<" Stock : Your Remaining Erythropoietin (EPO) ="<<x<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
		}
		if(input==3)
		{
            int y=1000;
            cout<<" price of 1 Medicine=40 \n";
			cout<<" Enter Quantity\n";
			cin>>j;
            cout<<" User Enter ="<<j;
			a=a+1;
			L=L+(j*40);
            for (int w1=1; w1<=j; w1++)
            {
                y=y-1;
            }
            cout<<" Stock : Your Remaining Hepatitis B vaccination ="<<y<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
		}
		if (input==4)
		{
            int z=1000;
            cout<<" price of 1 Medicine=10 \n";
			cout<<" Enter Quantity \n";
			cin>>k;
            cout<<" User Enter ="<<k;
			a=a+1;
			L=L+(k*10);
			for (int z1=1; z1<=k; z1++)
            {
                z=z-1;
            }
            cout<<" Stock : Your Remaining Iron supplements ="<<z<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
			if(input==5)
			{
                int b=1000;
                int i1;
                cout<<" price of 1 Medicine=10 \n";
			    cout<<" Enter Quantity \n";
                cin>>i1;
                cout<<" User Enter ="<<i1;
				a=a+1;
				L=L+(i1*10);
            for (int b1=1; b1<=i1; b1++)
            {
                b=b-1;
            }
            cout<<" Stock : Your Remaining Phosphate binders ="<<b<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
			if(input==6)
			{
                int c=1000;
                int j1;
                cout<<" price of 1 Medicine=70 \n";
			    cout<<" Enter Quantity \n";
                cin>>j1;
                cout<<" User Enter ="<<j1;
				a=a+1;
				L=L+(j1*70);
            for (int c1=1; c1<=j1; c1++)
            {
                c=c-1;
            }
            cout<<" Stock : Your Remaining Sodium Bicarbonate ="<<c<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
	if(input==7)
			{
                int d=1000;
                int k1;
                cout<<" price of 1 Medicine=90 \n";
			    cout<<" Enter Quantity \n";
                cin>>k1;
                cout<<" User Enter ="<<k1;
				a=a+1;
				L=L+(k1*90);
            for (int d1=1; d1<=k1; d1++)
            {
                d=d-1;
            }
            cout<<" Stock : Your Remaining Statins (cholesterol tablets) ="<<d<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
			if(input==-1)
		{
			cout<<"|**********************************************|"<<endl;
			cout<<"|     Your total type of item is ="<<a<< "     |"<<endl;
			cout<<"|                                              |"<<endl;
			cout<<"|     your    bill    is ="<< L <<"            |"<<endl;
			cout<<"|**********************************************|"<<endl;
			system("PAUSE");
        }
        if(input==0)
        {
        	cout<<" Done \n";
		}
    }    
     Billing( L );
     cout<<"\aPress any key for menu\a";
		system("PAUSE");
		goto mp;
 }
if(con==2)
{
	int I,J,K,L;
	int Input = -2; //-2 just for while loop
	int LA=0;
	int A=0;
		system("cls");
	cout<<"Hello, Customer! Here you can search your medicine\n";
	cout<<"*"<<endl;
    cout<<"REDOX*"<<endl;
	cout<<"Item List"<<endl;
    cout<<"*"<<endl;
	cout<<" press  1  for  aclidinium (Tudorza)\n";
	cout<<" press  2  for  arformoterol (Brovana)\n";
	cout<<" press  3  for  formoterol (Foradil, Perforomist)\n";
	cout<<" press  4  for  glycopyrrolate (Seebri Neohaler, Lonhala Magnair)\n";
	cout<<" press  5  for  indacaterol (Arcapta)\n";
	cout<<" press  6  for  olodaterol (Striverdi Respimat)\n";
	cout<<" press  7  for  revefenacin (Yupelri)\n";
	cout<<" press  8  for  salmeterol (Serevent)\n";
	cout<<" press  9  for  umeclidinium (Incruse Ellipta)\n";
	cout<<" press  10 for  aclidinium/formoterol (Duaklir)\n";
	cout<<" press  11 for  glycopyrrolate/formoterol (Bevespi Aerosphere)\n";
	cout<<" Select your  medicines from of them\n";
	cout<<" press -1  for  total bill"<<endl;
    cout<<" press  0  for  Exit \n";
    while(Input!=0)
	{
		cin>>Input;
		if(Input==1)
		{
            int W2=1000;
            cout<<" price of 1 Medicine=30 \n";
			cout<<" Enter Quantity";
			cin>>I; // we also set the condition in (if .else ) incase user enter 1001 goto again
			cout<<" User Enter ="<<I;
            A=A+1;
			LA=LA+(I*30);
            for (int W1=1; W1<=I; W1++)
            {
                W2=W2-1;
            }
            cout<<" Stock : Your Remaining aclidinium (Tudorza) ="<<W2<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";

		}
		if(Input==2)
		{
            int X=1000;
            cout<<" price of 1 Medicine=20 \n";
			cout<<" Enter quantity";
			cin>>L;
            cout<<" User Enter ="<<L;
			A=A+1;
			LA=LA+(L*20);
            for (int X1=1; X1<=L; X1++)
            {
                X=X-1;
            }
            cout<<" Stock : Your Remaining arform oterol (Brovana) ="<<X<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
		}
		if(Input==3)
		{
            int Y=1000;
            cout<<" price of 1 Medicine=40 \n";
			cout<<" Enter Quantity\n";
			cin>>J;
            cout<<" User Enter ="<<J;
			A=A+1;
			LA=LA+(J*40);
            for (int W1=1; W1<=J; W1++)
            {
                Y=Y-1;
            }
            cout<<" Stock : Your Remaining formoterol (Foradil, Perforomist) ="<<Y<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
		}
		if (Input==4)
		{
            int Z=1000;
            cout<<" price of 1 Medicine=10 \n";
			cout<<" Enter Quantity \n";
			cin>>K;
            cout<<" User Enter ="<<K;
			A=A+1;
			LA=LA+(K*10);
			for (int Z1=1; Z1<=K; Z1++)
            {
                Z=Z-1;
            }
            cout<<" Stock : Your Remaining glycopyrrolate (Seebri Neohaler, Lonhala Magnair) ="<<Z<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
			if(Input==5)
			{
                int B=1000;
                int I1;
                cout<<" price of 1 Medicine=10 \n";
			    cout<<" Enter Quantity \n";
                cin>>I1;
                cout<<" User Enter ="<<I1;
				A=A+1;
				LA=LA+(I1*10);
            for (int B1=1; B1<=I1; B1++)
            {
                B=B-1;
            }
            cout<<" Stock : Your Remaining indacaterol (Arcapta) ="<<B<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
			if(Input==6)
			{
                int C=1000;
                int J1,K1;
                cout<<" price of 1 Medicine=70 \n";
			    cout<<" Enter Quantity \n";
                cin>>J1;
                cout<<" User Enter ="<<J1;
				J=J+1;
				LA=LA+(K1*70);
            for (int C1=1; C1<=J1; C1++)
            {
                C=C-1;
            }
            cout<<" Stock : Your Remaining olodaterol (Striverdi Respimat) ="<<C<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
	if(Input==7)
			{
                int D=1000;
                int k1;
                cout<<" price of 1 Medicine=90 \n";
			    cout<<" Enter Quantity \n";
                cin>>k1;
                cout<<" User Enter ="<<k1;
				A=A+1;
				LA=LA+(k1*90);
            for (int D1=1; D1<=k1; D1++)
            {
                D=D-1;
            }
            cout<<" Stock : Your Remaining revefenacin (Yupelri) ="<<D<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
			if(Input==8)
			{
                int E=1000;
                int P1;
                cout<<" price of 1 Medicine=90 \n";
			    cout<<" Enter Quantity \n";
                cin>>P1;
                cout<<" User Enter ="<<P1;
				A=A+1;
				LA=LA+(P1*90);
            for (int D1=1; D1<=P1; D1++)
            {
                E=E-1;
            }
            cout<<" Stock : Your Remaining salmeterol (Serevent) ="<<E<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
			if(Input==9)
			{
                int e=1000;
                int p1;
                cout<<" price of 1 Medicine=90 \n";
			    cout<<" Enter Quantity \n";
                cin>>p1;
                cout<<" User Enter ="<<p1;
				A=A+1;
				LA=LA+(p1*90);
            for (int D1=1; D1<=p1; D1++)
            {
                e=e-1;
            }
            cout<<" Stock : Your Remaining umeclidinium (Incruse Ellipta) ="<<e<<endl;
            cout<<"              ......               \n";
			cout<<" Enter more if u want";
			cout<<" Please Enter More If u want\n";
			}
			if(Input==10)
			{
                int M=1000;
                int v1;
                cout<<" price of 1 Medicine=90 \n";
			    cout<<" Enter Quantity \n";
                cin>>v1;
                cout<<" User Enter ="<<v1;
				A=A+1;
				LA=LA+(v1*90);
            for (int D1=1; D1<=v1; D1++)
            {
                M=M-1;
            }
            cout<<" Stock : Your Remaining aclidinium/formoterol (Duaklir) ="<<M<<endl;
            cout<<"              ......               \n";
			cout<<" Enter more if u want\n";
			}
			if(Input==11)
			{
                int m=1000;
                int V1;
                cout<<" price of 1 Medicine=90 \n";
			    cout<<" Enter Quantity \n";
                cin>>V1;
                cout<<" User Enter ="<<V1;
				A=A+1;
				LA=LA+(V1*90);
            for (int D1=1; D1<=V1; D1++)
            {
                m=m-1;
            }
            cout<<" Stock : Your Remaining glycopyrrolate/formoterol (Bevespi Aerosphere) ="<<m<<endl;
            cout<<"              ......               \n";
            cout<<" Enter more if u want\n";
			}
			
			if(Input==-1)
		{
			cout<<"|**********************************************|"<<endl;
			cout<<"|     Your total type of item is ="<<A<<"      |"<<endl;
			cout<<"|                                              |"<<endl;
			cout<<"|         your    bill    is ="<<LA<<"         |"<<endl;
			cout<<"|**********************************************|"<<endl;
        }
        if(Input==0)
        {
        	cout<<" Done \n";
		}
    }  
    Billing( LA );
    cout<<"\aPress any key for menu\a";
		system("PAUSE");
		goto mp;
 }
}
if(con==3)
{
	int I1,J1,K1,L1;
	int Input1 = -2; //-2 just for while loop
	int LB;
	int B=0;
	system("cls");
	cout<<" Hello, Customer! Here you can search your medicine\n";
	cout<<"*"<<endl;
    cout<<" REDOX* "<<endl;
	cout<<"Item List"<<endl;
    cout<<"*"<<endl;
	cout<<" press  1  for  Lisinopril (Blood Pressure)\n";
	cout<<" press  2  for  Contac Cold (FLU)\n";
	cout<<" press  3  for  Fentanyl (Pain Killer)\n";
	cout<<" press  4  for  Panadol\n";
	cout<<" press  5  for  Disprin\n";
	cout<<" press  6  for  Brevoxyl (Acne)\n";
	cout<<" Select your medicines from of them\n";
	cout<<" press -1  for  total bill"<<endl;
    cout<<" press  0  for  Exit \n";
    while(Input1!=0)
	{
		cin>>Input1;
		if(Input1==1)
		{
            int W3=1000;
            cout<<" price of 1 Medicine=30 \n";
			cout<<" Enter Quantity";
			cin>>I1; // we also set the condition in (if .else ) incase user enter 1001 goto again
			cout<<" User Enter ="<<W3;
            B=B+1;
			LB=LB+(I1*30);
            for (int W1=1; W1<=I1; W1++)
            {
                W3=W3-1;
            }
            cout<<" Stock : Your Remaining Lisinopril (Blood Pressure) ="<<W3<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";

		}
		if(Input1==2)
		{
            int X1=1000;
            cout<<" price of 1 Medicine=20 \n";
			cout<<" Enter quantity";
			cin>>L1;
            cout<<" User Enter ="<<L1;
			B=B+1;
			LB=LB+(L1*20);
            for (int X1=1; X1<=L1; X1++)
            {
                X1=X1-1;
            }
            cout<<" Stock : Your Remaining Contac Cold (FLU) ="<<X1<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
		}
		if(Input1==3)
		{
            int Y1=1000;
            cout<<" price of 1 Medicine=40 \n";
			cout<<" Enter Quantity\n";
			cin>>J1;
            cout<<" User Enter ="<<J1;
			B=B+1;
			LB=LB+(J1*40);
            for (int W1=1; W1<=J1; W1++)
            {
                Y1=Y1-1;
            }
            cout<<" Stock : Your Remaining Fentanyl (Pain Killer) ="<<Y1<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
		}
		if (Input1==4)
		{
            int Z1=1000;
            cout<<" price of 1 Medicine=10 \n";
			cout<<" Enter Quantity \n";
			cin>>K1;
            cout<<" User Enter ="<<K1;
			B=B+1;
			LB=LB+(K1*10);
			for (int Z1=1; Z1<=K1; Z1++)
            {
                Z1=Z1-1;
            }
            cout<<" Stock : Your Remaining Panadol ="<<Z1<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
			if(Input1==5)
			{
                int F=1000;
                int T1;
                cout<<" price of 1 Medicine=10 \n";
			    cout<<" Enter Quantity \n";
                cin>>T1;
                cout<<" User Enter ="<<T1;
				B=B+1;
				LB=LB+(T1*10);
            for (int B1=1; B1<=T1; B1++)
            {
                F=F-1;
            }
            cout<<" Stock : Your Remaining Disprin ="<<F<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
			if(Input1==6)
			{
                int C1=1000;
                int J2;
                cout<<" 1 Medicine=70 \n";
			    cout<<" Enter Quantity \n";
                cin>>J2;
                cout<<" User Enter ="<<J2;
				J2=J2+1;
				LB=LB+(J2*70);
            for (int C1=1; C1<=J2; C1++)
            {
                C1=C1-1;
            }
            cout<<" Stock : Your Remaining Brevoxyl (Acne) ="<<C1<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
			
			if(Input1==-1)
		{
			cout<<"|**********************************************|"<<endl;
			cout<<"|     Your total type of item is ="<<B<<"      |"<<endl;
			cout<<"|                                              |"<<endl;
			cout<<"|         your    bill    is ="<<LB<<"         |"<<endl;
			cout<<"|**********************************************|"<<endl;
        }
        if(Input1==0)
        {
        	cout<<" Done \n";
		}
    }       
    Billing( LB );
    cout<<"\aPress any key for menu\a";
    	system("PAUSE");
		goto mp;
}
if(con==4)
{
	int I3,J2,K2,L2;
	int Input2 = -2; //-2 just for while loop
	int LC=0;
	int C=0;

		system("cls");
	cout<<" Hello, Customer! Here you can search your medicine\n";
	cout<<"*"<<endl;
    cout<<"REDOX*"<<endl;
	cout<<"Item List"<<endl;
    cout<<"*"<<endl;
	cout<<"press  1  for   Insulin     injection\n";
    cout<<"press  2  for   Pain      injection\n";
    cout<<"press  3  for   fever     injection\n";
    cout<<"press  4  for   Vomiting  injection\n";
	cout<<"press  5  for   Band-Aid  Brand (Bandages)\n";
	cout<<"press  6  for   1/2 liter Nestle water\n";
	cout<<"press  7  BP    test\n";
    cout<<"press  8  Sugar test\n";
    cout<<"press  9  Blood test\n";
	cout<<"press -1  for total     Bill"<<endl;
    cout<<"press  0  for Exit \n";
    while(Input2!=0)
	{
		cin>>Input2;
		if(Input2==1)
		{
			int su;
			cout<<" its price is 500"<<endl;
			cout<<" Enter Quantity"<<endl;
			cin>>su;
			C=C+1;
			LC=LC+(su*500);
			int i1;
			i1=1000;
			for(int f=0 ;f<su;f++)
			{
				i1=i1-1;
			}
			cout<<" Stock: Remaining Insulin injection is "<<i1<<endl;
			cout<<" Please Enter More If u want\n";
		}
		 if(Input2==2)
			{
				int pa;
			cout<<" its price is 200"<<endl;
			cout<<" Enter Quantity"<<endl;
			cin>>pa;
			C=C+1;
			LC=LC+(pa*200);
			int i2;
			i2=1000;
			for(int f=0 ; f<=pa ; f++)
			{
				i2=i2-1;
			}
			cout<<" Stock: Remaining Pain injection is"<<i2<<endl;
			cout<<" Please Enter More If u want\n";
			}
		 if(Input2==3)
			{
			int fe;
			cout<<" its price is 180"<<endl;
			cout<<" Enter Quantity"<<endl;
			cin>>fe;
			C=C+1;
			LC=LC+(fe*180);
			int i3;
			i3=1000;
			for(int f=0 ; f<=fe ; f++)
			{
				i3=i3-1;
			}
			cout<<" Stock: Remaining Fever injection is"<<i3<<endl;
			cout<<" Please Enter More If u want\n";
			}
	    if(Input2==4)
			{
				int vo;
			cout<<" its price is 100"<<endl;
			cout<<" Enter Quantity"<<endl;
			cin>>vo;
			C=C+1;
			LC=LC+(vo*1000);
			int i4;
			i4=1000;
			for(int f=0 ; f<=vo ; f++)
			{
				i4=i4-1;
			}
			cout<<" Stock: Remaining Sugar injection is"<<i4<<endl;
			cout<<" Please Enter More If u want\n";
			}
		
		if(Input2==5)
		{
            int X2=1000;
            cout<<" 1 price of  Medicine=20 \n";
			cout<<" Enter quantity";
			cin>>L2;
            cout<<" User Enter ="<<L2;
			C=C+1;
			LC=LC+(L2*20);
            for (int X1=1; X1<=L2; X1++)
            {
                X2=X2-1;
            }
            cout<<" Stock : Your Remaining Band-Aid Brand (Bandages) ="<<X2<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
		}
		if(Input2==6)
		{
            int Y2=1000;
            cout<<" 1 price of Medicine=40 \n";
			cout<<" Enter Quantity\n";
			cin>>J2;
            cout<<" User Enter ="<<J2;
			C=C+1;
			LC=LC+(J2*40);
            for (int W1=1; W1<=J2; W1++)
            {
                Y2=Y2-1;
            }
            cout<<" Stock : Your Remaining 1/2 liter nestle water ="<<Y2<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
		}   
		if (Input2==7)
			{
		int ak;
			cout<<" It is free of cost for our respected customers"<<endl;
			cout<<" You can recieve your report at 12 AM"<<endl;
			cout<<" ___________________________________________________________"<<endl;
			cout<<"|                                                           |"<<endl;
			cout<<"| Report No :     987                                       |"<<endl;
			cout<<"|                                                           |"<<endl;
		    cout<<"| Test Name :     BP test                                   |"<<endl;
		    cout<<"|                                                           |"<<endl;
			cout<<"|       Thanks for visit Redox         Time: 12 AM          |"<<endl;
			cout<<"|                                                           |"<<endl;
			cout<<"| BP range is      :      (120/80-140/90)                   |"<<endl;
			cout<<"|                                                           |"<<endl;
			cout<<"|               NORMAL                                      |"<<endl;
			cout<<"|___________________________________________________________|"<<endl;
	    }	
		if(Input2==8)
		{
			cout<<" It is free of cost for our respected customers"<<endl;
			cout<<" You can recieve your report at 12 AM"<<endl;
			cout<<" ______________________________________________________________________"<<endl;
			cout<<"|                                                                      |"<<endl;
			cout<<"| Report No :     986                                                  |"<<endl;
			cout<<"|                                                                      |"<<endl;
		    cout<<"| Test Name :     Sugar test                                           |"<<endl;
		    cout<<"|                                                                      |"<<endl;
			cout<<"|           Thanks for visit Redox           Time: 12 AM               |"<<endl;
			cout<<"|                                                                      |"<<endl;
			cout<<"| Sugar range is      :       4.0 to 5.4 mmol/L (72 to 99 mg/dL)       |"<<endl;
			cout<<"|                                                                      |"<<endl;
			cout<<"|                    NORMAL                                            |"<<endl;
			cout<<"|______________________________________________________________________|"<<endl;

		}
		if(Input2==9)
		{
			
			cout<<" It is free of cost for our respected customers"<<endl;
			cout<<" You can recieve your report at 12 AM"<<endl;
			cout<<" ________________________________________________________________"<<endl;
			cout<<"|                                                                |"<<endl;
			cout<<"|        Report No :     987                                     |"<<endl;
			cout<<"|                                                                |"<<endl;
		    cout<<"|         Test Name :     Blood test                             |"<<endl;
		    cout<<"|                                                                |"<<endl;
			cout<<"|    Thanks for visit Redox                  Time: 12 AM         |"<<endl;
			cout<<"|                                                                |"<<endl;
			cout<<"|               Your Blood group is    |A+ |                     |"<<endl;
			cout<<"|________________________________________________________________|"<<endl;
		}
		if(Input2==-1)
		{
			cout<<"|**********************************************|"<<endl;
			cout<<"|     Your total type of item is ="<<C<<"      |"<<endl;
			cout<<"|                                              |"<<endl;
			cout<<"|         your    bill    is ="<<LC<<"         |"<<endl;
			cout<<"|**********************************************|"<<endl;
        }
        if(Input2==0)
        {
        	cout<<" Done \n";
		}
    }       
    Billing( LC );
    cout<<"Press any key for menu\a";
			system("PAUSE");
		goto mp;
}
if(con==5)
{
	int I4,J3,K3,L3;
	int Input3 = -2; //-2 just for while loop
	int LK=0;
	int K=0;
		system("cls");
	cout<<" Hello, Customer! Here you can search your medicine\n";
	cout<<"*"<<endl;
    cout<<" REDOX*"<<endl;
	cout<<" Item List"<<endl;
    cout<<"*"<<endl;
	cout<<" press  1  for  Statins\n";
	cout<<" press  2  for  Aspirin \n";
	cout<<" press  3  for  Clopidogrel \n";
	cout<<" press  4  for  Warfarin \n";
	cout<<" press  5  for  Beta-blockers\n";
	cout<<" Select your medicines from of them\n";
	cout<<" press -1  for  total bill"<<endl;
    cout<<" press  0  for  Exit \n";
    while(Input3!=0)
	{
		cin>>Input3;
		if(Input3==1)
		{
            int W5=1000;
            cout<<" price of 1 Medicine=30 \n";
			cout<<" Enter Quantity";
			cin>>I4; // we also set the condition in (if .else ) incase user enter 1001 goto again
			cout<<" User Enter ="<<W5;
            K=K+1;
			LK=LK+(I4*30);
            for (int W1=1; W1<=I4; W1++)
            {
                W5=W5-1;
            }
            cout<<" Stock : Your Remaining Statins ="<<W5<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
		}
		if(Input3==2)
		{
            int X3=1000;
            cout<<" price of 1 Medicine=20 \n";
			cout<<" Enter quantity";
			cin>>L3;
            cout<<" User Enter ="<<L3;
			K=K+1;
			LK=LK+(L3*20);
            for (int X1=1; X1<=L3; X1++)
            {
                X3=X3-1;
            }
            cout<<" Stock : Your Remaining Aspirin ="<<X3<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
		}
		if(Input3==3)
		{
            int Y3=1000;
            cout<<" price of 1 Medicine=40 \n";
			cout<<" Enter Quantity\n";
			cin>>J3;
            cout<<" User Enter ="<<J3;
			K=K+1;
			LK=LK+(J3*40);
            for (int W1=1; W1<=J3; W1++)
            {
                Y3=Y3-1;
            }
            cout<<" Stock : Your Remaining Clopidogrel ="<<Y3<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
		}
		if (Input3==4)
		{
            int Z3=1000;
            cout<<" price of 1 Medicine=10 \n";
			cout<<" Enter Quantity \n";
			cin>>K3;
            cout<<" User Enter ="<<K3;
			K=K+1;
			LK=LK+(K3*10);
			for (int Z1=1; Z1<=K3; Z1++)
            {
                Z3=Z3-1;
            }
            cout<<" Stock : Your Remaining Warfarin ="<<Z3<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
			if(Input3==5)
			{
                int F1=1000;
                int T2;
                cout<<" price of 1 Medicine=10 \n";
			    cout<<" Enter Quantity \n";
                cin>>T2;
                cout<<" User Enter ="<<T2;
				K=K+1;
				LK=LK+(T2*10);
            for (int B1=1; B1<=T2; B1++)
            {
                F1=F1-1;
            }
            cout<<" Stock : Your Remaining Beta-blockers ="<<F1<<endl;
            cout<<"              ......               \n";
            cout<<" Please Enter More If u want\n";
			}
			if(Input3==-1)
		{
			cout<<"|**********************************************|"<<endl;
			cout<<"|     Your total type of item is =<<K          |"<<endl;
			cout<<"|                                              |"<<endl;
			cout<<"|          your    bill    is ="<<LK<<"        |"<<endl;
			cout<<"|**********************************************|"<<endl;
        }
       if(Input3==0)
        {
        	cout<<" Done \n";
		} 
    }    
    Billing( LK );
    cout<<"\aPress any key for menu\a";
    system("PAUSE");
    goto mp;
}
system("PAUSE");
		goto mp;
	break;	
	}
	case 2:
	{
		system("CLS");
	system("color 02");
	int enter;
	cout<<">>>>>>> Employee Details <<<<<<<<<<";
	cout<<"                                           \n";
	cout<<" ---------------------------------------------\n";
	cout<<"  Enter  1  :  To visit list of Employees       \n";
	cout<<" ---------------------------------------------\n";
	cout<<"  Enter  2  :  To login Employee id            \n";
	cout<<" ---------------------------------------------\n";
	cout<<"  Enter  3  :  To view salary details of employees   \n";
	cout<<" ----------------------------------------------------------\n";
	cin>>enter;
	if(enter==1)
	{
		cout<<" There are two employees \n";
		cout<<"                                           \n";
	cout<<" ---------------------------------------------\n";
		cout<<" 1 : Muhammad Abdullah\n";
		cout<<" 2 : Rimsha   \n";
	}
  if(enter==2)
	{
	int ep,Emp, Rep;
    Emp:
	cout<<setw(90)<<" Welcome , Employee! Please login below.\t\t\n\t\t\t"<<endl;
	cout<<setw(80)<<" Hey! you need to enter your Redox username and password.\t\t\n"<<endl;
	cin>>Username_Attempt;
	if(Username_Attempt=="Abdullah" || Username_Attempt=="abdullah" || Username_Attempt=="ABDULLAH")
	{
        Rep:
		cout<<setw(150)<<" Enter Your Password.\t\n\t\t\t\t"<<endl;
		cin>>Password_Attempt;
        int ep;
        ep:
      if(Password_Attempt==1234)
	{
		cout<<setw(120)<<"-------Thank you for logging in.-----------\t\n\t\t\t\t"<<endl;
	}
    else if(Password_Attempt==3)
		{
			cout<<setw(130)<<"--------Thank you for logging in.-----------\t\n\t\t\t\t"<<endl;
				cout<<setw(130)<<"Welcome ABDULLAH."<<endl;
		}
	else if(Password_Attempt!=1234)
	{
        int EP;
        EP:
		cout<<setw(90)<<"If you forget your password then reset your password.\t\n\t\t\t\t"<<endl;
		cin>>Password_Attempt1;
		cout<<setw(90)<<"Enter your existing Password_Attempt for confirmation.\t\n\t\t\t\t"<<endl;
		cin>>Confirm_password;
        
        if(Password_Attempt1==Confirm_password)
        {
            Password_Attempt=3;
            goto ep;
        }
        else
        {
            goto EP;
        }
	}
	else
	{
		cout<<setw(90)<<"---------Wrong password. Press Any Key to Try Again----------\t\n\t\t\t\t"<<endl;
	    system("PAUSE");
        goto Rep;
    }
     
}
	
	else if(Username_Attempt=="Rimsha" ||Username_Attempt=="rimsha" || Username_Attempt=="RIMSHA")
	{
        int BPep,Bep;
        BPep:
		cout<<setw(130)<<"Enter Your Password.\t\n\t\t\t\t"<<endl;
		cin>>Password_Attempt;
       Bep:
     if(Password_Attempt==3211)
	{
		cout<<setw(130)<<"----------Thank you for logging in.---------\t\n\t\t\t\t"<<endl;
	}
    else if(Password_Attempt==3)
		{
			cout<<setw(130)<<"----------Thank you for logging in.----------\t\n\n"<<endl;
				cout<<setw(130)<<"-----------Welcome Rimsha.----------"<<endl;
			
		}
	else if(Password_Attempt!=3211)
	{
        int BEP;
        BEP:
		cout<<setw(90)<<"If you forget your password then reset your password.\t\n\t\t\t\t"<<endl;
		cin>>Password_Attempt1;
		cout<<setw(90)<<"Enter your existing Password_Attempt for confirmation.\t\n\t\t\t\t"<<endl;
		cin>>Confirm_password;
        if(Confirm_password==Password_Attempt1)
        {
            Password_Attempt=3;
            goto Bep;
        }
        else
        {
            goto BEP;
        }
	}
	
	else
	{
		cout<<setw(140)<<"---------------Please! Try to login again. Press Any Key-------------\t\n\n"<<endl;
        system("PAUSE");
        goto BPep;
			
	}
	}

	else
    {
        cout<<" Wrong Username Press Any to try again\n";
        system("PAUSE");
        goto Emp;

    }
}
  if(enter==3)
 {
 	 string first, last;
    int hours;
    int hours_rate=500;
    float computed_pay;
    float overtime_pay;
    float extra_hours;
    float max_hours = 40;
    cout <<" Enter the Employee's first and last name  "<<endl; 
    cin >> first >> last;
    cout << "Enter Hours worked: "<<endl;
    cin >> hours;
    cout<<endl;
    cout << "---------- Employee Information -----------" << endl;
    cout << "Employee: " << first << " " << last << endl;
    cout << "Time worked: " << hours << "hours"<<endl;
    if (hours > 40)
       {
              overtime_pay = (hours - 40) * 4 * hours_rate;
              computed_pay = max_hours * hours_rate * 4 + overtime_pay;
              extra_hours = hours - 40;
              cout<<"extra hours worked: "<<extra_hours<<endl;
              cout << "The computed pay with overtime is: " << computed_pay<<endl;
       }
    else
         {
                computed_pay = hours_rate * hours * 4;
                cout << "The computed pay is: " << computed_pay;
                cout << "\n";
         }
cout<<endl;
}
system("PAUSE");
		goto mp;
    break;	
	}
    case 3:
	{	
	int enter1;
	cout<<">>>>>>> Manager Details <<<<<<<<<<";
	cout<<"                                           \n";
	cout<<" ---------------------------------------------\n";
	cout<<"  Enter  1  :  To  visit   list     of   Managers       \n";
	cout<<" ---------------------------------------------\n";
	cout<<"  Enter  2  :  To  login   Manager  id            \n";
	cout<<" ---------------------------------------------\n";
	cout<<"  Enter  3  :  To  view    salary   details  of Manager   \n";
	cout<<" ---------------------------------------------\n";
	cout<<"  Enter  4  :  To  view    stock    details     \n";
	cout<<" ----------------------------------------------------------\n";
	cin>>enter1;
	system("CLS");
	system("color 04");
	if(enter1==1)
	{
		cout<<" There are two Managers \n";
		cout<<"                                           \n";
	cout<<" ---------------------------------------------\n";
		cout<<" 1 : Khadija Tahira \n";
		cout<<" 2 : Bakhtawar Mustafa   \n";
	}
    if(enter1==2)
	{
	int up,Uup, Rup;
    Uup:
	cout<<setw(90)<<"Welcome , Manager! Please login below.\t\t\n\t\t\t"<<endl;
	cout<<setw(80)<<"Hey! you need to enter your Redox username and password.\t\t\n"<<endl;
	cin>>Username_Attempt;
	if(Username_Attempt=="khadija" || Username_Attempt=="Khadija" || Username_Attempt=="KHADIJA")
	{
        Rup:
		cout<<setw(150)<<"Enter Your Password.\t\n\t\t\t\t"<<endl;
		cin>>Password_Attempt;
        int up;
        up:
      if(Password_Attempt==2015)
	{
		cout<<setw(120)<<"-------Thank you for logging in.-----------\t\n\t\t\t\t"<<endl;
	}
    else if(Password_Attempt==3)
		{
			cout<<setw(130)<<"--------Thank you for logging in.-----------\t\n\t\t\t\t"<<endl;
				cout<<setw(130)<<"Welcome Khadija."<<endl;
		}
	else if(Password_Attempt!=2015)
	{
        int NP;
        NP:
		cout<<setw(90)<<"If you forget your password then reset your password.\t\n\t\t\t\t"<<endl;
		cin>>Password_Attempt1;
		cout<<setw(90)<<"Enter your existing Password_Attempt for confirmation.\t\n\t\t\t\t"<<endl;
		cin>>Confirm_password;
        
        if(Password_Attempt1==Confirm_password)
        {
            Password_Attempt=3;
            goto up;
        }
        else
        {
            goto NP;
        }
	}
	else
	{
		cout<<setw(90)<<"---------Wrong password. Press Any Key to Try Again----------\t\n\t\t\t\t"<<endl;
	    system("PAUSE");
        goto Rup;
    }
     
	}
	
	else if(Username_Attempt=="Bakhtawar" ||Username_Attempt=="bakhtawar" )
	{
        int BPup,Bup;
        BPup:
		cout<<setw(130)<<"Enter Your Password.\t\n\t\t\t\t"<<endl;
		cin>>Password_Attempt;
       Bup:
     if(Password_Attempt==3210)
	{
		cout<<setw(130)<<"----------Thank you for logging in.---------\t\n\t\t\t\t"<<endl;
	}
    else if(Password_Attempt==3)
		{
			cout<<setw(130)<<"----------Thank you for logging in.----------\t\n\n"<<endl;
				cout<<setw(130)<<"-----------Welcome Bakhtawar.----------"<<endl;
			
		}
	else if(Password_Attempt!=3210)
	{
        int BNP;
        BNP:
		cout<<setw(90)<<"If you forget your password then reset your password.\t\n\t\t\t\t"<<endl;
		cin>>Password_Attempt1;
		cout<<setw(90)<<"Enter your existing Password_Attempt for confirmation.\t\n\t\t\t\t"<<endl;
		cin>>Confirm_password;
        if(Confirm_password==Password_Attempt1)
        {
            Password_Attempt=3;
            goto Bup;
        }
        else
        {
            goto BNP;
        }
	}
	
	else
	{
		cout<<setw(140)<<"---------------Please! Try to login again. Press Any Key-------------\t\n\n"<<endl;
        system("PAUSE");
        goto BPup;
			
	}
	}

	else
    {
        cout<<" Wrong Username Press Any to try again\n";
        system("PAUSE");
        goto Uup;
    }
}
   if(enter1==3)
 {
 	 string first, last;
    int hours;
    int hours_rate=500;
    float computed_pay;
    float overtime_pay;
    float extra_hours;
    float max_hours = 40;
    cout <<" Enter the Manager's first and last name  "<<endl; 
    cin >> first >> last;
    cout << "Enter Hours worked: "<<endl;
    cin >> hours;
    cout<<endl;
    cout << "---------- Manager Information -----------" << endl;
    cout << "Manager: " << first << " " << last << endl;
    cout << "Time worked: " << hours << " hours"<<endl;
    if (hours > 40)
       {
              overtime_pay = (hours - 40) * 4 * hours_rate;
              computed_pay = max_hours * hours_rate * 4 + overtime_pay;
              extra_hours = hours - 40;
              cout<<"extra hours worked: "<<extra_hours<<endl;
              cout << "The computed pay with overtime is: " << computed_pay<<endl;
       }
    else 
         {
                computed_pay = hours_rate * hours * 4;
                cout << "The computed pay is: " << computed_pay;
                cout << "\n";
         }
             cout<<endl;  
         }
	if(enter1==4)
	{
		Stock ();
	 } 
	 system("PAUSE");
		goto mp;
    break;
}
case 4:
	{
		cout<<"Loading <";
		for(int i=0; i<=20; i++)
		{
			Sleep(125);
			cout<<"|";
		}
		cout<<">100%\n\n";
		cout<<"\t\t\tAllah Hafiz\n";
	break;
}
	default:
	{
		system("PAUSE");
		goto mp;
		break;
	}
}
}
