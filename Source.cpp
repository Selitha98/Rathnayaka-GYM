#include <iostream>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <string>
#include <iomanip>

using namespace std;

struct Item                                     //create structure for fitness packages and food items
{
	string ServiceName;
	string ServiceCode;
	float Price;
}
Items[15];                              //struct array for items

struct Bill {                           //create structure for bill
	string ServiceName;
	string ServiceCode;
	float Price;
	int Total;
	int quantity;

};

void companyName()                   //Company Name
{

	cout << "\t\t*---------------------------------------------*" << endl;
	cout << "\t\t|          Rathnayaka Gym (PVT) LTD           |" << endl;
	cout << "\t\t|   Kaduwela, Kottawa, Malabe, Avissawella    |" << endl;
	cout << "\t\t|     TP: 011 2 43 43 43 / 077 2 43 43 43     |" << endl;
	cout << "\t\t*---------------------------------------------*" << endl;
	cout << "********************************************************************************" << endl;


};

void AdminMenu();								    	//Function definition for admin menu
void AdminExit();								 	//Function definition for admin exit
void AdminViewItem();							 	//Function definition for admin view item
void AfitnessD();								  	//Function definition for view fitness packges details in Admin view items
void AfoodD();									 	//Function definition for view food supplement details in Admin view items
void CfitnessD();						 	//Function definition for view fitness packges details in Cashier view items
void CfoodD();						          //Function definition for view food supplement details in Admin view items
void ItemList();				          //Funtion declaration for the items of the store
void AAboutUs();				      		//Funtion declaration for the About us in Admin menu
void CashierMenu();					     		//Funtion declaration for Cashier menu
void PrintBill();					    	//Funtion declaration for print bill
void CashierExit();					  		//Funtion declaration for the Cashier Exit
void CashierViewItem();			 		 //Funtion declaration for view item in cashier menu
void CAboutUs();                       //Funtion declaration for the About us in Cashier menu




int main() {

	companyName();                  // Calling company name function for company logo

	string _username;	    //user name
	int _password;		  //Password


	cout << "\t\t Enter Your User Name \t\t:";
	cin >> _username;							  //Reading entered usename
	cout << "\t\t Enter Your User password \t:";
	cin >> _password;               //Reading Entered password



	if (_username == "Admin" &&  _password == 1212)                 // Login as Administrator

	{
		cout << "\n\t\tYou Successfully Log-in As an Administartor" << endl;
		AdminMenu();

	}
	else if (_username == "Anne" && _password == 1313)               //Login as Cashier
	{
		cout << "\t\tYou Successfully Log-in As a Member" << endl;
		CashierMenu();
	}
	else

	{

		cout << "\t\t You Entered User Name or Password Wronged." << endl;
		cout << "\t\t Please Try Again!" << endl;

	}



	system("pause");

	return 0;


}

void AddItem()
{

};

void AfitnessD()         //Fitness Package Details for Admin view items
{
	system("cls");                        // clear the command
	companyName();        // Calling campany logo function
	int optn;		 // variable for selection
	cout << " \n\n \t\t\t * Fitness Packages Details * \n";            //fitness package details
	cout << " \n\n -------------------------------------------------------------------------\n";
	cout << "  | Package ID  | Package Name        | Membership Rate| Introductory Rate|\n";
	cout << "  -------------------------------------------------------------------------\n\n";
	cout << "  | PKGDT001    | DAY WORKOUT         | Rs. 1,500.00   | Rs. 1,500.00     |\n\n";
	cout << "  | PKGDT002    | EXECUTIVE MEM(FULL) | Rs. 5,500.00   | Rs. 5,500.00     |\n\n";
	cout << "  | PKGDT003    | 1 MONTH MEMBERSHIP  | Rs. 3,000.00   | Rs. 3,000.00     |\n\n";
	cout << "  | PKGDT004    | MASTERS MEMBERSHIP  | Rs. 5,000.00   | Rs. 5,000.00     |\n\n";
	cout << "  |             |    OVER 60 Yrs      |                |                  |\n\n";
	cout << "  | PKGDT005    | NON - PEAK EXECUTIVE| Rs. 3,300.00   | Rs. 3,300.00     |\n\n";
	cout << "  -------------------------------------------------------------------------\n\n";

	cout << "\t\t 1.Go Back\n\n";   //go back to admin menu
	cout << "\t\t 2.Exit\n\n";   // exit program
	cout << "\t\t Select :";    // select options
	cin >> optn;

	switch (optn)
	{
	case 1:
		AdminViewItem();   //calling admin view item function
		break;
	case 2:
		AdminExit();        //calling admin exit function
		break;
	default:
		cout << "Please Select Only 1-2 Options\n";
		AdminViewItem();
		break;
	};



};



