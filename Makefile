main6: a.o A.o
	g++ -o A a.o A.o

timer6.o: a.cpp a.h
	g++ -c a.cpp

main6.o: A.cpp a.h
	g++ -c A.cpp

clean:
	rm a *.o
