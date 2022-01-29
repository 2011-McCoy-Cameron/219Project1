driver: driver.o
	g++ -o driver driver.o

driver.o: driver.cpp
	g++ -c driver.cpp

ALU.o: ALU.cpp
	g++ -c ALU.h ALU.cpp

clean:
	rm*.o
