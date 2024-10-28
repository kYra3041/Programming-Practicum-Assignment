# Target to compile the object file
problem1: problem1.o
	g++ problem1.o -o problem1.exe

# Target to compile the C++ program
problem1.o: problem1.cpp
	g++ -c problem1.cpp -o problem1.o

# Target to run the program (interactively)
run: problem1
	./problem1.exe

# Target to compile the object Test file
problem1Test: problem1Test.o
	g++ problem1Test.o -o problem1Test.exe

# Target to compile the C++ Test program
problem1Test.o: problem1Test.cpp
	g++ -c problem1Test.cpp -o problem1Test.o

# Target to run the Test program
test: problem1Test
	./problem1Test.exe

# Target to clean up compiled files
clean:
	rm -f problem1.o problem1Test.o problem1.exe problem1Test.exe