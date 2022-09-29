-include config.mk

.PHONY: all
all: square

square.o: square.cpp square.hpp
	${CXX} ${CXXFLAGS} -c $<

main.o: main.cpp square.hpp
	${CXX} ${CXXFLAGS} -c $<

square: main.o square.o
	${CXX} ${CXXFLAGS} -o $@ $^

.PHONY: clean
clean:
	${RM} -v *.o square
