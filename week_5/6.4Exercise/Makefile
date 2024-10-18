# Target to compile the object file
fizzbuzz: fizzbuzz.o
	g++ fizzbuzz.o -o fizzbuzz.exe

# Target to compile the C++ program
fizzbuzz.o: fizzbuzz.cpp
	g++ -c fizzbuzz.cpp -o fizzbuzz.o

# Target to run the program (interactively)
run: fizzbuzz
	./fizzbuzz.exe

# Target to compile the object Test file
fizzbuzzTest: fizzbuzzTest.o
	g++ fizzbuzzTest.o -o fizzbuzzTest.exe

# Target to compile the C++ Test program
fizzbuzzTest.o: fizzbuzzTest.cpp
	g++ -c fizzbuzzTest.cpp -o fizzbuzzTest.o

# Target to run the Test program
test: fizzbuzzTest
	./fizzbuzzTest.exe

# Target to clean up compiled files
clean:
	rm -f fizzbuzz.o fizzbuzzTest.o fizzbuzz.exe fizzbuzzTest.exe