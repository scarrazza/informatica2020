# Laboratorio di informatica (9/12)
### Prof. Stefano Carrazza - Corso C - 2020/21

**Riassunto:** Esercizi di base in C++: TF1, TGraph, TCanvas e TApplication.

Prima di iniziare suggeriamo di create una cartella per questa lezione in cui potete salvare tutti i files che saranno creati per gli esercizi.
```bash
cd ~/           # ci porta alla home directory
mkdir lezione9  # crea la directory sulla vostra home
cd lezione9     # entrate dentro la cartella
```
dopodiché creare un `makefile` con le istruzioni di compilazione per tutti gli esercizi.

## Esercizio 1 - Funzione a 1 variabile

Scrivere una macro di ROOT in cui vengono disegnate delle funzioni a 1 variabile.

1. Creare una macro di ROOT chiamata `esercizio1.C` e la sua rispettiva funzione, effettuare tutte le prossime richieste sempre dentro questa macro.

2. Costruire un oggetto `TF1` definito come `-sin(x*x)/x + 0.01 * x*x` tra `x=[-3,3]`.

3. Disegnare la curva.

4. Modificare il titolo del grafico con "Esercizio 1", e i titoli sugli assi con
rispettivamente `x` e `y`, e eseguire nuovamente la macro.

4. Modificare il colore della retta usando il metodo di `TF1` chiamato `SetLineColor()`. Scegliere un colore a piacimento sul sito https://root.cern.ch/doc/master/classTColor.html#C02.

5. Eseguire la macro finale e salvare l'immagine in formato `png`.

## Esercizio 2 - Funzioni a 1 variabile

Scrivere una macro di ROOT in cui 2 TF1 vengono disegnati sullo stesso canvas.

1. Copiare la macro precedente in un nuovo file `esercizio2.C`.

2. Creare un'ulteriore `TF1` con la funzione `0.1*sin(4*x)/x` sempre definita tra
`x=[-3,3]`.

3. Creare un'ulteriore `TF1` con la retta `0.5*x` di colore `kGreen`.

4. Disegnare entrambe funzioni sullo stesso plot. Aggiornare il titolo del grafico con
`Esercizio 2`.

## Esercizio 3 - Funzioni a 1 variabile multi-canvas

Scrivere una macro di ROOT in cui 2 TF1 vengono disegnati sullo stesso canvas.

1. Creare una macro `esercizio3.C`.

2. Definire un `TCanvas` di dimensione `(600,400)`.

3. Disegnare la parabola `x^2` tra `x=[-5,5]`, aggiornare il titolo e gli assi del plot.

4. Salvare il plot in un file `c1.png` usando il metodo `SaveAs()` di `TCanvas`.

5. Creare un secondo canvas, disegnare la curva `sin(x)/x`, salvare su file `c2.png`.

## Esercizio 4 - Programmi in C++ con ROOT

Scrivere un programma in C++ che usa la libreria ROOT.

1. Creare un file C++ `esercizio4.cc`.

2. Creare un `TCanvas` di dimensione `(800,500)` e disegnare la funzione `1/x` tra `x=[-10,10]`. Aggiornare il titolo e gli assi del plot. Salvare il canvas in un file `esercizio4.png`.

3. Fare in modo che la finestra grafica non si chiuda alla fine del programma.

4. Compilare con l'aggiunta delle flags:
```
`root-config --cflags` `root-config --libs`
```

5. Testare il programma.

## Esercizio 5 - Fitting

Scrivere una macro di ROOT per fittare dei punti.

1. Scaricare i dati con:
```
wget https://raw.githubusercontent.com/scarrazza/informatica2020/master/Lezione_9/data.dat
```

2. Leggere da file le 100 coordinate di punti. Sul file sono presente 3 colonne, creare 3 arrays `x, y, y2` e riempire con il contenuto delle colonne.

3. Creare un canvas e disegnare `(x,y)` usando l'oggetto `TGraph`. Effettuare un fit lineare usando la funzione predefinita `pol1`.

4. Creare un nuovo canvas e disegnare `(x,y2)`, fittare i dati con un `TF1` definito come `[0]*x^2 + [1]*x + [2]`. Paragonare questo risultato ad un fit usando la funzione predefinita `pol2`.

5. Salvare entrambi plots su disco in formato `png`.
