#include<iostream.h>
#include<conio.h>
#include<string.h>
class Result
{
      public:
	       void result2()
	       {
		 int  studentName,i, marks[5];
		 float totalMarks = 0;

		 cout << "Enter marks for 5 subjects:" << "\n";
		  for (i = 0; i < 5; i++)
		 {
			cout << "Subject " << i + 1 << ": ";
			cin >> marks[i];
			totalMarks += marks[i];
		   }

		 float averageMarks = totalMarks / 5;

		    cout << "Marks for 5 subjects:" << "\n";
		    for (i = 0; i < 5; i++) {
			cout << "Subject " << i + 1 << ": " << marks[i] << "\n";
		   }
			cout << "Total Marks: " << totalMarks << "\n";
			cout << "Average Marks: " << averageMarks << "\n";

		       if (averageMarks >= 60) {
			cout << "Result: Passed (First Division)" << "\n";
			} else if (averageMarks >= 45) {
			cout << "Result: Passed (Second Division)" << "\n";
			  } else if (averageMarks >= 33) {
				cout << "Result: Passed (Third Division)" << "\n";
			   } else {
				cout << "Result: Failed" << "\n";
				}


	       }

};

void main()
{
 clrscr();

 Result obj;
 obj.result2();



 getch();

}

