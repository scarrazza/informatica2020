// ROOT macro
void esercizio1()
{
  // creo oggetto TF1
  TF1 *f1 = new TF1("f1", "-sin(x*x)/x + 0.01 * x*x", -3, 3);

  // modifico il titolo e gli assi
  f1->SetTitle("Esercizio 1");
  f1->GetXaxis()->SetTitle("x");
  f1->GetYaxis()->SetTitle("y");

  // modifico il colore
  f1->SetLineColor(kBlue);

  // Disegno
  f1->Draw();
}
