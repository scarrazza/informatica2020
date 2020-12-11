/*
  Esercizio: template function
  Author: Stefano Carrazza - 2019
*/
#include <iostream>
using namespace std;

template<typename T>
T somma(T a, T b)
{
  return a+b;
}

int main()
{
  // testing function
  cout << somma(1,2) << endl;

  // testing function
  cout << somma(1.5, 2.5) << endl;

  return 0;
}
