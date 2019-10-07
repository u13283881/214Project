main: main.o main.o Weapon.o LaserTurrent.o
	g++ -o main main.o Weapon.o LaserTurrent.o

main.o: main.cpp
	g++ -Wall -c main.cpp -o main.o

Weapon.o: Weapon.h Weapon.cpp
	g++ -Wall -c Weapon.cpp -o Weapon.o

LaserTurrent.o: LaserTurrent.h LaserTurrent.cpp
	g++ -Wall -c LaserTurrent.cpp -o LaserTurrent.o

run:
	./main

clean:
	rm -rf *.o
	rm main
	