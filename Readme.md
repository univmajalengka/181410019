#include<iostream>
using namespace std;
char buahbuahan [7] [15] =
{"jeruk","mangga","semangka","apel","anggur","pepaya","nanas"};
int n;
int main()
{
	for(n=0;n<7;n++)
	{
	cout <<"masukan salah satu buahbuahan : ";
	cin>> n;
	cout <<"nama buahbuahan tersebut adalah :" <<buahbuahan[n];
	cout << "\n";
	}
	return 0;
}
