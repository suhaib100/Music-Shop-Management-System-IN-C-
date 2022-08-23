/****************************************/
/***********	Headder Files	*********/
#include<iostream>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<fstream>
#include<stdio.h>
#include<iomanip>
#include<dos.h>
/****************************************/

      class consumer
		{
		int cno;
		char cname[20];
		char adress[20];
		long double a;
		float i;
		public:

      //FUNCTION TO ENTER THE VALUES

		public:

      void entry()
		{
		
		textcolor(RED);
		gotoxy(32,4);
		cputs("MELODY MUSICAL STORE");
		gotoxy(5,8);
		cputs("Customer ID :");
		gotoxy(5,10);
		cputs("Customer name :");
		gotoxy(5,12);
		cputs("Customer adress :");
		gotoxy(5,14);
		cputs("Costumer Phone number :");
		gotoxy(5,16);
		cputs("Bill no.");
		gotoxy(45,8);
		cin>>cno;
		gotoxy(45,10);
		gets(cname);
		gotoxy(45,12);
		gets(adress);
		gotoxy(45,14);
		cin>>a;
		gotoxy(45,16);
		cin>>i;

		}

      //FUNCTION TO DISPLAY THE VALUES

      void display()
		    {
			textcolor(RED);
		    cout<<"\n\n";
		    gotoxy(5,8);
		    cputs("Customer ID :");
		    cout<<cno;
		    gotoxy(5,10);
		    cputs("Customer name :");
		    puts(cname);
		    gotoxy(5,12);
		    cout<<"Customer adress :"<<adress;
		    gotoxy(5,14);
		    cout<<"Costumer Phone number :"<<a;
		    gotoxy(5,20);
		    cout<<"Customer Bill number :"<<i<<"\n";
		    }
      int rcno()
      {
      return cno;
      }
      }c;

      //FUNCTION TO WRITE THE VALUES

      void write()
		{
		textcolor(RED);
		char ch;
		consumer c;
		fstream f1;
		c.entry();
		f1.open("main1.txt",ios::app);
		cout<<"\n\n\tDO you want to save the record(y/n)\t";
		cin>>ch;
		if(ch=='y')
		{
		f1.write((char*)&c,sizeof(c));
		}
		f1.close();
		}

	  //FUNCTION TO READ THE VALUES

      void read()
		{
		consumer c;
		fstream f1;
		f1.open("main1.txt",ios::in);
		while(!f1.eof())
		{
		f1.read((char*)&c,sizeof(c));
		c.display();
		if(f1.eof())
		{
		cout<<"\n\n   End of the file reached\n\n";
		}
		}
		f1.close();
		}

      //FUNCTION FOR SEARCHING THE RECORD

      char search()
	  {
		textcolor(RED);
		consumer c;
		int rn;
		char found='n';
		ifstream f1("main1.txt",ios::in);
		cout<<"\n\n Enter Customer ID you want to SEARCH :\t";
		cin>>rn;
		while(!f1.eof())
		{
		f1.read((char*)&c,sizeof(c));
		if(c.rcno()==rn)
		{
		c.display();
		found='y';
		break;
		}
		}
		textcolor(RED);
		if(found=='n')
		cout<<"\n\n\tRECORD NOT FOUND!!!!!!!!!!!!!\n"<<endl;
		f1.close();
		return found;
		}

      //FUNCTION TO DELELTE THE RECORD

      void del()
		{
		textcolor(RED);
		ifstream f1("main1.txt",ios::in);
		ofstream f2("temp1.txt",ios::out);
		int rno;
		char found='f',confirm='n';
		cout<<"\n\n Enter Customer ID you want to DELETE :\t";
		cin>>rno;
		while(!f1.eof())
		{
		f1.read((char*)&c,sizeof(c));
		if(c.rcno()==rno)
		{
		c.display();
		found='t';
		cout<<"\n\n Are you sure want to DELETE this record ? (y/n)\t";
		cin>>confirm;
		textcolor(RED);
		if(confirm=='n')
		f2.write((char*)&c,sizeof(c));
		}
		else
		f2.write((char*)&c,sizeof(c));
		}
		if(found=='f')
		cout<<"\n\n\tRECORD NOT FOUND\n";
		f1.close();
		f2.close();
		remove("main1.txt");
		rename("temp1.txt","main1.txt");
		}

      //FUNCTION TO MODIFY THE RECORD

      void update()
		{
		textcolor(RED);
		fstream f1("main1.txt",ios::in | ios::out );
		int rno;
		long pos;
		char found='f';
		cout<<"\n\n Enter the Customer ID you want to MODIFY :\t";
		cin>>rno;
		while(!f1.eof())
		{
		pos=f1.tellg();
		f1.read((char*)&c,sizeof(c));
		if(c.rcno()==rno)
		{
		c.entry();
		f1.seekg(pos);
		f1.write((char*)&c,sizeof(c));
		found='t';
		break;
		}
		}
		textcolor(RED);
		if(found=='f')
		cout<<"\n\n\tRECORD NOT FOUND\n";
		f1.seekg(0);
		textcolor(RED);
		clrscr();
		cout<<"\n Now the file contains\n\n";
		c.display();
		f1.close();
		getch();
		}

      //STARTING OF THE VOID MAIN


