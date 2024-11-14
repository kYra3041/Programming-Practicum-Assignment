# Target to compile the object file
assignment8code: assignment8code.o
	g++ assignment8code.o -o assignment8code.exe

# Target to compile the C++ program
assignment8code.o: assignment8code.cpp
	g++ -c assignment8code.cpp -o assignment8code.o

# Target to run the program (interactively)
run: assignment8code
	./assignment8code.exe

# Target to compile the object Test file
assignment8codeTest: assignment8codeTest.o
	g++ assignment8codeTest.o -o assignment8codeTest.exe

# Target to compile the C++ Test program
assignment8codeTest.o: assignment8codeTest.cpp
	g++ -c assignment8codeTest.cpp -o assignment8codeTest.o

# Target to run the Test program
test: assignment8codeTest
	./assignment8codeTest.exe

# Target to clean up compiled files
clean:
	rm -f assignment8code.o assignment8codeTest.o assignment8code.exe assignment8codeTest.exe