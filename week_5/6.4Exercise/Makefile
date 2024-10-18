# Target to compile the object file
6.4Exercise: 6.4Exercise.o
	g++ 6.4Exercise.o -o 6.4Exercise.exe

# Target to compile the C++ program
6.4Exercise.o: 6.4Exercise.cpp
	g++ -c 6.4Exercise.cpp -o 6.4Exercise.o

# Target to run the program (interactively)
run: 6.4Exercise
	./6.4Exercise.exe

# Target to compile the object Test file
6.4ExerciseTest: 6.4ExerciseTest.o
	g++ 6.4ExerciseTest.o -o 6.4ExerciseTest.exe

# Target to compile the C++ Test program
6.4ExerciseTest.o: 6.4ExerciseTest.cpp
	g++ -c 6.4ExerciseTest.cpp -o 6.4ExerciseTest.o

# Target to run the Test program
test: 6.4ExerciseTest
	./6.4ExerciseTest.exe

# Target to clean up compiled files
clean:
	rm -f 6.4Exercise.o 6.4ExerciseTest.o 6.4Exercise.exe 6.4ExerciseTest.exe