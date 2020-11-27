/*
  Esercizio: Programmi in C++ con ROOT
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include "TCanvas.h"
#include "TF1.h"
#include "TApplication.h"
using namespace std;

int main(int argc, char **argv)
{
  // Updating application
  TApplication app("App", &argc, argv);

  // create canvas
  TCanvas *c = new TCanvas("c", "Esercizio 4", 800, 500);

  // create function
  TF1 *f = new TF1("f", "1/x", -10, 10);
  f->Draw();

  c->SaveAs("esercizio4.png");

  // running the application
  app.Run();

  // free memory
  delete f;
  delete c;
  
  return 0;
}
