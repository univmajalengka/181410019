#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct nama_t {
  string title;
  int year;
} nama [3];

void printnama (nama_t nama);

int main ()
{
  string mystr;
  int n;

  for (n=0; n<3; n++)
  {
    cout << "Enter title: ";
    getline (cin,nama[n].title);
    cout << "Enter year: ";
    getline (cin,mystr);
    stringstream(mystr) >> nama[n].year;
  }

  cout << "\nYou have entered these nama:\n";
  for (n=0; n<3; n++)
    printnama (nama[n]);
  return 0;
}

void printnama (nama_t nama)
{
  cout << nama.title;
  cout << " (" << nama.year << ")\n";
}