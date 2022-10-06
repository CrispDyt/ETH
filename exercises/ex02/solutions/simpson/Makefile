# Programming Techniques for Scientific Simulations, HS 2022

# Define our tools and parameters, preferably using the implicit variable names.
CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -Wall -Wextra -Wpedantic
CXXFLAGS += -O3
LDFLAGS = -Lintegrator
LDLIBS = -lintegrate

# Export all variables into the environment. This will come handy further below.
export

# The first target is called 'all' by convention and used to delegate.
.PHONY: all
all: data/convergence.png

# Compile our code and generate an executable binary together with the library.
print_integrals: main.cpp integrator/libintegrate.a
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS) $(LDLIBS)

# Libraries often know how to build themselves (provide their own build system).
# Exported variables will also be visible in a sub-make.
integrator/libintegrate.a:
	$(MAKE) -C integrator

# Rerun the file if either our program or the input parameter changes.
data/results.txt: print_integrals maxbins.conf
	@mkdir -p data # create the directory if it doesn't exist
	./print_integrals < maxbins.conf

# Regenerate the plot if the data or plotting configuration changes.
data/convergence.png: data/results.txt convergence.gnuplot
	gnuplot convergence.gnuplot
#	python plot_numpy.py

# Always offer a way to clean up!
.PHONY: clean
clean:
	rm -f print_integrals
	rm -f *.o *.a
	rm -rf data
	$(MAKE) -C integrator clean
