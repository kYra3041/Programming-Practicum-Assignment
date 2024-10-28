# Target to compile the object file
problem2: problem2.o
	g++ problem2.o -o problem2.exe

# Target to compile the C++ program
problem2.o: problem2.cpp
	g++ -c problem2.cpp -o problem2.o

# Target to run the program (interactively)
run: problem2
	./problem2.exe

# Target to compile the object Test file
problem2Test: problem2Test.o
	g++ problem2Test.o -o problem2Test.exe

# Target to compile the C++ Test program
problem2Test.o: problem2Test.cpp
	g++ -c problem2Test.cpp -o problem2Test.o

# Target to run the Test program
test: problem2Test
	./problem2Test.exe

# Target to clean up compiled files
clean:
	rm -f problem2.o problem2Test.o problem2.exe problem2Test.exe