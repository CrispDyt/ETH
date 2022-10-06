# Programming Techniques for Scientific Simulations, HS 2022

# Define our tools and parameters, preferably using the implicit variable names.
CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -Wall -Wextra -Wpedantic
CXXFLAGS += -O3 -march=native

# The first target is called 'all' by convention and used to delegate.
.PHONY: all
all: array_static array_dynamic

# Always offer a way to clean up!
.PHONY: clean
clean:
	rm -f array_static array_dynamic

# Note: set "phony" targets when no file with that name exists to be used for
# timestamp comparison.

# Note: we could create the specific targets, but since we used the implicit
# variable names at the top and there is nothing complicated to be done (not
# even header files), let's enjoy some implicit compilation.