void AfoodD()      // view food supplement in admin menu
{

	system("cls");
	companyName();
	int opton;             // variable for selection
	cout << " \n\n \t\t\t * Food Supplement Details * \n";		  	//food supplement details in admin section
	cout << "\n\n-------------------------------------------------------------------------\n";
	cout << "    |   Item Code   |        Item Name                     | Price          |\n";
	cout << "    -------------------------------------------------------------------------\n\n";
	cout << "    | ITMP001       | PLATINUM 100% CREATINE               | Rs. 1,500.00   |\n\n";
	cout << "    | ITMP002       | BEAST AMINOLYTES                     | Rs. 5,500.00   |\n\n";
	cout << "    | ITMP003       | BEAST SUPER SAUNA                    | Rs. 3,000.00   |\n\n";
	cout << "    | ITMP004       | ON FISH OIL (100 SOFT-GELS)          | Rs. 5,000.00   |\n\n";
	cout << "    | ITMP005       | CREATINE 5000 (60 SERVINGS)          | Rs. 3,300.00   |\n\n";
	cout << "    | ITMP006       | D-STUNNER ALPHA 30 SERVINGS          | Rs. 3,300.00   |\n\n";
	cout << "    | ITMP007       | GOLD STANDARD GAINER 10LBS           | Rs. 3,300.00   |\n\n";
	cout << "    -------------------------------------------------------------------------\n\n";

	cout << "\t\t 1.Go Back\n\n";
	cout << "\t\t 2.Exit\n\n";
	cout << "\t\t Select :";
	cin >> opton;

	switch (opton)
	{
	case 1:
		AdminViewItem();
		break;
	case 2:
		AdminExit();
		break;
	default:
		cout << "Please Select Only 1-2 Options\n";
		AfitnessD();
		break;
	};



};

void CfitnessD()      //view fitness package details in cashier menu
{
	system("cls");
	companyName();
	int optt;    // variable for selection
	cout << " \n\n \t\t\t * Fitness Packages Details * \n";         //fitness package details
	cout << " \n\n -------------------------------------------------------------------------\n";
	cout << "  | Package ID  | Package Name        | Membership Rate| Introductory Rate|\n";
	cout << "  -------------------------------------------------------------------------\n\n";
	cout << "  | PKGDT001    | DAY WORKOUT         | Rs. 1,500.00   | Rs. 1,500.00     |\n\n";
	cout << "  | PKGDT002    | EXECUTIVE MEM(FULL) | Rs. 5,500.00   | Rs. 5,500.00     |\n\n";
	cout << "  | PKGDT003    | 1 MONTH MEMBERSHIP  | Rs. 3,000.00   | Rs. 3,000.00     |\n\n";
	cout << "  | PKGDT004    | MASTERS MEMBERSHIP  | Rs. 5,000.00   | Rs. 5,000.00     |\n\n";
	cout << "  |             |    OVER 60 Yrs      |                |                  |\n\n";
	cout << "  | PKGDT005    | NON - PEAK EXECUTIVE| Rs. 3,300.00   | Rs. 3,300.00     |\n\n";
	cout << "  -------------------------------------------------------------------------\n\n";

	cout << "\t\t 1.Go Back\n\n";
	cout << "\t\t 2.Exit\n\n";
	cout << "\t\t Select :";
	cin >> optt;

	switch (optt)
	{
	case 1:
		CashierViewItem();    // calling cashier view item function
		break;
	case 2:
		CashierExit();     //calling cashier exit function
		break;
	default:
		cout << "Please Select Only 1-2 Options\n";
		CashierViewItem();
		break;
	};



};



