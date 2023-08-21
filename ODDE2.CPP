#include<iostream.h>
#include<conio.h>
class Odd
{
  public:
	  void number()
	  {
	     int num;
	    cout << "Enter a number: ";
	    cin >> num;

	      if (num % 2 == 0) {
		cout << num << " is even.";
	     }
	      else
	      {
	      cout << num << " is odd.";
	      }

	  }


};

void main()
{
   clrscr();
   Odd obj;
   obj.number();


   getch();
}
