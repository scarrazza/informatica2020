# Questo makefile contiene le istruzioni per compilare tutti gli esercizi
# Qui ho utilizzato alcune funzionalita' piu' avanzate del makefile come
# la definizione di variabili, CC, e riferimenti $@ e $<.
CC=g++

all: prog4

prog4: esercizio4.cc
	$(CC) -o $@ $< `root-config --cflags` `root-config --libs`

clean:
	rm -f prog4
