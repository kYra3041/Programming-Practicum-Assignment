# Target to compile the object file
Problem2: Problem2.o
	g++ Problem2.o -o Problem2.exe

# Target to compile the C++ program
Problem2.o: Problem2.cpp
	g++ -c Problem2.cpp -o Problem2.o

# Target to run the program (interactively)
run: Problem2
	./Problem2.exe

# Target to compile the object Test file
Problem2Test: Problem2Test.o
	g++ Problem2Test.o -o Problem2Test.exe

# Target to compile the C++ Test program
Problem2Test.o: Problem2Test.cpp
	g++ -c Problem2Test.cpp -o Problem2Test.o

# Target to run the Test program
test: Problem2Test
	./Problem2Test.exe

# Target to clean up compiled files
clean:
	rm -f Problem2.o Problem2Test.o Problem2.exe Problem2Test.exe