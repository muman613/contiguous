project(library)

set(HEADER_FILES
        functions.h)

set(SOURCE_FILES
        functions.cpp)

add_library(library ${SOURCE_FILES} ${HEADER_FILES})

