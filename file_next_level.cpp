	// ifstream in("inData.txt");
	// if (!in.is_open()) cout << "Error while opening the file\n";
	// char name[n], surname[n], dept[n];
	// int GS, Bo_per, Tax, Dist, Tim, Cof_cups;
	// int i = 0;
	// while(i<2)
	// {	in >> name >> surname >> dept;
	// in >> GS >> Bo_per >> Tax;
	// in >> Dist >> Tim;
	// in >> Cof_cups;
	// i++;
    // }
	// in.close();

	// ofstream  out("outData.txt");
	// if (!out.is_open()) cout << "Error whlie opening the file";
	// i = 0;
	// while (i < 2) {
	// 	out << "Name " << name << " Surname " << surname << " Department " << dept << endl;
	// 	out << "Gross-salary " << GS << " Bonus " << Bo_per << " Tax  " << Tax * (1 - (100 / Tax)) << endl;
	// 	out << "Distance " << Dist << " Time " << Tim << endl;
	// 	out << "Coffee cups " << Cof_cups << endl;
	// 	i++;
	// }
	// out.close();


#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
#define n 100
void encrypt(char arr[],int i) {
	int length = i;
	i = 0;
	while (i<length) {
		if (arr[i] >= 'A' && arr[i] <= 'Z') arr[i] = (arr[i] - 'A' + 1) % 26 + 'A';
		else if(arr[i]>='a' && arr[i]<='z') arr[i] = (arr[i] - 'a' + 1) % 26 + 'a';
		i++;
	}
}
void decrypt(char arr[], int i) {
	int length = i;
	i = 0;
	while (i < length) {
		if (arr[i] >= 'A' && arr[i] <= 'Z') arr[i] = (arr[i] - 'A' -1+26) % 26 + 'A';
		else if (arr[i] >= 'a' && arr[i] <= 'z') arr[i] = (arr[i] - 'a' - 1+26) % 26 + 'a';
		i++;
	}
}
int main() {
	char arr[n];
	ifstream in("disney.txt");
	ofstream out("crypted.txt");
	char ch;
	int index = 0;
	while (in.get(ch) && index < n - 1)
		arr[index++] = ch;
	arr[index] = '\0';
	in.close();
	int ys;
	cout << "Enter your own choice : \n";
	cin >> ys;
	switch (ys) {
	case 1:
		encrypt(arr, index);
		out << arr;
		break;
	case 2:
		decrypt(arr,index);
		out << arr;
		break;
	default:
		cout << "invalid input";
		break;
	}
	
	out.close();


	// const int n = 100;

	// ifstream in("employee_data.txt");
	// if (!in.is_open()) cout << "Error while opening the file\n";
	
	// char first_name[n], surname[n];
	// double salary, payIncrease;
	// ofstream  out("decipher.txt");
	// if (!out.is_open()) cout << "Error whlie opening the file\n";
	// while (in >> first_name>>surname >> salary>>payIncrease ) {
	// 	double Up_salary = salary * (1 - (payIncrease / 100));
	// 	out << first_name <<" "<< surname << Up_salary << endl;
	// }
	// in.close();
	// out.close();














	system("pause");
	return 0;
}