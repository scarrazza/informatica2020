# Laboratorio di informatica (1/12)

### Prof. Stefano Carrazza - Corso C - 2020/21

**Riassunto:** Per la seduta odierna proponiamo un primo contatto al sistema
operativo Linux con istruzioni e esercizi per l'utilizzo dell'ambiente desktop
e i rispettivi strumenti utili per il corso di informatica.

<!-- ## Regole

- Il computer dovrebbe essere accesso. Il monitor può essere in
  standby quindi basta muovere il mouse o premere qualche lettera della tastiera
  per riaccenderlo.

- In caso che il computer sia effettivamente spento procedere ad accenderlo.

- Non spegnere il computer alla fine del corso. Fare semplicemente *Log-Out* per
  scollegarvi. -->

## Esercizio 1 - Registrazione laboratorio

<!-- ### Step 1 - Registrazione unicloud

Prima di utilizzare come **username** e **password** la propria credenziale
di posta elettronica dell'ateneo, dovete registrarvi via:

[https://registrazione.unicloud.unimi.it/](https://registrazione.unicloud.unimi.it/)

da rete eduroam dell'ateneo, oppure direttamente presso la postazione in aula
307 e/o 309.

Se il computer mostra il login del sistema operativo Windows, passare il mouse
nella regione centrale in alto e cliccare sulla X. Dopodiché, selezionare
l'entrata contente la stringa `linux` per passare all'ambiente Linux che sarà
utilizzato durante il corso.

Prima di fare login, controllare se il **Caps Lock** è disattivato.

Ricordare sempre di effettuare il **Log-Out** una volta terminata la seduta. -->


Per loggarsi sulle macchine del laboratorio di calcolo del dipartimento di fisica dovete registravi via:

[https://registrazione.fisica.unimi.it/cgi-sec/register.php](https://registrazione.fisica.unimi.it/cgi-sec/register.php).

<!-- ## Esercizio 1 - Ambientarsi in Linux

La distribuzione Fedora (Linux) è installata su tutte le macchine.
- Analizzare l'ambiente Desktop, individuare i menu e l'opzione di **Log-Out**.
- Navigare sul menu `Applications` e trovare il browser internet `Firefox`, e
  aprire la pagina web con il contenuto del corso:

  [https://github.com/scarrazza/informatica2019](https://github.com/scarrazza/informatica2019)

- Navigare sul menu `Applications` e aprire l'editor di testo chiamato `Text Editor`.

- Tutti i comandi per l'esplorazione del file system e per la manipolazione
  dei files possono essere effettuate direttamente con l'ambiente Desktop, pero
  siccome dovremmo programmare queste operazioni verranno fatte col terminale. -->

## Esercizio 2 - Accesso remoto alle macchine del laboratorio

Siccome programmare richiede allenamento e studio, vi capiterà di lavorare su
diverse macchine, sia in laboratorio che sul vostro computer personale.

Detto ciò, esistono metodi per la copia di files da remoto utilizzando la rete
usando `ssh` e `scp`. Da notare però che per motivi di sicurezza le connessioni
dirette da remoto non sono sempre possibili dovuti a regole firewall oppure la
mancanza di software opportuno per tali operazioni.

- Per accedere da remoto ad un computer raggiungibile sulla rete usiamo il comando:

  ```bash
  ~$ ssh <username>@<indirizzo_computer>
  ```

  dove per `<indirizzo_computer>` intendiamo l'IP oppure il suo dominio da rete.
  Questo metodo vi permetterà di entrare nella macchina remota e lavorare.
  Eseguendo il comando `ssh -X <username>@<indirizzo_computer>` sarete capaci
  di inoltrare l'output delle applicazioni grafiche da remoto.

- Loggarsi sulle macchine del laboratorio di calcolo del dipartimento di fisica usando `ssh <username>@tolab.fisica.unimi.it`.

- Uscire dalle macchine del laboratorio con il `exit`.

## Esercizio 3 - Ambiente di sviluppo

Preparazione ambiente di sviluppo:

- [https://code.visualstudio.com/](https://code.visualstudio.com/)
- [https://code.visualstudio.com/docs/setup/windows](https://code.visualstudio.com/docs/setup/windows)
- [https://code.visualstudio.com/docs/setup/mac](https://code.visualstudio.com/docs/setup/mac)

## Esercizio 4 - Il terminale e bash

Per programmare utilizzeremmo un emulatore di terminale per Linux basato sul
linguaggio per comandi chiamato `bash`.

- Cercate e aprite il programma chiamato `Terminal`.
- Provate a lanciare il comando bash che semplicemente restituisce un vostro
  input direttamente su schermo.
- Scrivete

    ```bash
    ~$ echo "Hello World!"
    ```

    seguito dal tasto `Invio/Enter`.

    *Nota: tutti i comandi bash devono essere seguiti dal tasto `Invio` affinché
    siano eseguiti.*

- Per conoscere i comandi più comuni in bash potete inviare il comando:

  ```bash
  ~$ help
  ```

- Per conoscere dettagli dei comandi potete usare il comando `man` che apre
  la pagina del manuale bash con i dettagli del comando, e.g.:

  ```bash
  ~$ man echo
  ```

  per chiudere la pagina del manuale premere semplicemente il tasto `q` sulla tastiera.

- Potete usare le freccie su e giù per recuperare i commandi che avete già utilizzati.

- Per ulteriori informazioni ed esempi potete visitare: [questo link](https://it.wikipedia.org/wiki/Bash)

*Nota: esistono altri linguaggi per comandi ma ormai bash è uno dei più popolari.*

## Esercizio 5 - Il file system

I dati contenuti nel disco fisso del sistema sono strutturati in cartelle
(*directories*). In generale, nei sistemi UNIX la directory di base, chiamata
**root** (da non confondere con il nome dell'account che a privilegi amministrativi),
viene indicata con il simbolo `/`. Dentro questa cartella troviamo sottocartelle che
contengono programmi, dati e configurazioni di sistema che permettono al computer di
 funzionare, e.g. `/usr/`, `/bin/`, `/home/`, ecc.

 Tutti gli utenti hanno previlegi di scrittura e lettura per i files che si trovano
 dentro la propria directory **home**. Per esempio, l'utente chiamato `john` ha come
 cartella home: `/home/john`.

Proponiamo adesso una lista di comandi/esercizi utili per navigare e creare files.
Per tutti i comandi resta sempre valido l'utilizzo del comando `man` oppure
l'opzione `<comando> --help`.

1. Per visualizzare il nome della directory in cui ci troviamo, usiamo il comando:

      ```bash
      ~$ pwd
      ```

      (print working directory)

2. Per elencare tutti i files e cartelle presenti nella directory in cui ci troviamo:

      ```bash
      ~$ ls
      ```

      (list). Se invece usiamo il comando `ls -l` (cioè `ls` con l'opzione `-l`)
      molti dettagli saranno mostrati come proprietario, permessi di accesso,
      dimensione file, ecc.

3. Per creare una nuova cartella:

      ```bash
      ~$ mkdir <nome_nuova_cartella>
      ```

      (make directory). Se aggiungiamo l'opzione `mkdir -p` tutte le parent directories
      saranno create.

4. Per creare un file vuoto:

      ```bash
      ~$ touch <nome_file>
      ```

5. Per cancellare un file o cartella:

      ```bash
      ~$ rm <file>
      # oppure per cartelle:
      ~$ rm -r <directory>
      ```

      dove comando remove è stato chiamato con l'opzione `-r` (recursive).
      Fare attenzione all'utilizzo di `*`, i.e. `rm -rf *` significa cancellare tutti
      i files e cartelle presenti nella directory attuale.

6. Per navigare tra cartelle:

      ```bash
      ~$ cd <cartella>
      ```

      (change directory) oppure se vogliamo entrare nella cartella precedente:

      ```bash
      ~$ cd ..
      ```

      se usate `cd` questo vi portera alla vostra home. Invece `cd -` vi porterà
      alla cartella che avete visitato precedentemente.

7. Per vedere il contenuto di in file senza aprirlo:

      ```bash
      ~$ less <file>
      ~$ more <file>
      ~$ cat <file>
      ```

      il comando `cat` viene inoltre impiegato per concatenare files, e.g. `cat file1 file2 > file3`.

Come esercizio creare la struttura cartelle seguente:

```bash
  /home/<username>/corso_di_informatica
    |- Lezione1
          |- data.txt # lasciarlo vuoto
```

## Esercizio 6 - Copiare e spostare files

Per copiare e spostare files utilizziamo i seguenti comandi:

- Per copiare:

   ```bash
   ~$ cp <file_da_copiare> <directory_in_cui_copiare>
   ```

  (copy). Se vogliamo copiare una cartella basta aggiungere l'opzione recursive, i.e. `cp -r`.
- Se vogliamo muovere un file oppure rinominare un file, usiamo:

   ```bash
   ~$ mv <file> <nuovo_nome_file>
   ```

 Ricordare che le directories possono essere rappresentate da notazione relativa rispetto
 alla cartella attuale sia in notazione assoluta.

Provate a copiare il file `data.txt` creato nell'esercizio precedente dentro la
cartella `Lezione1` e poi cambiate il suo nome da `data.txt` a `README.md`.

## Esercizio 7 - Editor di testo

Esistono innumerevoli programmi per editare files su Linux, che capiscono il tipo
di contenuto in base al suffisso del file. Per esempio un file con suffisso `.txt` è
considerato come puro testo, invece un file con `.cc` è un file di programmazione in C++, quindi si attiveranno dei colori per la sintassi utilizzata.

Sono disponibili su tutte le macchine i seguenti editor di testo:

- `gedit`: editor generale, user-friendly, molto facile e intuitivo da usare.
- `vim`: editor molto flessibile e con supporto a innumerevoli plug-ins. Richiede tempo
  per imparare ad utilizzare in modo proficuo.
- `emacs`: editor molto flessibile, contestualmente simile a vim, richiede però tempo
  per imparare ad utilizzare in modo proficuo.
- `code`: editor moderno, tra IDE e editor.

Come esercizio proviamo a creare un file usando code:

1. aprire il terminale, scegliere una cartella dentro la propria home e eseguire:

      ```bash
      ~$ code file1.txt
      ```

      scrivere un contenuto qualunque, salvare il file e chiudere `code`.

2. controllare il contenuto di questo nuovo file con `cat`.

3. Cancellare `file1.txt`.

A questo punto proviamo a creare un file per codice in C++:

1. aprire il terminale e eseguire

      ```bash
      ~$ code file.cc
      ```

2. scrivere la seguente riga

      ```c++
      #include <iostream>
      ```

      noterete che si attiveranno dei colori diversi per ogni parola: `gedit` ha
      riconosciuto che il vostro file contiene sintassi del C++.

3. Cancellare `file.cc`.

Con la tastiera italiana i seguenti simboli utili per programmazione sono:

```lang-none
{ = Alt Gr + Shift + è
} = Alt Gr + Shift + +
~ = Alt Gr + ì
```

## Esercizio 8 - Clonare con git

Git è uno strumento utilissimo quando si programma, permette di salvare i propri
files su server remoti, mantenere lo storico delle modifiche e lavorare in modo collaborativo. Per esempio [https://github.com](https://github.com)
è molto popolare per progetti open-source a grande scala.

Spiegare l'utilizzo di `git` è al di fuori dello scopo di questo tutorial, ma se avete tempo studiarlo è ottima idea che vi aiuterà a salvare i vostri codici e dati in maniera efficiente.

A titolo di esempio potete scaricare questa guida e tutto il materiale del corso semplicemente facendo:

```bash
~$ git clone https://github.com/scarrazza/informatica2020.git
```

e poi entrare nella cartella `informatica2020` con

```bash
~$ cd informatica2020
```

Ogni settimana le nuove lezioni saranno pubblicate sul repositorio `git`, per ottenere
gli aggiornamenti basterà effettuare un `pull`, i.e.:

```bash
~$ cd informatica2020
~$ git pull
```

A questo punto provare ad aprire i documenti appena clonati con `gedit`, e nel caso di PDFs con `evince`.

## Esercizio 9 - Copia dei files

Per copiare files da remoto utilizziamo il comando `scp`:

  ```bash
  ~$ scp <username>@<indirizzo_computer>:<file> <file_destinazione>
  ```

  Questo comando funziona in modo analogo a `cp`, quindi si possono copiare
  intere cartelle aggiungendo l'opzione `cp -r`.

Loggarsi sulle macchine del laboratorio di calcolo del dipartimento di fisica usando ssh e copiare i propri files.

1. Loggarsi con `ssh <username>@tolab.fisica.unimi.it`.

2. Verificare il contenuto della propria home directory.

3. Copiare alcuni files e folders tra la vostra macchina e tolab usando `scp` e `scp -r` rispettivamente.
