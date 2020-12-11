/*
  Esercizio: Istogramma da file
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include "TApplication.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TF1.h"
#include "TAxis.h"
#include "TStyle.h"
using namespace std;

int main(int argc, char** argv)
{
  TApplication app("App", &argc, argv);

  // Creare variabili
  TCanvas *c = new TCanvas("c", "Esercizio 4", 800, 500);

  TH1F *h1 = new TH1F("h1", "isto", 50, -20, 25);

  fstream f;
  f.open("../data4.dat", ios::in);
  if (!f.good())
    {
      cerr << "Errore apertura file." << endl;
      return 1;
    }

  double data;
  for (;;)
    {
      f >> data;
      if (f.eof()) break;
      h1->Fill(data);
    }

  f.close();

  h1->SetFillColor(kOrange);
  h1->SetLineColor(kBlue);
  h1->GetXaxis()->SetTitle("x");
  h1->GetYaxis()->SetTitle("frequency");
  h1->Draw();

  // save plot to disk
  c->SaveAs("esercizio4.png");

  app.Run();
  delete c;
  delete h1;

  return 0;
}