void CfoodD()				   	//view food supplement details in cahsier menu
{

	system("cls");
	companyName();
	int opptn;    // variable for selection
	cout << " \n\n \t\t\t * Food Supplement Details * \n";		  	//food supplemt details
	cout << "\n\n-------------------------------------------------------------------------\n";
	cout << "    |   Item Code   |        Item Name                     | Price          |\n";
	cout << "    -------------------------------------------------------------------------\n\n";
	cout << "    | ITMP001       | PLATINUM 100% CREATINE               | Rs. 1,500.00   |\n\n";
	cout << "    | ITMP002       | BEAST AMINOLYTES                     | Rs. 5,500.00   |\n\n";
	cout << "    | ITMP003       | BEAST SUPER SAUNA                    | Rs. 3,000.00   |\n\n";
	cout << "    | ITMP004       | ON FISH OIL (100 SOFT-GELS)          | Rs. 5,000.00   |\n\n";
	cout << "    | ITMP005       | CREATINE 5000 (60 SERVINGS)          | Rs. 3,300.00   |\n\n";
	cout << "    | ITMP006       | D-STUNNER ALPHA 30 SERVINGS          | Rs. 3,300.00   |\n\n";
	cout << "    | ITMP007       | GOLD STANDARD GAINER 10LBS           | Rs. 3,300.00   |\n\n";
	cout << "    -------------------------------------------------------------------------\n\n";

	cout << "\t\t 1.Go Back\n\n";    //option fo go back cashier menu
	cout << "\t\t 2.Exit\n\n";      //option for exit the program
	cout << "\t\t Select :";     //option for select option
	cin >> opptn;

	switch (opptn)
	{
	case 1:
		CashierViewItem();     //calling chasier view item function for cahsier view item menu
		break;
	case 2:
		CashierExit();			  //calling cashier exit function for exit the program
		break;
	default:
		cout << "Please Select Only 1-2 Options\n";
		CfitnessD();
		break;
	};



};




void AAboutUs()					  	//about us function for admin menu
{
	system("cls");
	companyName();
	int optns;   // variable for selection

	cout << "\t\t\t Rathnayaka Gym (Pvt) LTD\n\n ";											   //about us details of rathnayaka gym
	cout << "    Rathnayaka GYMS is a fitness center which has been grown rapidly \n";
	cout << "     throughout the country.We provide a quality healthcare service \n";
	cout << "     and give our members control over our health is paramount at all \n";
	cout << "     Rathnayaka GYMS. We help members prevent and overcome degenerative  \n";
	cout << "     diseases, achieve their optimum fitness goals, realize personal \n";
	cout << "     lifestyle development objectives and rehabilitate them into good \n";
	cout << "     health. This is accomplished by designing exercise programs which \n";
	cout << "     are effective, efficient and motivational. All of these healthcare \n";
	cout << "     services are being. delivered by a team of well trained, committed \n";
	cout << "     and passionate professionals, whilst being managed and guided by some \n";
	cout << "     of the most qualified and respected experts of the healthcare and   \n";
	cout << "     fitness industry. They have a strong chain of branches which located  \n";
	cout << "     in Kaduwela, Kottawa, Malabe, and Avissawella. \n";
	cout << "             \n";
	cout << "            \n";
	cout << "     Contact Details : 011 2 43 43 43  \n";				  //contact details
	cout << "                       077 2 43 43 43 \n\n";


	cout << "\t\t 1.Go Back\n\n";      // option for go back admin menu
	cout << "\t\t 2.Exit\n\n";
	cout << "\t\t Select :";
	cin >> optns;

	switch (optns)
	{
	case 1:
		AdminMenu();
		break;
	case 2:
		AdminExit();
		break;
	default:
		cout << "Please Select Only 1-2 Options\n";
		AAboutUs();
		break;
	};



};

