CXX = g++
CXXFLAGS = -std=c++17

SRC = src/*.cpp
OUT = simulator

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f simulator
