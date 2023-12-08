CXX = g++
CXXFLAGS = -std=c++11 -Wall

# List of source files
SRCS = HW2main.cpp approximations.cpp pi_approx.cpp

# List of object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
EXEC = HW2main

# Default target
all: $(EXEC)

# Rule to link object files and create the executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

# Rule to compile each source file into an object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean up the project (remove object files and the executable)
clean:
	rm -f $(OBJS) $(EXEC)
