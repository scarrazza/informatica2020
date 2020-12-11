/*
  Esercizio: Istogramma fit
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <cmath>
#include "TApplication.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TAxis.h"
#include "TStyle.h"
using namespace std;

int main(int argc, char** argv)
{
  TApplication app("App", &argc, argv);

  // Creare variabili
  TCanvas *c = new TCanvas("c", "Esercizio 3", 800, 500);

  TH1F *h1 = new TH1F("h1", "Esercizio 3", 100, -4, 4);
  h1->FillRandom("gaus", 5000);
  h1->SetFillColor(kOrange);
  h1->SetLineColor(kBlue);
  h1->GetXaxis()->SetTitle("x");
  h1->GetYaxis()->SetTitle("frequency");
  h1->Draw();

  // Fitting
  gStyle->SetOptFit();
  h1->Fit("gaus");

  // save plot to disk
  c->SaveAs("esercizio3.png");

  app.Run();
  delete c;
  delete h1;

  return 0;
}
