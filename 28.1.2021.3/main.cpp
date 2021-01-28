#include <iostream>

using namespace std;

int main()
{

 int godina;
 cout << "unesite godinu:";
  cin >> godina;
  if (godina%4==0 || godina%400==0)
 {
  cout<< "godina je prestupna " << endl;
 }
  else
  {
     cout<< "godina nije prestupna"<<endl;
  }
 return 0;
  }
