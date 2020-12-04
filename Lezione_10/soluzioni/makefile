all: prog1 prog2

prog1: esercizio1.cc
	g++ -o prog1 esercizio1.cc `root-config --cflags` `root-config --libs`

prog2: esercizio2.cc
	g++ -o prog2 esercizio2.cc `root-config --cflags` `root-config --libs`

clean:
	rm -rf prog1
	rm -rf prog2
