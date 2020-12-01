# Laboratorio di informatica (10/12)
### Prof. Stefano Carrazza - Corso C - 2020/21

**Riassunto:** Esercizi di base in C++: TF1, TGraph, TGraphErrors e TH1F.

Prima di iniziare suggeriamo di create una cartella per questa lezione in cui potete salvare tutti i files che saranno creati per gli esercizi.
```bash
cd ~/           # ci porta alla home directory
mkdir lezione10  # crea la directory sulla vostra home
cd lezione10     # entrate dentro la cartella
```
dopodiché creare un `makefile` con le istruzioni di compilazione per tutti gli esercizi.

## Esercizio 1 - Multi TGraph

Scrivere un **programma in C++** in cui dei punti letti da file vengono classificati in 2 categorie, dentro e fuori da un cerchio centrato nel piano `(x,y) = (0.5, 0.5)` e raggio `r = 0.5`.

1. Definire una struttura dati per punti sul piano `(x,y)`.

2. Scaricare con il commando `wget` il file di dati con le coordinate `(x,y)` di 1000 punti:
```
https://raw.githubusercontent.com/scarrazza/informatica2020/master/Lezione_10/data1.dat
# oppure
curl https://raw.githubusercontent.com/scarrazza/informatica2020/master/Lezione_10/data1.dat -o data1.dat
```

3. Caricare i dati da file in un array dinamico della struttura definita in 1.

4. Creare 2 oggetti `TGraph`, `g1` e `g2`. Per ogni elemento dell'array di punti determinare se si trova dentro o fuori del cerchio. Riempire `g1` con i punti all'interno del cerchio e `g2` con i punti all'esterno del cerchio. *Suggerimento*: costruire una funzione che calcola la distanza tra il punto e il centro del cerchio.

5. Colorare i markers di `g1` in blue e `g2` in rosso.

6. Creare un canvas di dimensione `(800,800)`, aggiornare i titoli, e disegnare `g1` e `g2`.

7. Salvare il plot in un file `esercizio1.png`.

## Esercizio 2 - Fitting a TGraphError

Scrivere una **programma in C++** e determinare la costante di accelerazione di un oggetto in moto uniformemente accelerato.

1. Scaricare con il commando `wget` il file di dati con le coordinate `(tempo,y(t))` di 100 punti:
```
https://raw.githubusercontent.com/scarrazza/informatica2020/master/Lezione_10/data2.dat
# oppure
curl https://raw.githubusercontent.com/scarrazza/informatica2020/master/Lezione_10/data2.dat -o data2.dat
```

2. Caricare i dati in un `TGraphErrors`, considerando l'errore sull'asse `x` nullo, mentre quello sull'asse `y` costante e uguale a `yerr = 0.1`.

3. Creare un `TF1` in cui la funzione da fittare è `y(t) = 1/2 * a * t^2`, dove `a` è il parametro da ottimizzare.

4. Aggiornare i titoli del plot e plottare i dati assieme al fit.

5. Utilizzare l'opzione `gStyle->SetOptFit();` includendo il header `TStyle.h` affinché i risultati del fit siano visibili sul plot.

6. Stampare da terminale il chi2 e il valore finale di `a`.
