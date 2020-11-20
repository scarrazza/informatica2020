# Questo makefile contiene le istruzioni per compilare tutti gli esercizi
# Qui ho utilizzato alcune funzionalita' piu' avanzate del makefile come
# la definizione di variabili, CC, e riferimenti $@ e $<.
CC=g++

all: prog1 prog2

prog1: esercizio1.cc
	$(CC) -o $@ $<

prog2: esercizio2.cc funzioni.cc
	$(CC) -o $@ esercizio2.cc funzioni.cc

clean:
	rm -f prog1
	rm -f prog2
