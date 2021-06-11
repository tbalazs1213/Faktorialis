#include <iostream>

using namespace std;

ulong faktorialis(int szam)
{
  int szorzo = szam - 1;
  while(szorzo != 1)
  {
    szam = szam * szorzo;
    szorzo--;
  }
  return szam;
}

int main()
{
  int szam;
  cout << "Adja meg a szamot, aminek a faktorialisat szeretne tudni: ";
  cin >> szam;
  if(szam == 1)
  {
    cout << "A szam faktorialisa: 1" << endl;
    return 0;
  } 
  if(szam < 1)
  {
    cout << "A faktorialis nem szamolhato ki." << endl;
    return 0;
  }
  cout << "A szam faktorialisa: " << faktorialis(szam);
  return 0;
}
