app: main.o Graphics.o Color.o
	g++ main.o Graphics.o Color.o -o app -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp Color.h Event.h Graphics.h
	g++ -c main.cpp

Graphics.o: Graphics.cpp Color.h Event.h Graphics.h
	g++ -c Graphics.cpp

Color.o: Color.cpp
	g++ -c Color.cpp

clean:
	rm *.o 
