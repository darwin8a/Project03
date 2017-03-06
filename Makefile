adventure: dellingson.o group01.h
	g++ -std=c++11 *.cpp -o adventure

dellingson.o: dellingson.cpp group01.h
	g++ -std=c++11 -c dellingson.cpp

clean:
	rm *.o
