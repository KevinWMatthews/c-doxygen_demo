add_executable(doxygen_demo
    main.cpp
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
