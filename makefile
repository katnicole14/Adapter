CXX = g++
CXXFLAGS = -std=c++11 -Wall
OUT_DIR = bin
SRC_DIR = src
SOURCES = $(SRC_DIR)/ORM.cpp $(SRC_DIR)/adapter.cpp $(SRC_DIR)/target.cpp $(SRC_DIR)/main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = $(OUT_DIR)/my_program

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS) | $(OUT_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

$(OUT_DIR):
	mkdir -p $(OUT_DIR)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp $(SRC_DIR)/%.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OUT_DIR)/*.o $(TARGET)
