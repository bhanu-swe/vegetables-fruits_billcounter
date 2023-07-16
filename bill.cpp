
#include <iostream>
#include <queue>
using namespace std;

int
main ()
{
  char name[30], veg1[] = "Tomato", veg2[] = "Potato", veg3[] =
    "Brinjal", veg4[] = "Onion", veg5[] = "Ladyfinger", veg6[] =
    "Bottle gourd", veg7[] = "Cabbage", veg8[] = "Carrot", veg9[] =
    "Beetroot", veg10[] = "Beans";

  char lveg1[] = "palak", lveg2[] = "meethi", lveg3[] = "kothir", lveg4[] =
    "kareepak", lveg5[] = "pudina";

  char fruit1[] = "apple", fruit2[] = "pineapple", fruit3[] =
    "water-melon", fruit4[] = "Banana", fruit5[] = "Grapes";

  int rate[] =
    { 40, 30, 60, 25, 80, 30, 40, 60, 60, 160, 10, 10, 5, 5, 5, 210, 300, 50,
50, 80 };


beginning:
  queue < pair < int, double >>q;
  int choice = 0;

  cout <<
    "\t\t\t----------Sri venkateswara Vegetables & Fruits -----------\n\n";

  cout << "Please enter your name: ";

  cin.getline (name, 20);

  cout << "Hello " << name << "\n\nWhat would you like to order?\n\n";

cbeginning:
  cout << "\t\t\t\t--------varities--------\n\n";

  cout << "1-Vegetables\n";

  cout << "2-Leafy_Vegetables\n";

  cout << "3-fruits\n";
  cout << "Please enter your choice: ";

  cin >> choice;

  if (choice == 1)
    {
    vbeginning:
      cout << "\t\t\t\t-----Vegetables list-----\n\n";
      cout << "\t\t\t\t-----prices per kg-----\n" << endl;
      cout << "\n1-" << veg1 << " - " << rate[0] << endl;
      cout << "2-" << veg2 << " - " << rate[1] << endl;
      cout << "3-" << veg3 << " - " << rate[2] << endl;
      cout << "4-" << veg4 << " - " << rate[3] << endl;
      cout << "5-" << veg5 << " - " << rate[4] << endl;
      cout << "6-" << veg6 << " - " << rate[5] << endl;
      cout << "7-" << veg7 << " - " << rate[6] << endl;
      cout << "8-" << veg8 << " - " << rate[7] << endl;
      cout << "9-" << veg9 << " - " << rate[8] << endl;
      cout << "10-" << veg10 << " - " << rate[9] << endl;

      bool add = true;

      while (add == true)
	{
	  int choicev = 0;
	  double quantityv = 0;

	  cout << "Please enter your choice : ";
	  cin >> choicev;
	  if (choicev < 0 or choicev > 10)
	    {
	      cout << "please enter proper choice";
	      goto vbeginning;
	    }
	  cout << "please enter the quantity (Ex: 1-kg, 250g-0.25) : ";
	  cin >> quantityv;
	  q.push (
		   {
		   choicev, quantityv}
	  );
	  cout << "if you want to order anything else in Vegetables";
	  char ans;
	  cin >> ans;

	  if (ans == 'N' or ans == 'n')
	    {
	      add = false;
	    }

	}

    }

  else if (choice == 2)
    {
    lbeginning:
      cout << "\t\t\t\t-----Leafy_Vegetables-----\n\n";
      cout << "\t\t\t\t-----prices are per item-----\n";
      cout << "\n11-" << lveg1 << " - " << rate[10] << endl;
      cout << "12-" << lveg2 << " - " << rate[11] << endl;
      cout << "13-" << lveg3 << " - " << rate[12] << endl;
      cout << "14-" << lveg4 << " - " << rate[13] << endl;
      cout << "15-" << lveg5 << " - " << rate[14] << endl;

      bool addl = true;
      while (addl == true)
	{
	  int choicel = 0;
	  double quantityl = 0;
	  cout << "Please enter your choice : ";
	  cin >> choicel;
	  cout << "please enter the quantity (Ex: 1-1pc,2-2pc) : ";
	  cin >> quantityl;
	  q.push (
		   {
		   choicel, quantityl});
	  cout << "if you want to order anything else in leafy_vegetables : ";
	  char ans;
	  cin >> ans;
	  if (ans == 'N' or ans == 'n')
	    {
	      addl = false;
	    }

	}
    }

  else if (choice == 3)
    {
    fbeginning:
      cout << "\t\t\t\t\t-----fruits list-----\n\n";
      cout << "\t\t\t\t\t-----prices are per kg-----\n";
      cout << "\n16-" << fruit1 << " - " << rate[15] << endl;
      cout << "17-" << fruit2 << " - " << rate[16] << endl;
      cout << "18-" << fruit3 << " - " << rate[17] << endl;
      cout << "19-" << fruit4 << " - " << rate[18] << endl;
      cout << "20-" << fruit5 << " - " << rate[19] << endl;


      bool add = true;

      while (add == true)
	{
	  int choicef = 0;
	  double quantityf = 0;
	  cout << "Please enter your choice : ";
	  cin >> choicef;
	  cout << "please enter the quantity (Ex: 1-kg, 250g-0.25)";
	  cin >> quantityf;
	  q.push (
		   {
		   choicef, quantityf});
	  cout <<
	    "if you want to order anything else in fruits (press 1-yes and 0-no : ";
	  char ans;
	  cin >> ans;
	  if (ans == 'N' or ans == 'n')
	    {
	      add = false;
	    }

	}

    }
  cout << " If you want to add anything  ";
  cout << " (please enter 1-yes and 0-no):";
  double total = 0;
  while (!q.empty ())
    {
      int item = q.front ().first;
      double quantity = q.front ().second;
      q.pop ();

      total = rate[item - 1] * quantity;

    }
  bool revise;
  cin >> revise;
  if (revise == true)
    {
      goto cbeginning;
    }
  //print the bill;
  cout << "Sri venkateswara fruits & vegetables" << endl;
  cout << "BILL" << endl;
  cout << name << endl;


  cout << "Toatal amount: " << total << endl;
  cout << " thank you vist again " << endl;
  return 0;


}
