# Programming Techniques for Scientific Simulations, HS 2022

# Create a library from the object code.
libintegrate.a: simpson.o
	ar crs $@ $^

# Object code depending on header and implementation.
simpson.o: simpson.cpp simpson.hpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Always offer a way to clean up!
.PHONY: clean
clean:
	rm -f *.o *.a

# Note: in the target simpson.o we could rely on implicit integration (leave the
# body empty). It is shown for verbosity: CXXFLAGS is inherited.
