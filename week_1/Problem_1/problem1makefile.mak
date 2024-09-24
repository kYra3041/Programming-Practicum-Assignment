# Target to compile the object file
Problem1: Problem1.o
	g++ Problem1.o -o Problem1.exe

# Target to compile the C++ program
Problem1.o: Problem1.cpp
	g++ -c Problem1.cpp -o Problem1.o

# Target to run the program (interactively)
run: Problem1
	./Problem1.exe

# Target to compile the object Test file
Problem1Test: Problem1Test.o
	g++ Problem1Test.o -o Problem1Test.exe

# Target to compile the C++ Test program
Problem1Test.o: Problem1Test.cpp
	g++ -c Problem1Test.cpp -o Problem1Test.o

# Target to run the Test program
test: Problem1Test
	./Problem1Test.exe

# Target to clean up compiled files
clean:
	rm -f Problem1.o Problem1Test.o Problem1.exe Problem1Test.exe