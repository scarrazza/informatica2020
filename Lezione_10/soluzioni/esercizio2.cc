/*
  Esercizio: Fitting a TGraphErrors
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include "TApplication.h"
#include "TCanvas.h"
#include "TGraphErrors.h"
#include "TAxis.h"
#include "TF1.h"
#include "TStyle.h"
using namespace std;

int main(int argc, char **argv)
{
  // Updating application
  TApplication app("App", &argc, argv);

  // dichiarazioni variabili
  fstream f;
  f.open("../data2.dat", ios::in);

  if (!f.good())
    {
      cerr << "Errore lettura file." << endl;
      return 1;
    }

  int N = 100;
  double t, y;
  TGraphErrors *data = new TGraphErrors(N);
  for (int i = 0; i < N; i++)
    {
      f >> t >> y;
      data->SetPoint(i, t, y);
      data->SetPointError(i, 0, 0.1);
    }

  f.close();
  
  // create canvas
  TCanvas *c = new TCanvas("c", "Esercizio 2", 600, 400);
  TF1 *fit = new TF1("fit", "0.5*[0]*x^2");
  data->Fit(fit);
  
  gStyle->SetOptFit();
  data->SetTitle("Esercizio 2");
  data->GetXaxis()->SetTitle("t (s)");
  data->GetYaxis()->SetTitle("y(t)");
  data->Draw("A*");

  cout << "chi2 = " << fit->GetChisquare() << endl;
  cout << "g = " << fit->GetParameter(0) << endl;
  
  // running the application
  app.Run();

  // free memory
  delete c;
  delete data;
  delete fit;
  
  return 0;
}
