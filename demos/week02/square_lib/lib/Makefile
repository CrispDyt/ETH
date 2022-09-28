.PHONY: all
all: static shared

static: square.cpp
	$(CXX) -c square.cpp
	$(AR) -crs libsquare.a square.o

shared: square.cpp
	$(CXX) -c -fPIC square.cpp
	$(CXX) -shared -fPIC -o libsquare.so square.o

shared_osx: square.cpp
	$(CXX) -c -fPIC square.cpp
	$(CXX) -dynamiclib -fPIC -o libsquare.dylib square.o

.PHONY: clean
clean:
	${RM} -v *.{o,a,so,dylib}

