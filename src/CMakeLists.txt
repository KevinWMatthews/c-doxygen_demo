add_executable(doxygen_demo
    main.cpp
    module.h
)
set_property(TARGET doxygen_demo
    PROPERTY CXX_STANDARD 11
    PROPERTY CXX_STANDARD_REQUIRED ON
)

find_package(Doxygen
    REQUIRED dot
    OPTIONAL_COMPONENTS mscgen dia
)

message(STATUS "DOXYGEN_FOUND:      ${DOXYGEN_FOUND}")
message(STATUS "DOXYGEN_VERSION:    ${DOXYGEN_VERSION}")
message(STATUS "DOXYGEN_EXECUTABLE: ${DOXYGEN_EXECUTABLE}")

# In a more recent version of CMake :(
# doxygen_add_docs(doxygen_demo
    # module.h
# )
