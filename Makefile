adventure: dellingson.o group01.o
	g++ -std=c++11 *.o -o adventure -fmax-errors=1

dellingson.o: dellingson.cpp group01.h
	g++ -std=c++11 -c dellingson.cpp

group01.o: group01.cpp group01.h
	g++ -std=c++11 -c group01.cpp

ckurland.o: ckurland.cpp group01.h
	g++ -std=c++11 -c ckurland.cpp

clean:
	rm *.o
