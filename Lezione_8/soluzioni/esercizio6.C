// la struttura con i punti
struct point2d {
  double *coordinate;
  double distance;
};

// assegna al membro distance la distanza tra le coordinate e il centro.
void compute_distance(point2d &p)
{
  p.distance = sqrt(pow(p.coordinate[0],2) + pow(p.coordinate[1],2));
}

// calcola la media delle distanze in un array point2d
double mean(const point2d *v, int n)
{
  double sum = 0;
  for (int i = 0; i < n; i++)    
    sum += v[i].distance;
  return sum / n;
}

// ROOT macro
void esercizio6()
{
  const int n = 1000;
  point2d punti[n];

  fstream f;
  f.open("../data.dat", ios::in);

  if (!f.good())
    {
      cerr << "Errore apertura file data.dat" << endl;
      return;
    }

  // loading da file
  for (int k = 0; k < n; k++)
    {
      punti[k].coordinate = new double[2];
      f >> punti[k].coordinate[0] >> punti[k].coordinate[1];

      // calcolo distanza
      compute_distance(punti[k]);
    }
  
  f.close();

  cout << "media = " << mean(punti, n) << endl;

  // pulire memoria
  for (int k = 0; k < n; k++)
    delete[] punti[k].coordinate;
}
