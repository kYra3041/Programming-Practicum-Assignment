# Build executable for main program
main: FizzBuzz.o
	g++ FizzBuzz.o -o main.exe

# Compile main program source file
FizzBuzz.o: FizzBuzz.cpp
	g++ -c FizzBuzz.cpp -o FizzBuzz.o

# Run the main program
run: main
	./main.exe

# Build executable for test program
test_main: FizzBuzzTest.o
	g++ FizzBuzzTest.o -o test_main.exe

# Compile test program source file
FizzBuzzTest.o: FizzBuzzTest.cpp
	g++ -c FizzBuzzTest.cpp -o FizzBuzzTest.o

# Run the test program
test: test_main
	./test_main.exe

# Clean up generated files
clean:
	rm -f *.o main.exe test_main.exe