void main()
{

   unsigned int i,k=0,choice,li,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,l=0;
   float guia=0,guib=0,guic=0,guie=0,keyb=0,tabl=0,harm=0,ukul=0,trum=0,sexop=0;
   unsigned int gui,agui,bgui,cgui,egui,keybo,tab,har,uku,tru,sexo;
   int m=65,n=50,o=46,p=28,q=42,r=54,s=52,t=40,u=30,v=35;
   float add=0,sum=0;
   char pass[5],opt,yes,et;
   lev1:;
   textcolor(RED);
   clrscr();
	cout<<"\n\n\tPLEASE BE CAREFUL ENTER THE PASSWORD IN SMALL LETTERS\n";
	cout<<"\n\t\tPASSWORD DOES NOT CONTAINS ANY NUMBER\n\n\n";
	cout<<"\n\n\t\t\tEnter your Password : \t";


   pass[0]=getch();
   cout<<"*";
   pass[1]=getch();
   cout<<"*";
   pass[2]=getch();
   cout<<"*";
   pass[3]=getch();
   cout<<"*";
   pass[4]=getch();
   cout<<"*";
   pass[5]='\0';
   cout<<"*";
   cout<<"\n";
   if(strcmp(pass,"hello")==0)
   {

    //LOADING THE PROJECT

	gotoxy(32,13);
	textcolor(LIGHTGREEN);
	cputs("********************");
	gotoxy(32,15);
	cputs("LOADING YOUR PROJECT");
	gotoxy(32,17);
	cputs("********************");
	gotoxy(32,20);
	textcolor(MAGENTA+BLINK);
	cputs("PLEASE WAIT.........");
	textcolor(RED+GREEN);
	delay(500);
	gotoxy(33,21);
	cputs("10 % completed..");
	delay(500);
	gotoxy(33,21);
	cputs("20 % completed...");
	delay(500);
	gotoxy(33,21);
	cputs("30 % completed....");
	delay(500);
	gotoxy(33,21);
	cputs("40 % completed.....");
	delay(500);
	gotoxy(33,21);
	cputs("50 % completed......");
	delay(500);
	gotoxy(33,21);
	cputs("60 % completed.......");
	delay(500);
	gotoxy(33,21);
	cputs("70 % completed........");
	delay(500);
	gotoxy(33,21);
	cputs("80 % completed.........");
	delay(500);
	gotoxy(33,21);
	cputs("90 % completed..........");
	delay(500);
	gotoxy(33,21);
	cputs("100 % completed...........");
	delay(500);

   }
   else
   {
	   cout<<"\n\n\t\t\t$$$$$$ Ooop's wrong password $$$$$$\n";
		cout<<"\n\n\t\t\t%%%%%% Please re-enter the password%%%%%%\n";
		getch();
		k++;
      if(k==3)
      {
	cout<<"\n\n\t\tToo Many Attempts\n\n\t\tTry after Sometimes.....";
	getch();
	exit(0);
      }

      getch();
      goto lev1;
   }
   textcolor(BROWN);
   choices:;
   clrscr();
   cout<<"\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
   cout<<"%                           WELCOME                                           %\n";
   cout<<"%                    MELODY MUSICAL STORE                                     %\n";
   cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
   cout<<"\n\t\t\t  **************\n";
   cout<<"\t\t\t  *  MAIN MENU *\n";
   cout<<"\t\t\t  **************\n";
   cout<<"     **********************************************************************\n";
   cout<<"     *--------------------------------------------------------------------*\n";
   cout<<"     *|                                                                  |*\n";
   cout<<"     *|       1.  NEW CUSTOMER                                           |*\n";
   cout<<"     *|       2.  EXISTING CUSTOMER                                      |*\n";
   cout<<"     *|       3.  SEARCH A RECORD                                        |*\n";
   cout<<"     *|       4.  DELETE A RECORD                                        |*\n";
   cout<<"     *|       5.  MOODIFY A RECORD                                       |*\n";
   cout<<"     *|       6.  QUANTITY AVAILABLE                                     |*\n";
   cout<<"     *|       0.  EXIT                                                   |*\n";
   cout<<"     *|                                                                  |*\n";
   cout<<"     *--------------------------------------------------------------------*\n";
   cout<<"     **********************************************************************\n";
   cout<<"Enter Your choice : ";
   cin>>choice;
   cout<<"PRESS ANY KEY TO CONTINUE.....";
   getch();
   switch(choice)
   {
     case 1:
	{
		clrscr();
		textcolor(RED);
		cout<<"\n\n\t\t\t MELODY MUSICAL STORE\n";
		cout<<"\n\n\t\t\t COSTUMER INFO \n\n";

	  // TO ENTER DETAILS OF COSTUMER

	    write();

	  //ITEM PURCHASE AND THEIR RATE

	    cout<<"\n\nDO YOU WANT TO PURCHASE ANYTHING (Y/N) :  ";
	    cin>>opt;
	    if(opt=='y'||opt=='Y')
	    {
			list:;
			clrscr();
			textcolor(BROWN);

			  // LIST ITEMS

			cout<<"\n\t\t\t============";
			cout<<"\n\t\t\t||  LIST  ||";
			cout<<"\n\t\t\t============\n";
			cout<<"     **********************************************************************\n";
			cout<<"     *--------------------------------------------------------------------*\n";
			cout<<"     *|                                                                  |*\n";
			cout<<"     *|        1. GUITAR                                                 |*\n";
			cout<<"     *|        2. KEYBOARD                                               |*\n";
			cout<<"     *|        3. TABLA                                                  |*\n";
			cout<<"     *|        4. HARMONIUM                                              |*\n";
			cout<<"     *|        5. UKULELE                                                |*\n";
			cout<<"     *|        6. TRUMPET                                                |*\n";
			cout<<"     *|        7. SEXOPHONE                                              |*\n";
			cout<<"     *--------------------------------------------------------------------*\n";
			cout<<"     **********************************************************************\n";
			cout<<"\n\nEnter your choics :\t";
			cin>>li;

			switch(li)
			{
				case 1:
				{
					guitar:
					textcolor(BROWN);
					clrscr();
					cout<<"\n\t\t\t===================";
					cout<<"\n\t\t\t||  GUITAR TYPE  ||";
					cout<<"\n\t\t\t===================\n";
					cout<<"     **********************************************************************\n";
					cout<<"     *--------------------------------------------------------------------*\n";
					cout<<"     *|                                                                  |*\n";
					cout<<"     *|       1. ACOUSTIC GUITAR                                         |*\n";
					cout<<"     *|       2. BASS GUITAR                                             |*\n";
					cout<<"     *|       3. CLASSICAL GUITAR                                        |*\n";
					cout<<"     *|       4. ELECTRICAL GUITAR                                       |*\n";
					cout<<"     *--------------------------------------------------------------------*\n";
					cout<<"     **********************************************************************\n";
					cout<<"\n\nEnter your choice :\t";
					cin>>gui;

					switch(gui)
					{
						case 1:
						{
							acoustic:;

							textcolor(BROWN);
							clrscr();
							cout<<"\n\t\t\t=======================";
							cout<<"\n\t\t\t||  ACOUSTIC GUITAR  ||";
							cout<<"\n\t\t\t=====================\n";
							cout<<"     **********************************************************************\n";
							cout<<"     *--------------------------------------------------------------------*\n";
							cout<<"     *|           ITEMS                                    RATE          |*\n";
							cout<<"     *| %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% |*\n";
							cout<<"     *|       1. HERTZ HZA-3801E (LINDEN WOOD)             9999/-        |*\n";
							cout<<"     *|       2. GIVSON G-150 (ROSEWOOD)                   4999/-        |*\n";
							cout<<"     *|       3. HERTZ HZA 4000 EQ (LINDEN WOOD)           8999/-        |*\n";
							cout<<"     *|       4. GIVSON VENUS (LINDEN WOOD)                5999/-        |*\n";
							cout<<"     *|       5. YAMAHA F310 GUITAR                        9599/-        |*\n";
							cout<<"     *--------------------------------------------------------------------*\n";
							cout<<"     **********************************************************************\n";
							cout<<"\n\nEnter your choice :\t";
							cin>>agui;
							switch(agui)
							{
								case 1:
									guia=9999;
									break;
								case 2:
									guia=4999;
									break;
								case 3:
									guia=8999;
									break;
								case 4:
									guia=5999;
									break;
								case 5:
									guia=9599;
									break;
								case 0:
									goto guitar;

								default:
									textcolor(RED);
									cprintf("OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....");
									getch();
									goto acoustic;
							}
							a=1;

							goto purchase;

						}
						case 2:
						{
							bass:;

							textcolor(BROWN);
							clrscr();
							cout<<"\n\t\t\t==================";
							cout<<"\n\t\t\t||  BASS GUITAR  ||";
							cout<<"\n\t\t\t==================\n";
							cout<<"     **********************************************************************\n";
							cout<<"     *--------------------------------------------------------------------*\n";
							cout<<"     *|           ITEMS                                    RATE          |*\n";
							cout<<"     *| %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% |*\n";
							cout<<"     *|       1. FENDER ELECTRIC BASS GUITAR               95999/-       |*\n";
							cout<<"     *|       2. GIVSON ELECTRIC BASS GUITAR               13999/-       |*\n";
							cout<<"     *--------------------------------------------------------------------*\n";
							cout<<"     **********************************************************************\n";
							cout<<"\n\nEnter your choice :\t";
							cin>>bgui;
							switch(bgui)
							{
								case 1:
									guib=95999;
									break;
								case 2:
									guib=13999;
									break;
								case 0:
									goto guitar;

								default:
									textcolor(RED);
									cprintf("OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....");
									getch();
									goto bass;
							}
							b=1;

							goto purchase;
						}
						case 3:
						{
							classical:;

							textcolor(BROWN);
							clrscr();
							cout<<"\n\t\t\t========================";
							cout<<"\n\t\t\t||  CLASSICAL GUITAR  ||";
							cout<<"\n\t\t\t========================\n";
							cout<<"     **********************************************************************\n";
							cout<<"     *--------------------------------------------------------------------*\n";
							cout<<"     *|           ITEMS                                    RATE          |*\n";
							cout<<"     *| %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% |*\n";
							cout<<"     *|       1. YAMAHA C4OM                                7999/-       |*\n";
							cout<<"     *|       2. VAULT EC397OSK                            16999/-       |*\n";
							cout<<"     *|       3. ALVAREZ RC26                              16999/-       |*\n";
							cout<<"     *|       4. CORT AC250CF                              27999/-       |*\n";
							cout<<"     *|       5. FENDER ECS80 NS                           13599/-       |*\n";
							cout<<"     *|       6. ORTEGA R122SN                            14999/-        |*\n";
							cout<<"     *--------------------------------------------------------------------*\n";
							cout<<"     **********************************************************************\n";
							cout<<"\n\nEnter your choice :\t";
							cin>>cgui;
							switch(cgui)
							{
								case 1:
									guic=7999;
									break;
								case 2:
									guic=16999;
									break;
								case 3:
									guic=16999;
									break;
								case 4:
									guic=27999;
									break;
								case 5:
									guic=13599;
									break;
								case 6:
									guic=14999;
									break;
								case 0:
									goto guitar;

								default:
									textcolor(RED);
									cprintf("OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....");
									getch();
									goto classical;
							}
							c=1;

							goto purchase;
						}
						case 4:
						{
							electric:;

							textcolor(BROWN);
							clrscr();
							cout<<"\n\t\t\t=========================";
							cout<<"\n\t\t\t||  ELECTRIC GUITAR  ||";
							cout<<"\n\t\t\t=========================\n";
							cout<<"     **********************************************************************\n";
							cout<<"     *--------------------------------------------------------------------*\n";
							cout<<"     *|           ITEMS                                    RATE          |*\n";
							cout<<"     *| %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% |*\n";
							cout<<"     *|       1. VAULT ST1                                  7999/-       |*\n";
							cout<<"     *|       2. FRENDER SQUIER MMSTRATOCASTER             11999/-       |*\n";
							cout<<"     *|       3. CORT X100                                 14999/-       |*\n";
							cout<<"     *|       4. ESP LTD EC 256FM                          33999/-       |*\n";
							cout<<"     *|       5. IBANEZ SA260FM                            31999/-       |*\n";
							cout<<"     *|       6. JACKSON JS12                              19999/-       |*\n";
							cout<<"     *--------------------------------------------------------------------*\n";
							cout<<"     **********************************************************************\n";
							cout<<"\n\nEnter your choice :\t";
							cin>>egui;
							switch(egui)
							{
								case 1:
									guie=7999;
									break;
								case 2:
									guie=11999;
									break;
								case 3:
									guie=14999;
									break;
								case 4:
									guie=33999;
									break;
								case 5:
									guie=31999;
									break;
								case 6:
									guie=19999;
									break;
								case 0:
									goto guitar;

								default:
									cout<<"OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....";
									getch();
									goto electric;
							}
							d=1;

							goto purchase;
						}
						case 0:
							goto list;

						default:
							textcolor(RED);
							cout<<"OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....";
							getch();
							goto guitar;

					}
				}
				case 2:
				{
						keyboard:;

						textcolor(BROWN);
						clrscr();
						cout<<"\n\t\t\t================";
						cout<<"\n\t\t\t||  KEYBOARD  ||";
						cout<<"\n\t\t\t================\n";
						cout<<"     **********************************************************************\n";
						cout<<"     *--------------------------------------------------------------------*\n";
						cout<<"     *|           ITEMS                                    RATE          |*\n";
						cout<<"     *| %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% |*\n";
						cout<<"     *|       1. CASIO CTK 2550                             7599/-       |*\n";
						cout<<"     *|       2. CASIO SA 78                                3499/-       |*\n";
						cout<<"     *|       3. CASIO CTK 3500                             9999/-       |*\n";
						cout<<"     *|       4. YAMAHA PSR F 51                           10999/-       |*\n";
						cout<<"     *|       5. YAMAHA PSS F30                             4999/-       |*\n";
						cout<<"     *|       6. TRINITY PA 51X                             4999/-       |*\n";
						cout<<"     *--------------------------------------------------------------------*\n";
						cout<<"     **********************************************************************\n";
						cout<<"\n\nEnter your choice :\t";
						cin>>keybo;
						switch(keybo)
						{
							case 1:
								keyb=7599;
								break;
							case 2:
								keyb=3499;
								break;
							case 3:
								keyb=9999;
								break;
							case 4:
								keyb=10999;
								break;
							case 5:
								keyb=4999;
								break;
							case 6:
								keyb=4999;
								break;
							case 0:
								goto list;

							default:
								textcolor(RED);
								cprintf("OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....");
								getch();
								goto keyboard;
						}
						e=1;

						goto purchase;
					}
				case 3:
				{
						tabla:;

						textcolor(BROWN);
						clrscr();
						cout<<"\n\t\t\t=============";
						cout<<"\n\t\t\t||  TABLA  ||";
						cout<<"\n\t\t\t=============\n";
						cout<<"     **********************************************************************\n";
						cout<<"     *--------------------------------------------------------------------*\n";
						cout<<"     *|           ITEMS                                    RATE          |*\n";
						cout<<"     *| %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% |*\n";
						cout<<"     *|       1. AKSHAR TABLA MART                          5999/-       |*\n";
						cout<<"     *|       2. R R MUSICAL TABLA                          3499/-       |*\n";
						cout<<"     *|       3. SG MUSICAL TABLA                           4999/-       |*\n";
						cout<<"     *|       4. DEV MUSICAL TABLA                         10999/-       |*\n";
						cout<<"     *|       5. BABA SURJAN SINGH TABLA                    3999/-       |*\n";
						cout<<"     *--------------------------------------------------------------------*\n";
						cout<<"     **********************************************************************\n";
						cout<<"\n\nEnter your choice :\t";
						cin>>tab;
						switch(tab)
						{
							case 1:
								tabl=5999;
								break;
							case 2:
								tabl=3499;
								break;
							case 3:
								tabl=4999;
								break;
							case 4:
								tabl=10999;
								break;
							case 5:
								tabl=3999;
								break;
							case 0:
								goto list;

							default:
								textcolor(RED);
								cprintf("OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....");
								getch();
								goto tabla;
						}
						f=1;

						goto purchase;
					}
				case 4:
				{
						harmonium:;

						textcolor(BROWN);
						clrscr();
						cout<<"\n\t\t\t=================";
						cout<<"\n\t\t\t||  HARMONIUM  ||";
						cout<<"\n\t\t\t=================\n";
						cout<<"     **********************************************************************\n";
						cout<<"     *--------------------------------------------------------------------*\n";
						cout<<"     *|           ITEMS                                    RATE          |*\n";
						cout<<"     *| %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% |*\n";
						cout<<"     *|       1. JV MUSICALS HAR003 HARMONIUM               7599/-       |*\n";
						cout<<"     *|       2. RAJA HAR_1 440 HARMONIUM                   6999/-       |*\n";
						cout<<"     *|       3. MMB 9 STOPPER  HARMONIUM                  18599/-       |*\n";
						cout<<"     *|       4. JSR SH1297 HARMONIUM                       9999/-       |*\n";
						cout<<"     *|       5. PAL MUSIC HOUSE HARMONIUM                 18599/-       |*\n";
						cout<<"     *--------------------------------------------------------------------*\n";
						cout<<"     **********************************************************************\n";
						cout<<"\n\nEnter your choice :\t";
						cin>>har;
						switch(har)
						{
							case 1:
								harm=7599;
								break;
							case 2:
								harm=6999;
								break;
							case 3:
								harm=18599;
								break;
							case 4:
								harm=9999;
								break;
							case 5:
								harm=18599;
								break;
							case 0:
								goto list;

							default:
								textcolor(RED);
								cprintf("OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....");
								getch();
								goto harmonium;
						}
						g=1;

						goto purchase;
					}
				case 5:
				{
						ukulele:;

						textcolor(BROWN);
						clrscr();
						cout<<"\n\t\t\t===============";
						cout<<"\n\t\t\t||  UKULELE  ||";
						cout<<"\n\t\t\t===============\n";
						cout<<"     **********************************************************************\n";
						cout<<"     *--------------------------------------------------------------------*\n";
						cout<<"     *|           ITEMS                                    RATE          |*\n";
						cout<<"     *| %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% |*\n";
						cout<<"     *|       1. KADENCE CONCERT UKULELE                    3599/-       |*\n";
						cout<<"     *|       2. HERTZ SOPRANO UKULELE                      4599/-       |*\n";
						cout<<"     *|       3. ZABEL ZBL U21 BRN SOPRANO UKULELE          2499/-       |*\n";
						cout<<"     *|       4. PLUSE SOPRANO UKULELE                      3999/-       |*\n";
						cout<<"     *--------------------------------------------------------------------*\n";
						cout<<"     **********************************************************************\n";
						cout<<"\n\nEnter your choice :\t";
						cin>>uku;
						switch(uku)
						{
							case 1:
								ukul=3599;
								break;
							case 2:
								ukul=4599;
								break;
							case 3:
								ukul=2499;
								break;
							case 4:
								ukul=3999;
								break;
							case 0:
								goto list;

							default:
								textcolor(RED);
								cprintf("OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....");
								getch();
								goto ukulele;
						}
						h=1;

						goto purchase;
					}
				case 6:
				{
						trumpet:;

						textcolor(BROWN);
						clrscr();
						cout<<"\n\t\t\t===============";
						cout<<"\n\t\t\t||  TRUMPET  ||";
						cout<<"\n\t\t\t===============\n";
						cout<<"     **********************************************************************\n";
						cout<<"     *--------------------------------------------------------------------*\n";
						cout<<"     *|           ITEMS                                    RATE          |*\n";
						cout<<"     *| %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% |*\n";
						cout<<"     *|       1. NASIR ALI NACIT BB TRUMPET                 3599/-       |*\n";
						cout<<"     *|       2. KANHA HUB BB TRUMPET                       3599/-       |*\n";
						cout<<"     *|       3. JAIBHARAT MUSICAL BB TRUMPET               4999/-       |*\n";
						cout<<"     *|       4. SEIMENTO STR 54512 PRO                     5999/-       |*\n";
						cout<<"     *--------------------------------------------------------------------*\n";
						cout<<"     **********************************************************************\n";
						cout<<"\n\nEnter your choice :\t";
						cin>>tru;
						switch(tru)
						{
							case 1:
								trum=3599;
								break;
							case 2:
								trum=3599;
								break;
							case 3:
								trum=4999;
								break;
							case 4:
								trum=5999;
								break;
							case 0:
								goto list;

							default:
								textcolor(RED);
								cprintf("OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....");
								getch();
								goto trumpet;
						}
						l=1;

						goto purchase;
					}
				case 7:
				{
						sexophone:;
						textcolor(BROWN);
						clrscr();
						cout<<"\n\t\t\t=================";
						cout<<"\n\t\t\t||  SEXOPHONE  ||";
						cout<<"\n\t\t\t=================\n";
						cout<<"     **********************************************************************\n";
						cout<<"     *--------------------------------------------------------------------*\n";
						cout<<"     *|           ITEMS                                    RATE          |*\n";
						cout<<"     *| %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% |*\n";
						cout<<"     *|       1. KADENCE KXC KAD SAX KCX SEXOPHONE         41999/-       |*\n";
						cout<<"     *|       2. SEIMENTO TUNED STR 00714258 SEXOPHONE     11999/-       |*\n";
						cout<<"     *|       3. RAGHAV ASSOCIATES ALTO SEXOPHONE           9999/-       |*\n";
						cout<<"     *|       4. INFINITY ALTO LS S01 SEXOPHONE            39999/-       |*\n";
						cout<<"     *|       5. ROLAND AE 10 DIGITAL SEXOPHONE            82999/-       |*\n";
						cout<<"     *--------------------------------------------------------------------*\n";
						cout<<"     **********************************************************************\n";
						cout<<"\n\nEnter your choice :\t";
						cin>>sexo;
						switch(sexo)
						{
							case 1:
								sexop=41999;
								break;
							case 2:
								sexop=11999;
								break;
							case 3:
								sexop=9999;
								break;
							case 4:
								sexop=39999;
								break;
							case 5:
								sexop=82999;
								break;
							case 0:
								goto list;

							default:
								textcolor(RED);
								cprintf("OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....");
								getch();
								goto sexophone;
						}
						j=1;

						goto purchase;
					}
				case 0:
					goto choices;

				default:
					textcolor(RED);
					cprintf("OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....");
					getch();
					goto list;
			}
		}
		else
			goto choices;

		purchase:;
		textcolor(RED);
		cout<<"\n\tDO you want to purchase more(y/n)";
		cin>>yes;
		if(yes=='y')
		{
			clrscr();
			goto list;
		}
		else
		{
			clrscr();
			goto cash;
		}


		cash:;
		clrscr();
		textcolor(RED);
		cout<<"\n\n\t\t\t\t MELODY MUSICAL STORE\n";
		cout<<"\n\t\t\t\t    CASH MEMO\n";
		cout<<"\n";

	//TO DISPLAY THE CASH MEMO
		add=a+b+c+d+e+f+g+h+j+l;
		sum=guia+guib+guic+guie+keyb+tabl+harm+ukul+trum+sexop;


		textcolor(RED);
		cout<<"\n";
		cout<<"===============================================================================";
		cout<<"\nITEMS"            <<setw(40)<<"QUANTITY"<<setw(35)<<"PRICE(Rs.)";
		cout<<"===============================================================================";
		if(a>0)
		cout<<"\n\nGUITAR (A)"          <<setw(33)<<a<<setw(28)<<"Rs."<<guia;
		if(b>0)
		cout<<"\n\nGUITAR (B)"          <<setw(33)<<b<<setw(28)<<"Rs."<<guib;
		if(c>0)
		cout<<"\n\nGUITAR (C)"          <<setw(33)<<c<<setw(28)<<"Rs."<<guic;
		if(d>0)
		cout<<"\n\nGUITAR (E)"          <<setw(33)<<d<<setw(28)<<"Rs."<<guie;
		if(e>0)
		cout<<"\n\nKEYBOARD"            <<setw(35)<<e<<setw(28)<<"Rs."<<keyb;
		if(f>0)
		cout<<"\n\TABLA"                <<setw(38)<<f<<setw(28)<<"Rs."<<tabl;
		if(g>0)
		cout<<"\n\nHARMONIUM"           <<setw(34)<<g<<setw(28)<<"Rs."<<harm;
		if(h>0)
		cout<<"\n\nUKULELE"             <<setw(36)<<h<<setw(28)<<"Rs."<<ukul;
		if(l>0)
		cout<<"\n\nTRUMPET"             <<setw(36)<<l<<setw(28)<<"Rs."<<trum;
		if(j>0)
		cout<<"\n\nSEXOPHONE"           <<setw(34)<<j<<setw(28)<<"Rs."<<sexop;
		cout<<"\n===============================================================================";
		cout<<"\nTOTAL:"<<setw(38)<<add<<setw(27)<<"Rs."<<sum;

		m-=a;
		a=0;
		n-=b;
		b=0;
		o-=c;
		c=0;
		p-=d;
		d=0;
		q-=e;
		e=0;
		r-=f;
		f=0;
		s-=g;
		g=0;
		t-=h;
		h=0;
		v-=j;
		j=0;
		u-=l;
		l=0;
		sum=0;
		add=0;
		textcolor(RED);


		cout<<"\n\n\t";
		cprintf("THANK YOU .                    VISIT US AGAIN");
		cout<<"\n\n\n\t";
		cprintf("THANK YOU FOR USING OUR SERVICE");
		cout<<"\n\n";
		getch();
		goto choices;

	}
     case 2:
	 {
		textcolor(RED);
		char found;
		clrscr();
		found=search();
		getch();
		if(found=='n')
		{
		goto choices;
		}
		else
		{
		cout<<"\n\nDO YOU WANT TO PURCHASE ANYTHING (Y/N) :  ";
		 cin>>opt;
		 if(opt=='y'||opt=='Y')
	    {
			goto list;
		}
		else
			goto exi;

	 }
	 }
     case 3:
		//TO SEARCH THE RECORDS

		clrscr();
		search();
		getch();
		goto choices;

     case 4:
		//TO DELETE THE RECORDS

		clrscr();
		del();
		getch();
		goto choices;

	 case 5:

		//TO MODIFY THE RECORDS

		clrscr();
		update();
		getch();
		goto choices;

	 case 6:

		//TO DISPLAY THE QUANTITY AVAILABLE IN THE SHOP
		textcolor(BROWN);
		clrscr();
		cout<<"\n\t\t\tItems Avaliable in shop.\n\n\n";
		cout<<"===============================================================================";
		cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
		cout<<"\n===============================================================================";
		cout<<"\n\nGUITAR (ACOUSTIC)"            <<setw(28)<<m;
		cout<<"\n\nGUITAR (BASS)"                <<setw(32)<<n;
		cout<<"\n\nGUITAR (CLASSICAL)"           <<setw(27)<<o;
		cout<<"\n\nGUITAR (ELECTRICAL)"          <<setw(26)<<p;
		textcolor(BROWN);
		cout<<"\n\nKEYBOARD"                     <<setw(37)<<q;
		cout<<"\n\nTABLA"                        <<setw(40)<<r;
		cout<<"\n\nHARMONIUM"                    <<setw(36)<<s;
		cout<<"\n\nUKULELE"                      <<setw(38)<<t;
		cout<<"\n\nTRUMPET"                      <<setw(38)<<u;
		cout<<"\n\nSEXOPHONE"                    <<setw(36)<<v;
		cout<<"\n*******************************************************************************";
		getch();
		goto choices;


     case 0:

		//TO EXIT FROM THE PROGRAM
		exi:
		textcolor(RED);
		clrscr();
		cout<<"\n\n\n\t\tARE YOU SURE TO EXIT FROM THE PROGRAM\t";
		cin>>et;
		if(et=='y')
		{
			goto ex;
		}
		else
		{
			goto choices;
		}
		ex:;
		clrscr();
		textcolor(RED);
		sleep(1);
		clrscr();
		gotoxy(35,10);
		cout<<" THANKS ";
		sleep(1);
		clrscr();
		gotoxy(35,20);
		cout<<" THANKS ";
		sleep(1);
		clrscr();
		gotoxy(28,30);
		cout<<" THANK YOU FOR USING THE PROJECT\n\n\n\n ";
		gotoxy(35,35);
		textcolor(GREEN+BLINK);
		gotoxy(35,25);
		textcolor(RED+YELLOW);
		delay(1000);
		cputs("HAVE A NICE DAY");
		gotoxy(45,45);
		textcolor(YELLOW+BLINK);
		cputs("Press ENTER to EXIT.......");
		getch();
		exit(0);

      default:

		textcolor(RED);
		cprintf("OPS!!! WRONG INPUT \nPLEASE CHOOSE AGAIN.....");
		getch();
		goto choices;

     }
}


