adventure: dellingson.o group01.o ckurland.o cluibel.o
	g++ -std=c++11 *.o -o adventure

dellingson.o: dellingson.cpp group01.h
	g++ -std=c++11 -c dellingson.cpp

ckurland.o: ckurland.cpp group01.h
	g++ -std=c++11 -c ckurland.cpp
	
dochoa.o: dochoa.cpp group01.h
	g++ -std=c++11 -c dochoa.cpp

cluibel.o: cluibel.cpp group01.h
	g++ -std=c++11 -c cluibel.cpp

group01.o: group01.cpp group01.h
	g++ -std=c++11 -c group01.cpp

clean:
	rm *.o
