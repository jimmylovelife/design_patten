CC = g++
CFLAGS = -g 

all: Observer

clean:
	-rm *.o *.exe
Observer: TestObserver.cpp  TVObserver.cpp WetherSubject.cpp
	$(CC) -o myobserver TestObserver.cpp  TVObserver.cpp WetherSubject.cpp
