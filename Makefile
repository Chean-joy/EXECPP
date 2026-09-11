GPP := g++

test:test.cpp
	-$(GPP) -o $@ $^
	-./$@
	-rm ./$@

main:main.o Interduce.o copy_test.o friend_test.o
	-g++ main.o Interduce.o copy_test.o friend_test.o -o main
	-./main
	-rm -f *.o main

main.o:main.cpp Interduce.h copy_test.h friend_test.h
	g++ -c main.cpp

Interduce.o:Interduce.cpp Interduce.h
	g++ -c Interduce.cpp

copy_test.o:copy_test.cpp copy_test.h
	g++ -c copy_test.cpp

friend_test.o:friend_test.cpp friend_test.h
	g++ -c friend_test.cpp


clean:
	-rm -f *.o main