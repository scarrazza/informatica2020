// macro senza funzioni
{
  // creazione variabili
  const int n = 1000;
  double *v = new double[n];
  for (int i = 0; i < n; i++)
    v[i] = rand() % 100;

  double sum = 0;
  for (int i = 0; i < n; i++)
    sum += v[i];

  cout << "Valore medio: " << sum / n << endl; 

  delete[] v;
}
