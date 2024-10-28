# Target to compile the object file
code: code.o
	g++ code.o -o code.exe

# Target to compile the C++ program
code.o: code.cpp
	g++ -c code.cpp -o code.o

# Target to run the program (interactively)
run: code
	./code.exe

# Target to compile the object Test file
codeTest: codeTest.o
	g++ codeTest.o -o codeTest.exe

# Target to compile the C++ Test program
codeTest.o: codeTest.cpp
	g++ -c codeTest.cpp -o codeTest.o

# Target to run the Test program
test: codeTest
	./codeTest.exe

# Target to clean up compiled files
clean:
	rm -f code.o codeTest.o code.exe codeTest.exe