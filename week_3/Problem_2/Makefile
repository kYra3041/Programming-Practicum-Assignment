# Target to compile the object file
multiplication: multiplication.o
	g++ multiplication.o -o multiplication.exe

# Target to compile the C++ program
multiplication.o: multiplication.cpp
	g++ -c multiplication.cpp -o multiplication.o

# Target to run the program (interactively)
run: multiplication
	./multiplication.exe

# Target to compile the object Test file
multiplicationTest: multiplicationTest.o
	g++ multiplicationTest.o -o multiplicationTest.exe

# Target to compile the C++ Test program
multiplicationTest.o: multiplicationTest.cpp
	g++ -c multiplicationTest.cpp -o multiplicationTest.o

# Target to run the Test program
test: multiplicationTest
	./multiplicationTest.exe

# Target to clean up compiled files
clean:
	rm -f multiplication.o multiplicationTest.o multiplication.exe multiplicationTest.exe
