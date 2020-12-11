all: prog3 prog4 prog5

prog3: esercizio3.cc
	g++ -o prog3 esercizio3.cc `root-config --cflags` `root-config --libs`

prog4: esercizio4.cc
	g++ -o prog4 esercizio4.cc `root-config --cflags` `root-config --libs`

prog5: esercizio5.cc
	g++ -o prog5 esercizio5.cc `root-config --cflags` `root-config --libs`

clean:
	rm -rf prog3
	rm -rf prog4
	rm -rf prog5
