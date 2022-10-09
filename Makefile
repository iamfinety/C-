all:test

test: test.o StackArrays.o HeapArrays.o Song.o
	g++ -o test test.o StackArrays.o HeapArrays.o Song.o

test.o: test.cc StackArrays.h HeapArrays.h Song.o
	g++ -c test.cc

StackArray.o: StackArrays.cc StackArrays.h Song.o
	g++ -c StackArrays.cc

HeapArray.o: HeapArrays.cc HeapArrays.h Song.o
	g++ -c HeapArrays.cc

Song.o: Song.cc Song.h 
	g++ -c Song.cc

clean:
	rm -f test *.o