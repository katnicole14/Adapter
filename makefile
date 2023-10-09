# Compiler
CXX := g++
# Compiler flags
CXXFLAGS := -std=c++11 -Wall
# Output executable
TARGET := main

# Source files
SRCS := main.cpp adapter.cpp ORM.cpp Target.cpp

# Object files
OBJS := $(SRCS:.cpp=.o)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Clean rule to remove generated files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony target to avoid conflicts with files named 'clean'
.PHONY: clean
run: $(TARGET)
	./$(TARGET)