void CAboutUs()				  //about us for cashier menu
{
	system("cls");
	companyName();
	int optnss;    // variable for selection

	cout << "\t\t\t Rathnayaka Gym (Pvt) LTD\n\n ";									  	//about us details of rathnayaka gym
	cout << "    Rathnayaka GYMS is a fitness center which has been grown rapidly \n";
	cout << "     throughout the country.We provide a quality healthcare service \n";
	cout << "     and give our members control over our health is paramount at all \n";
	cout << "     Rathnayaka GYMS. We help members prevent and overcome degenerative  \n";
	cout << "     diseases, achieve their optimum fitness goals, realize personal \n";
	cout << "     lifestyle development objectives and rehabilitate them into good \n";
	cout << "     health. This is accomplished by designing exercise programs which \n";
	cout << "     are effective, efficient and motivational. All of these healthcare \n";
	cout << "     services are being. delivered by a team of well trained, committed \n";
	cout << "     and passionate professionals, whilst being managed and guided by some \n";
	cout << "     of the most qualified and respected experts of the healthcare and   \n";
	cout << "     fitness industry. They have a strong chain of branches which located  \n";
	cout << "     in Kaduwela, Kottawa, Malabe, and Avissawella. \n";
	cout << "             \n";
	cout << "            \n";
	cout << "     Contact Details : 011 2 43 43 43  \n";    //contact details
	cout << "                       077 2 43 43 43 \n\n";


	cout << "\t\t 1.Go Back\n\n";
	cout << "\t\t 2.Exit\n\n";
	cout << "\t\t Select :";
	cin >> optnss;

	switch (optnss)
	{
	case 1:
		CashierMenu();
		break;
	case 2:
		CashierExit();
		break;
	default:
		cout << "Please Select Only 1-2 Options\n";
		CAboutUs();
		break;
	};



};


void AdminExit()      //admin exit option

{
	system("cls");
	companyName();
	string optnn;		  // variable for selection
	cout << "\t\t\t  CONFIRM, DO YOU WANT TO EXIT	" << endl;
	cout << "\t\t\t         [ YES / NO ]  		" << endl;
	cout << "\t\t\t [ ENTER Y FOR YES OR N FOR N ]   " << endl;
	cin >> optnn;

	if (optnn == "y" || optnn == "Y")    // if selection y program will  exit completely
	{

		exit(0);


	}
	else if (optnn == "n" || optnn == "N")   // if selection n program will go to admin menu.
	{
		system("cls");  // clear commands
		AdminMenu();
	}
	else
	{
		cout << "\n\t\t\t\t\t   --------   ENTER Y OR N  ONLY   --------   \n" << endl;     // prints error message.
		AdminExit();
	}


};


void CashierExit()

{
	system("cls");
	companyName();
	string opttonn;     // variable for selection
	cout << "\t\t\t  CONFIRM, DO YOU WANT TO EXIT	" << endl;
	cout << "\t\t\t         [ YES / NO ]  		" << endl;
	cout << "\t\t\t [ ENTER Y FOR YES OR N FOR N ]   " << endl;
	cin >> opttonn;

	if (opttonn == "y" || opttonn == "Y")    // if selection y program will  exit completely
	{

		exit(0);


	}
	else if (opttonn == "n" || opttonn == "N")   // if selection n program will go to admin menu.
	{
		system("cls");   // clear commands
		CashierMenu();
	}
	else
	{
		cout << "\n\t\t\t\t\t   --------   ENTER Y OR N  ONLY   --------   \n" << endl; // prints error message.
		CashierExit();
	}


};


void AdminMenu()     //admin menu
{
	int option;       // variable for selection
	system("cls");
	companyName();

	cout << "*---------------------You Are In Administrator Menu----------------------------*\n\n\n";
	cout << "\t\t\t  1. Add Items\n";      // add item to db
	cout << "\t\t\t  2. View Items\n";    //view item from the code
	cout << "\t\t\t  3. About Us\n";     //about us
	cout << "\t\t\t  4. Exit\n\n\n";    //exit the program
	cout << "\t\t\t  Select :";
	cin >> option;

	switch (option)

	{
	case 1:
		AddItem();
		AdminMenu();
		break;
	case 2:
		AdminViewItem();
		AdminMenu();
		break;
	case 3:
		AAboutUs();
		AdminMenu();
		break;
	case 4:
		AdminExit();
	default:
		cout << "Select Only 1-4 Options";
		AdminMenu();
		break;

	};

}

