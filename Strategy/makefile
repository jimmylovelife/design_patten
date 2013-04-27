CC = g++
CFLAGS = -g 

all: Strategy

clean:
	-rm *.o *.exe
Strategy: TestStrategy.cpp Context.cpp FlyStrategy.cpp SwimStrategy.cpp
	$(CC) -o Strategy TestStrategy.cpp Context.cpp FlyStrategy.cpp SwimStrategy.cpp
