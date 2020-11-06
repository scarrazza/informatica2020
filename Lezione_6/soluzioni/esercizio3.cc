/*
  Esercizio: Prodotto matrice-vettore
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  // creazione variabili
  const int n = 3;
  double x[n] = {1, 1, 2};
  double A[n][n] = { {2,4,1}, {4,1,3}, {1,3,-2} };
  double B[n][n] = { {1,1,1}, {0,1,2}, {1,5,0} };

  // Costruzione di M
  double M[n][n] = {0};
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      for (int l = 0; l < n; l++)
	      M[i][j] += A[i][l] * B[l][j];

  // Prodotto M per x
  double r[n] = {0};
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
	      r[i] += M[i][j] * x[j];
      cout << "r[" << i << "] = " << r[i] << endl;
    }

  return 0;
}
