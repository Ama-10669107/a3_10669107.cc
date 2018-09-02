#include <iostream>
using namespace std;
int main()
{
	int mark;
	cout << "marks in examination" << endl;
	cin >> mark;
	if (mark >= 80)
	{
		cout << "Student's grade is A" << endl;
		cout << "Outstanding!" << endl;
	}
	else if (mark >= 75)
	{
		cout << "Student's grade is B+" << endl;
		cout << "Very Good!" << endl;
	}
	else if (mark >= 70)
	{
		cout << "Student's grade is B" << endl;
		cout << "Good!" << endl;
	}
	else if (mark >= 65)
	{
		cout << "Student's grade is C+" << endl;
		cout << "Fairly Good!" << endl;
	}
	else if (mark >= 60)
	{
		cout << "Student's grade is C" << endl;
		cout << "Average!" << endl;
	}
	else if (mark >=55)
	{
		cout << "Student's grade is D+" << endl;
		cout << "Below Average!" << endl;
	}
	else if (mark >= 50)
	{
		cout << "Student's grade is D" << endl;
		cout << "Marginal!" << endl;
	}
	else if (mark <=49)
	{
		cout << "Student's grade is F" << endl;
		cout << "Fail!" << endl;
	}
	return 0;
}
