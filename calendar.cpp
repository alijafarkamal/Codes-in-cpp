

#include<iostream>
#include<iomanip>
using namespace std;

void printmonth(int month) {

	if (month == 1) cout << "\t***January***";
	if (month == 2) cout << "\t***Febuary***";
	if (month == 3) cout << "\t***March***";
	if (month == 4) cout << "\t***April***";
	if (month == 5) cout << "\t***May***";
	if (month == 6) cout << "\t***June***";
	if (month == 7) cout << "\t***July***";
	if (month == 8) cout << "\t***August***";
	if (month == 9) cout << "\t***September***";
	if (month == 10) cout << "\t***October***";
	if (month == 11) cout << "\t***November***";
	if (month == 12) cout << "\t***December***";

}
int getnoofdaysinmonth(int mon, int yr) {
	int galaxy = 0;
	int ha = 0;
	if ((yr % 4 == 0 || yr % 400 == 0) && yr % 100 != 0) {
		ha = 1;
	}
	if (mon == 2 && ha == 1) {
		galaxy = 29;

	}
	if (mon == 2 && ha != 1) {
		galaxy = 28;
	}

	if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) {
		galaxy = 31;
	}
	if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
		galaxy = 30;
	}
	int result = 0;
	for (int j = 1; j <= galaxy; j++) {
		return j;
	}

}
int Calendar(int month, int y) {

	int day;
	int saal = y - 1;
	int al = saal * 365;
	int bl = saal / 4;
	int cl = saal / 100;
	int dl = (y / 400) + 1;
	int fl = al + bl - cl;
	int gl = fl + dl;
	day = gl % 7;
	
	static int leap_day = 28;


	int initial = 1;
	int end = 7 - day;
	static int count = 0;

	int penny = 0;
	int h = 0;

	if ((y % 4 == 0 || y % 400 == 0) && (y % 100 != 0)) {
		h = 1;
		leap_day = 29;
	}



	cout << "\n Su  Mo  Tu  We  Th  Fr  Sa\n";
	for (int i = 1; i <= 12; i++) {

		if (month == 1) {
			for (int j = initial; j <= end && j <= 31; j++) {
				if (j == 1) {
					for (int k = 1; k <= day; k++) {
						cout << "    ";

					}
				}
				cout << setw(3) << j << " ";

			}
			initial = end + 1;
			end = initial + 6;
			if (i < 8) {
				cout << endl;
			}

		}




		if (month == 2) {


			if (day == 0) {
				count = 4;
			}
			else if (day == 1)
			{
				count = 3;
			}
			else if (day == 2) {
				count = 2;
			}
			else if (day == 3) {
				count = 1;
			}
			else if (day == 4) {
				count = 7;
			}
			else if (day == 5)
			{
				count = 6;
			}
			else if (day == 6)
			{
				count = 5;
			}

			penny = 7 - count;
		label:
			for (int j = initial; j <= count && j <= leap_day; j++) {
				if (j == 1) {
					for (int k = 1; k <= penny; k++) {
						cout << "    ";
					}
				}
				cout << setw(3) << j << " ";

			}

			initial = count + 1;
			count = initial + 6;

			if (initial > 1) {
				cout << endl;
			}
			if (initial > leap_day)
			{
				goto label1;
			}
			goto label;

		}





		if (month == 3) {

			if (day == 0) {
				count = 4;
			}
			else if (day == 1)
			{
				count = 3;
			}
			else if (day == 2) {
				count = 2;
			}
			else if (day == 3) {
				count = 1;
			}
			else if (day == 4) {
				count = 7;
			}
			else if (day == 5)
			{
				count = 6;
			}
			else if (day == 6)
			{
				count = 5;
			}
			if (h == 1) {
				if (count == 1) {
					count = 7;
				}
				else {
					count -= 1;
				}

			}
			penny = 7 - count;
		label2:
			for (int j = initial; j <= count && j <= 31; j++) {
				if (j == 1) {
					for (int k = 1; k <= penny; k++) {
						cout << "    ";

					}
				}
				cout << setw(3) << j << " ";
			}
			initial = count + 1;
			count = initial + 6;

			if (initial > 1) {
				cout << endl;

			}
			if (initial > 31)
			{
				goto label1;
			}
			goto label2;
		}




		if (month == 4) {

			if (day == 0) {
				count = 1;
			}
			else if (day == 1)
			{
				count = 7;
			}
			else if (day == 2) {
				count = 6;
			}
			else if (day == 3) {
				count = 5;
			}
			else if (day == 4) {
				count = 4;
			}
			else if (day == 5)
			{
				count = 3;
			}
			else if (day == 6)
			{
				count = 2;
			}
			if (h == 1) {
				if (count == 1) {
					count = 7;
				}
				else {
					count -= 1;
				}

			}
			penny = 7 - count;
		label3:
			for (int j = initial; j <= count && j <= 30; j++) {
				if (j == 1) {
					for (int k = 1; k <= penny; k++) {
						cout << "    ";

					}
				}
				cout << setw(3) << j << " ";
			}
			initial = count + 1;
			count = initial + 6;
			if (initial > 1) {
				cout << endl;
			}
			if (initial >= 31)
			{
				goto label1;
			}
			goto label3;

		}




		if (month == 5) {

			if (day == 0) {
				count = 6;
			}
			else if (day == 1)
			{
				count = 5;
			}
			else if (day == 2) {
				count = 4;
			}
			else if (day == 3) {
				count = 3;
			}
			else if (day == 4) {
				count = 2;
			}
			else if (day == 5)
			{
				count = 1;
			}
			else if (day == 6)
			{
				count = 7;
			}

			if (h == 1) {
				if (count == 1) {
					count = 7;
				}
				else {
					count -= 1;
				}

			}
			penny = 7 - count;
		label4:
			for (int j = initial; j <= count && j <= 31; j++) {
				if (j == 1) {
					for (int k = 1; k <= penny; k++) {
						cout << "    ";

					}
				}
				cout << setw(3) << j << " ";

			}
			initial = count + 1;
			count = initial + 6;
			if (initial > 1) {
				cout << endl;
			}
			if (initial > 31)
				goto label1;

			goto label4;

		}
		if (month == 6) {

			if (day == 0) {
				count = 3;
			}
			else if (day == 1)
			{
				count = 2;
			}
			else if (day == 2) {
				count = 1;
			}
			else if (day == 3) {
				count = 7;
			}
			else if (day == 4) {
				count = 6;
			}
			else if (day == 5)
			{
				count = 5;
			}
			else if (day == 6)
			{
				count = 4;
			}
			if (h == 1) {
				if (count == 1) {
					count = 7;
				}
				else {
					count -= 1;
				}

			}
			penny = 7 - count;
		label5:

			for (int j = initial; j <= count && j <= 30; j++) {
				if (j == 1) {
					for (int k = 1; k <= penny; k++) {
						cout << "    ";

					}
				}
				cout << setw(3) << j << " ";
			}
			initial = count + 1;
			count = initial + 6;
			if (initial > 1) {
				cout << endl;
			}
			if (initial > 30)
				goto label1;
			goto label5;

		}



		if (month == 7) {
			if (day == 0) {
				count = 1;
			}
			else if (day == 1)
			{
				count = 7;
			}
			else if (day == 2) {
				count = 6;
			}
			else if (day == 3) {
				count = 5;
			}
			else if (day == 4) {
				count = 4;
			}
			else if (day == 5)
			{
				count = 3;
			}
			else if (day == 6)
			{
				count = 2;
			}
			if (h == 1) {
				if (count == 1) {
					count = 7;
				}
				else {
					count -= 1;
				}

			}
			penny = 7 - count;
		label6:

			for (int j = initial; j <= count && j <= 31; j++) {
				if (j == 1) {
					for (int k = 1; k <= penny; k++) {
						cout << "    ";

					}
				}
				cout << setw(3) << j << " ";
			}
			initial = count + 1;
			count = initial + 6;

			if (initial > 1) {
				cout << endl;
			}
			if (initial > 31) {
				goto label1;
			}
			goto label6;

		}





		if (month == 8) {
			if (day == 0) {
				count = 5;
			}
			else if (day == 1)
			{
				count = 4;
			}
			else if (day == 2) {
				count = 3;
			}
			else if (day == 3) {
				count = 2;
			}
			else if (day == 4) {
				count = 1;
			}
			else if (day == 5)
			{
				count = 7;
			}
			else if (day == 6)
			{
				count = 6;
			}
			if (h == 1) {
				if (count == 1) {
					count = 7;
				}
				else {
					count -= 1;
				}

			}
			penny = 7 - count;
		label7:

			for (int j = initial; j <= count && j <= 31; j++) {
				if (j == 1) {
					for (int k = 1; k <= penny; k++) {
						cout << "    ";

					}
				}
				cout << setw(3) << j << " ";
			}
			initial = count + 1;
			count = initial + 6;
			if (initial > 1) {
				cout << endl;
			}
			if (initial > 31) {
				goto label1;
			}
			goto label7;

		}




		if (month == 9) {

			if (day == 0) {
				count = 2;
			}
			else if (day == 1)
			{
				count = 1;
			}
			else if (day == 2) {
				count = 7;
			}
			else if (day == 3) {
				count = 6;
			}
			else if (day == 4) {
				count = 5;
			}
			else if (day == 5)
			{
				count = 4;
			}
			else if (day == 6)
			{
				count = 3;
			}
			if (h == 1) {
				if (count == 1) {
					count = 7;
				}
				else {
					count -= 1;
				}

			}
			penny = 7 - count;
		label8:
			for (int j = initial; j <= count && j <= 30; j++) {
				if (j == 1) {
					for (int k = 1; k <= penny; k++) {
						cout << "    ";

					}
				}
				cout << setw(3) << j << " ";
			}
			initial = count + 1;
			count = initial + 6;

			if (initial > 1) {
				cout << endl;
			}
			if (initial > 30) {
				goto label1;
			}
			goto label8;

		}



		if (month == 10) {
			if (day == 0) {
				count = 7;
			}
			else if (day == 1)
			{
				count = 6;
			}
			else if (day == 2) {
				count = 5;
			}
			else if (day == 3) {
				count = 4;
			}
			else if (day == 4) {
				count = 3;
			}
			else if (day == 5)
			{
				count = 2;
			}
			else if (day == 6)
			{
				count = 1;
			}
			if (h == 1) {
				if (count == 1) {
					count = 7;
				}
				else {
					count -= 1;
				}

			}
			penny = 7 - count;
		label9:
			for (int j = initial; j <= count && j <= 31; j++) {
				if (j == 1) {
					for (int k = 1; k <= penny; k++) {
						cout << "    ";

					}
				}
				cout << setw(3) << j << " ";
			}
			initial = count + 1;
			count = initial + 6;
			if (initial > 1) {
				cout << endl;
			}
			if (initial > 31) {
				goto label1;
			}
			goto label9;
			//cout << endl;
		}




		if (month == 11) {
			if (day == 0) {
				count = 4;
			}
			else if (day == 1)
			{
				count = 3;
			}
			else if (day == 2) {
				count = 2;
			}
			else if (day == 3) {
				count = 1;
			}
			else if (day == 4) {
				count = 7;
			}
			else if (day == 5)
			{
				count = 6;
			}
			else if (day == 6)
			{
				count = 5;
			}
			if (h == 1) {
				if (count == 1) {
					count = 7;
				}
				else {
					count -= 1;
				}

			}
			penny = 7 - count;
		label10:
			for (int j = initial; j <= count && j <= 30; j++) {
				if (j == 1) {
					for (int k = 1; k <= penny; k++) {
						cout << "    ";

					}
				}
				cout << setw(3) << j << " ";
			}
			initial = count + 1;
			count = initial + 6;
			if (initial > 1) {
				cout << endl;
			}
			if (initial > 30) {
				goto label1;
			}
			goto label10;
		}




		if (month == 12) {
			if (day == 0) {
				count = 2;
			}
			else if (day == 1)
			{
				count = 1;
			}
			else if (day == 2) {
				count = 7;
			}
			else if (day == 3) {
				count = 6;
			}
			else if (day == 4) {
				count = 5;
			}
			else if (day == 5)
			{
				count = 4;
			}
			else if (day == 6)
			{
				count = 3;
			}
			if (h == 1) {
				if (count == 1) {
					count = 7;
				}
				else {
					count -= 1;
				}

			}
			penny = 7 - count;
		label11:
			for (int j = initial; j <= count && j <= 31; j++) {
				if (j == 1) {
					for (int k = 1; k <= penny; k++) {
						cout << "    ";

					}
				}
				cout << setw(3) << j << " ";
			}
			initial = count + 1;
			count = initial + 6;
			if (initial > 1) {
				cout << endl;
			}if (initial > 30) {
				goto label1;
			}
			goto label11;
			//cout << endl;
		}


	}
label1:
	return 10;
}
int main()
{
	int year, day;
	cout << "Enter year : ";
	cin >> year;


	for (int i = 1; i <= 12; i++) {
		printmonth(i);
		Calendar(i, year);
		getnoofdaysinmonth(i, year);
	}




	system("pause");
	return 0;
}