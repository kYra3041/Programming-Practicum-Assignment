CXX = g++
CXXFLAGS = -Wall
TARGET = problem1
SRC = problem1.cpp
TEST_FILE = problem1_test_cases.txt

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: 
	cat $(TEST_FILE)

clean:
	rm -f $(TARGET)

.PHONY: all clean test