# Target to compile the main program
MergeList: MergeList.o
	g++ MergeList.o -o MergeList.exe

# Target to compile the test program
MergeListTest: MergeListTest.o
	g++ MergeListTest.o -o MergeListTest.exe

# Compile object files for the main program
MergeList.o: MergeList.cpp
	g++ -c MergeList.cpp -o MergeList.o

# Compile object files for the test program
MergeListTest.o: MergeListTest.cpp
	g++ -c MergeListTest.cpp -o MergeListTest.o

# Run the main program
run: MergeList
	./MergeList.exe

# Run tests
test: MergeListTest
	@echo "Running tests for MergeList program..."
	./MergeListTest.exe

# Clean compiled files
clean:
	rm -f *.o *.exe
