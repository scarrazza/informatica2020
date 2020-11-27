// ROOT macro
void esercizio2()
{
  // creo oggetto TF1
  TF1 *f1 = new TF1("f1", "-sin(x*x)/x + 0.01 * x*x", -3, 3);

  // modifico il titolo e gli assi
  f1->SetTitle("Esercizio 2");
  f1->GetXaxis()->SetTitle("x");
  f1->GetYaxis()->SetTitle("y");

  // modifico il colore
  f1->SetLineColor(kBlue);

  // Disegno
  f1->Draw();

  // costruisco la funzione 0.1*sin(4*x)/x
  TF1 *f2 = new TF1("f2", "0.1*sin(4*x)/x", -3, 3);
  f2->Draw("same");

  // costruisco la funzione 0.5*x
  TF1 *f3 = new TF1("f3", "0.5*x", -3, 3);
  f3->SetLineColor(kGreen);
  f3->Draw("same");
}