void AdminViewItem()     //admin view item menu
{
	system("cls");
	int opt;    // variable for selection
	companyName();

	cout << "\t\t 1.View Fitness Packages Details\n\n";       //View Fitness Packages Details in admin view item menu
	cout << "\t\t 2.View Food Supplement Details \n\n";    //View Food Supplement Details  in admin view item menu
	cout << "\t\t 3.Admin Menu \n\n";     //option for go back admin menu



	cout << "\n\t\t\t Select :";
	cin >> opt;

	switch (opt)
	{
	case 1:
		AfitnessD();
		break;

	case 2:
		AfoodD();
		AdminViewItem();
		break;
	case 3:
		AdminMenu();
		break;
	default:
		cout << "Please Select Only 1-3 Options\n";
		AdminViewItem();
		break;
	};


};

void CashierMenu()
{
	system("cls");
	companyName();
	int optin;      // variable for selection

	cout << "*--------------------------You Are In Cashier Menu-----------------------------*\n\n\n";
	cout << "\t\t\t  1. View Items\n";    //view item details from the code
	cout << "\t\t\t  2. Print Bill\n";    //print bill option
	cout << "\t\t\t  3. About Us\n";    //about us
	cout << "\t\t\t  4. Exit\n\n\n";    //exit the program
	cout << "\t\t\t  Select :";
	cin >> optin;

	switch (optin)

	{
	case 1:
		CashierViewItem();
		CashierMenu();
		break;
	case 2:
		PrintBill();
		CashierMenu();
		break;
	case 3:
		CAboutUs();
		CashierMenu();
		break;
	case 4:
		CashierExit();
	default:
		cout << "Select Only 1-4 Options";
		CashierMenu();
		break;

	};

}

void CashierViewItem()      //cashier view item menu
{

	system("cls");
	int oopt;       // variable for selection
	companyName();

	cout << "\t\t 1.View Fitness Packages Details\n\n";    //View Fitness Packages Details in cashier view item menu
	cout << "\t\t 2.View Food Supplement Details \n\n";    //View Fitness Packages Details in cashier view item menu
	cout << "\t\t 3.Cashier Menu \n\n";      //option for go back cashier menu



	cout << "\n\t\t\t Select :";
	cin >> oopt;

	switch (oopt)
	{
	case 1:
		CfitnessD();
		break;

	case 2:
		CfoodD();
		CashierViewItem();
		break;
	case 3:
		CashierMenu();
		break;
	default:
		cout << "Please Select Only 1-3 Options\n";
		CashierViewItem();
		break;
	};


};


void ItemList()                                    // added item list in the application
{
	Items[0].ServiceName = "DAY WORKOUT";
	Items[0].ServiceCode = "PKGDT001";
	Items[0].Price = 1500.00;

	Items[1].ServiceName = "EXECUTIVE MEM(FULL)";
	Items[1].ServiceCode = "PKGDT002";
	Items[1].Price = 5500.00;

	Items[2].ServiceName = "1 MONTH MEMBERSHIP";
	Items[2].ServiceCode = "PKGDT003";
	Items[2].Price = 3000.00;

	Items[3].ServiceName = "MASTERS MEMBERSHIP OVER 60 Yrs";
	Items[3].ServiceCode = "PKGDT004";
	Items[3].Price = 5000.00;

	Items[4].ServiceName = "NON-PEAK EXECUTIVE";
	Items[4].ServiceCode = "PKGDT005";
	Items[4].Price = 3300.00;

	Items[5].ServiceName = "PLATINUM 100% CREATINE";
	Items[5].ServiceCode = "ITMP001";
	Items[5].Price = 4000.00;

	Items[6].ServiceName = "BEAST AMINOLYTES";
	Items[6].ServiceCode = "ITMB002";
	Items[6].Price = 6000.00;

	Items[7].ServiceName = "BEAST SUPER SAUNA";
	Items[7].ServiceCode = "ITMB003";
	Items[7].Price = 6000.00;

	Items[8].ServiceName = "ON FISH OIL(100 SOFT-GELS)";
	Items[8].ServiceCode = "ITMF004";
	Items[8].Price = 3500.00;

	Items[9].ServiceName = "CREATINE 5000(60 SERVINGS)";
	Items[9].ServiceCode = "ITMC005";
	Items[9].Price = 3000.00;

	Items[10].ServiceName = "D-STUNNER ALPHA 30 SERVINGS";
	Items[10].ServiceCode = "ITMS006";
	Items[10].Price = 6500.00;

	Items[11].ServiceName = "GOLD STANDARD GAINER 10LBS";
	Items[11].ServiceCode = "ITMG007";
	Items[11].Price = 20000.00;

}

