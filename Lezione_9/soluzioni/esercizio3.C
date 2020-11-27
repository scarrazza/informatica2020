// ROOT macro
void esercizio3()
{
  // creo oggetto TCanvas
  TCanvas *c1 = new TCanvas("c1", "Esercizio 3A", 600, 400);

  // creo oggetto TF1
  TF1 *f1 = new TF1("f1", "x^2", -5, 5);

  // modifico il titolo e gli assi
  f1->SetTitle("Esercizio 3A");
  f1->GetXaxis()->SetTitle("x");
  f1->GetYaxis()->SetTitle("y");

  // Disegno
  f1->Draw();

  // Salvare su disco
  c1->SaveAs("c1.png");

  // creo oggetto TCanvas
  TCanvas *c2 = new TCanvas("c2", "Esercizio 3B", 600, 400);

  // creo oggetto TF1
  TF1 *f2 = new TF1("f2", "sin(x)/x", -5, 5);

  // modifico il titolo e gli assi
  f2->SetTitle("Esercizio 3B");
  f2->GetXaxis()->SetTitle("x");
  f2->GetYaxis()->SetTitle("y");

  // Disegno
  f2->Draw();

  // Salvare su disco
  c2->SaveAs("c2.png");  
}
