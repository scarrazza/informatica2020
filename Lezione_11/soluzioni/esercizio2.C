// creating esercizio2
void esercizio2()
{
  // Creare variabili
  TCanvas *c = new TCanvas("c", "Esercizio 2", 800, 500);
  
  TH1F *h1 = new TH1F("h1", "Esercizio 2", 100, -4, 4);
  h1->FillRandom("gaus", 5000);
  h1->SetFillColor(kOrange);
  h1->SetLineColor(kBlue);
  h1->GetXaxis()->SetTitle("x");
  h1->GetYaxis()->SetTitle("frequency");
  h1->Draw();

  // save plot to disk
  c->SaveAs("esercizio2.png");
}
