# Target to compile the object file
assignment8no2-3: assignment8no2-3.o
	g++ assignment8no2-3.o -o assignment8no2-3.exe

# Target to compile the C++ program
assignment8no2-3.o: assignment8no2-3.cpp
	g++ -c assignment8no2-3.cpp -o assignment8no2-3.o

# Target to run the program (interactively)
run: assignment8no2-3
	./assignment8no2-3.exe

# Target to compile the object Test file
assignment8no2-3Test: assignment8no2-3Test.o
	g++ assignment8no2-3Test.o -o assignment8no2-3Test.exe

# Target to compile the C++ Test program
assignment8no2-3Test.o: assignment8no2-3Test.cpp
	g++ -c assignment8no2-3Test.cpp -o assignment8no2-3Test.o

# Target to run the Test program
test: assignment8no2-3Test
	./assignment8no2-3Test.exe

# Target to clean up compiled files
clean:
	rm -f assignment8no2-3.o assignment8no2-3Test.o assignment8no2-3.exe assignment8no2-3Test.exe