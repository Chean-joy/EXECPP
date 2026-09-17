GPP := g++

test:test.cpp
	-$(GPP) -o $@ $^
	-./$@
	-rm ./$@

main:main.o polymorphism_test.o
	-g++ $^ -o main
	-./main
# 	-rm -f *.o main

main.o:main.cpp \
polymorphism_test.h
	g++ -c main.cpp

Interduce.o:Interduce.cpp Interduce.h
	g++ -c Interduce.cpp

copy_test.o:copy_test.cpp copy_test.h
	g++ -c copy_test.cpp

friend_test.o:friend_test.cpp friend_test.h
	g++ -c friend_test.cpp

Package_test.o:Package_test.cpp Package_test.h
	g++ -c Package_test.cpp

inherit_test.o:inherit_test.cpp inherit_test.h
	g++ -c inherit_test.cpp

polymorphism_test:polymorphism_test.cpp\
polymorphism_test.h
	g++ -c polymorphism_test.cpp
clean:
	-rm -f *.o main