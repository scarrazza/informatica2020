# Laboratorio di informatica (11/12)
### Prof. Stefano Carrazza - Corso C - 2020/21

**Riassunto:** Esercizi di base in C++: ssh, TH1F.

Prima di iniziare suggeriamo di create una cartella per questa lezione in cui potete salvare tutti i files che saranno creati per gli esercizi.
```bash
cd ~/           # ci porta alla home directory
mkdir lezione11  # crea la directory sulla vostra home
cd lezione11     # entrate dentro la cartella
```
dopodiché creare un `makefile` con le istruzioni di compilazione per tutti gli esercizi.

## Esercizio 1 - ssh

Loggarsi sulle macchine del laboratorio di calcolo del dipartimento di fisica usando ssh e copiare i propri files.

1. Registrarsi su [link](https://registrazione.fisica.unimi.it/cgi-sec/register.php).

2. Loggarsi con `ssh <username>@tolab.fisica.unimi.it`.

3. Verificare il contenuto della propria home directory.

4. Copiare alcuni files e folders tra la vostra macchina e tolab usando `scp` e `scp -r` rispettivamente.

## Esercizio 2 - Istogramma

Scrivere una **macro di ROOT** in cui un istogramma viene disegnato.

1. Creare una macro di ROOT `esercizio2.C`. Creare un canvas di dimensione 800x600.

2. Creare un istogramma 1D, `TH1F` con 100 bins tra [-4,4].

3. Utilizzare il metodo di `h1->FillRandom("gaus", 5000)` per riempire l'istogramma.

4. Disegnare l'istogramma e testare il setup.

5. Aggiornare il titolo e gli assi del plot.

6. Colorare l'interiore dell'istogramma con il metodo `SetFillColor(kYellow)`. Colorare la linea dell'istogramma con `SetLineColor(kBlue)`.

7. Testare la macro.

8. Salvare il plot su file `esercizio2.png`.

## Esercizio 3 - Istogramma fitting

Scrivere un **programma in C++** in cui un istogramma viene disegnato.

1. Convertire la macro `esercizio2.C` in un programma in C++.

2. Testare il programma.

8. Fittare l'istogramma con una gaussiana. Utilizzare l'opzione `gStyle->SetOptFit()` per mostrare il risultato del fit.

9. Salvare il plot su file `esercizio3.png`.

## Esercizio 4 - TH1F fill da file

Scrivere un **programma in C++** in cui l'istogramma viene letto da file.

1. Scaricare con il commando `wget` o `curl` il file di dati con:
```
https://raw.githubusercontent.com/scarrazza/informatica2020/master/Lezione_11/data4.dat
```

2. Caricare i dati in un istogramma con 50 bins tra [-20, 25].

3. Disegnare l'istogramma, colorare e aggiungere il titolo.

4. Testare il programma.

## Esercizio 5 - Template function

Scrivere un **programma in C++** in cui viene implementata una funzione template `somma` tra 2 dati numerici (float, double, int, long, ecc). Testare l'implementazione.
