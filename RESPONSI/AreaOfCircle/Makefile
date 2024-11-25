# Target to compile the object file
area_of_circle: area_of_circle.o
	g++ area_of_circle.o -o area_of_circle.exe

# Target to compile the C++ program
area_of_circle.o: area_of_circle.cpp
	g++ -c area_of_circle.cpp -o area_of_circle.o

# Target to run the program (interactively)
run: area_of_circle
	./area_of_circle.exe

# Target to compile the object Test file
area_of_circleTest: area_of_circleTest.o
	g++ area_of_circleTest.o -o area_of_circleTest.exe

# Target to compile the C++ Test program
area_of_circleTest.o: area_of_circleTest.cpp
	g++ -c area_of_circleTest.cpp -o area_of_circleTest.o

# Target to run the Test program
test: area_of_circleTest
	@echo "Running hardcoded tests for area of circle calculation..."
	./area_of_circleTest.exe

# Target to clean up compiled files
clean:
	rm -f area_of_circle.o area_of_circleTest.o area_of_circle.exe area_of_circleTest.exe