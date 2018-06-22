#include<iostream>
using namespace std;
void print_f()
{
	for (int i = 0; i < 6; i++)
		cout << "F";
	cout << endl;
	for (int i = 0; i < 2; i++)
		cout << "F";
	cout << endl;
	for (int i = 0; i < 6; i++)
		cout << "F";
	cout << endl;
	for (int i = 1; i < 9; i++)
	{
		cout << "F";
		if (i % 2 == 0)cout << endl;
	}
	cout << endl;

}
void print_m()
{
	for (int j = 0; j < 6; j++)
	{
		cout << "M";
		if (j == 1)
		{
			cout << "M";
			for (int i = 0; i < 2; i++)
				cout << " ";
			cout << "M";
		}
		else if (j == 2)
		{
			cout << " ";
			cout << "M";
			cout << " ";
			cout << "M";
		}
		else {
			for (int i = 0; i < 4; i++)
				cout << " ";
		}
		cout << "M";
		cout << endl;
	}

	cout << endl;

}
void print_i()
{
	for (int i = 0; i < 6; i++)
		cout << "I";
	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << " ";
		for (int j = 0; j < 2; j++)
			cout << "I";
		cout << endl;
	}
	for (int i = 0; i < 6; i++)
		cout << "I";
	cout << endl;
	cout << endl;

}


int main()
{
	char a, b, c;
	cin >> a >> b >> c;

	int buffer=0,current;
	buffer = a << 16 | b << 8 | c;

	for (int i = 16; i >= 0; i -= 8)
	{
		current = buffer >> i & 255;
		if(current == 'f')
		  print_f();
		if (current == 'm')
		  print_m();
		if (current == 'i')
		  print_i();
	}
	system("pause");
	return 0;
}
