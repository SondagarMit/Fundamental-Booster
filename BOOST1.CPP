#include <iostream.h>
#include<conio.h>
class day
{
  public:
	  void setdata()
	  {
	    int dayNumber;

    cout << "Enter a day number (1-7): ";
    cin >> dayNumber;

    switch (dayNumber)
    {
	case 1:
	    cout << "Monday";
	    break;
	case 2:
	    cout << "Tuesday";
	    break;
	case 3:
	    cout << "Wednesday";
	    break;
	case 4:
	    cout << "Thursday";
	    break;
	case 5:
	    cout << "Friday";
	    break;
	case 6:
	    cout << "Saturday";
	    break;
	case 7:
	    cout << "Sunday";
	    break;
	default:
	    cout << "Invalid day number";
    }
	  }


};
void main()
{
 clrscr();

 day obj;
 obj.setdata();

 getch();
}
