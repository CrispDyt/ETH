# add library using the specified source files
add_library(squareLib ${SQUARE_LIBRARY_TYPE} square.cpp)

# add include directories to our target library
# (PUBLIC because users of the library will need the
# include file square.hpp)
target_include_directories(squareLib PUBLIC ./)

# specify install rules (for our square library squareLib)
install(TARGETS squareLib
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
       )

# specify install rules for the header
install(FILES square.hpp DESTINATION include)
