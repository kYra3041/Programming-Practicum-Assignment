# Target to compile the object file
Sum: Sum.o
	g++ Sum.o -o Sum.exe

# Target to compile the C++ program
Sum.o: Sum.cpp
	g++ -c Sum.cpp -o Sum.o

# Target to run the program (interactively)
run: Sum
	./Sum.exe

# Target to compile the object Test file
SumTest: SumTest.o
	g++ SumTest.o -o SumTest.exe

# Target to compile the C++ Test program
SumTest.o: SumTest.cpp
	g++ -c SumTest.cpp -o SumTest.o

# Target to run the Test program
test: SumTest
	./SumTest.exe

# Target to clean up compiled files
clean:
	rm -f Sum.o SumTest.o Sum.exe SumTest.exe