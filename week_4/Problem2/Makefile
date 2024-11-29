# Build executable for VectorReverse program
VectorReverse: VectorReverse.o
	g++ VectorReverse.o -o VectorReverse.exe

# Compile VectorReverse program source file
VectorReverse.o: VectorReverse.cpp
	g++ -c VectorReverse.cpp -o VectorReverse.o

# Run the VectorReverse program
run: VectorReverse
	./VectorReverse.exe

# Build executable for test program
test_VectorReverse: VectorReverseTest.o
	g++ VectorReverseTest.o -o test_VectorReverse.exe

# Compile test program source file
VectorReverseTest.o: VectorReverseTest.cpp
	g++ -c VectorReverseTest.cpp -o VectorReverseTest.o

# Run the test program
test: test_VectorReverse
	./test_VectorReverse.exe

# Clean up generated files
clean:
	rm -f *.o VectorReverse.exe test_VectorReverse.exe