void PrintBill()
{
	system("cls");
	Bill Arr[15];     //Array to store selected Items
	int B1 = 0, items, Total, amount, discount, quantity, subtotal2 = 0, subtotal = 0, balance = 0;    // varialbe declaration for print bill
	string select, ItCode;
	ItemList();
	cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << "  BILL ITEMS " << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
	do {

		cout << "(15 Items can be added at once)" << endl;
		cout << "Number of Items Needed: ";     //geting quantity of the item
		cin >> items;
		if (items > 15) {
			cout << "\t\t\t\ ************************** Please enter less than 15 at once**************************\n" << endl;

		}
	} while (items > 15);
	cout << "" << endl;
	while (B1 < items) {
		bool itemValid = false;
		do {
			cout << "Enter Service Code:";
			cin >> ItCode;
			for (int b = 0; b < 15; b++) {
				if (ItCode == Items[b].ServiceCode) {
					itemValid = true;
				}
			}
			if (!itemValid)
			{
				cout << "Invalid Service Code" << endl;
			}

		} while (!itemValid);

		cout << "" << endl;

		for (int b = 0; b < 15; b++) {
			if (ItCode == Items[b].ServiceCode) {
				cout << "Service Name:" << Items[b].ServiceName << endl;
				cout << "Item Price:" << Items[b].Price << endl;
				Arr[b].ServiceCode = Items[b].ServiceCode;    //save selected item code
				Arr[b].ServiceName = Items[b].ServiceName;      //save selected item name
				Arr[b].Price = Items[b].Price;         //save selected item price
				cout << "" << endl;
				cout << "Enter Item Quantity-";
				cin >> quantity;
				cout << "***************************" << endl;
				Total = quantity*Items[b].Price;   //total sum=quantity of selected item ? price of the item
				subtotal = subtotal + Total;    //every bought item subtotal= Total of  every "total Sum"
				Arr[b].quantity = quantity;          //save quantity of the selected item
				Arr[b].Total = Total;           //save of sum of the selected item
			}

		}
		if (itemValid) {
			B1++;                //increase counter variable from 1 value
		}
	}
	if (subtotal > 5000)
	{
		discount = subtotal - (subtotal *0.5 / 100);
		subtotal2 = subtotal - discount;
		amount = subtotal - subtotal2;
	}
	else
	{
		subtotal2 = subtotal;
		discount = 0;
		amount = subtotal - subtotal2;
	}

	cout << "Total Amount- Rs" << subtotal << endl;    //Display Subtotal

	system("pause");

	system("cls");
	companyName();
	cout << "" << endl;
	cout << "******************************** Your Bill *************************************" << endl;
	for (int b = 0; b < 15; b++) {
		if (Arr[b].quantity >= 1) {
			cout << Arr[b].ServiceName << endl;
			cout << setw(16) << Arr[b].ServiceCode << setw(20) << "(" << Arr[b].Price << "x" << Arr[b].quantity << ")" << setw(32) << "Rs" << Arr[b].Total << endl;

		}
	}  //Printing the Bill
	cout << "********************************************************************************" << endl;
	cout << " TOTAL Amount" << setw(52) << " \t\tRs " << subtotal << endl;
	cout << " Discount Received " << setw(55) << "\tRs " << subtotal2 << endl;
	cout << "********************************************************************************" << endl;
	cout << "Total Due Amount" << setw(52) << "\t\tRs " << amount << endl;
	cout << "********************************************************************************" << endl;
	cout << "\t\t*************THANK YOU!COME AGAIN*************" << endl;
	cout << "" << endl;
	cout << "\tPlease note that food supplements, packages or equipments" << endl;
	cout << " \t\ttwill not be accepted as return or exchange." << endl;;
	cout << "" << endl;
	cout << "" << endl;
	cout << "********************************************************************************" << endl;
	cout << "********************************************************************************" << endl;
	cout << "" << endl;

};


