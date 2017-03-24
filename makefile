Main: Main.o seres.o marina.o piratas.o revolucionarios.o frutadeldiablo.o paramecia.o zoan.o logia.o
	g++ Main.o seres.o marina.o piratas.o revolucionarios.o frutadeldiablo.o paramecia.o zoan.o logia.o -o Main

Main.o: Main.cpp seres.h marina.h piratas.h revolucionarios.h frutadeldiablo.h paramecia.h zoan.h logia.h
	g++ -c Main.cpp

seres.o: seres.h seres.cpp
	g++ -c seres.cpp

marina.o: marina.h marina.cpp seres.h
	g++ -c marina.cpp

piratas.o: piratas.h piratas.cpp seres.h
	g++ -c piratas.cpp

revolucionarios.o: revolucionarios.h revolucionarios.cpp seres.h
	g++ -c revolucionarios.cpp

frutadeldiablo.o: frutadeldiablo.h frutadeldiablo.cpp
	g++ -c frutadeldiablo.cpp

paramecia.o: paramecia.h paramecia.cpp frutadeldiablo.h
	g++ -c paramecia.cpp

zoan.o: zoan.h zoan.cpp frutadeldiablo.h
	g++ -c zoan.cpp

logia.o: logia.h logia.cpp frutadeldiablo.h
	g++ -c logia.cpp

clean:
	rm -f *.o Main