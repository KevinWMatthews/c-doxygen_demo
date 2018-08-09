add_executable(doxygen_demo
    main.cpp
    module.h
)
set_property(TARGET doxygen_demo
    PROPERTY CXX_STANDARD 11
    PROPERTY CXX_STANDARD_REQUIRED ON
)

# dot isn't installed but it doesn't fail
find_package(Doxygen REQUIRED dot____why_does_this_pass
    OPTIONAL_COMPONENTS mscgen dia
)

message(STATUS "DOXYGEN_FOUND:      ${DOXYGEN_FOUND}")
message(STATUS "DOXYGEN_VERSION:    ${DOXYGEN_VERSION}")
message(STATUS "DOXYGEN_EXECUTABLE: ${DOXYGEN_EXECUTABLE}")
message(STATUS "DOXYGEN_HAVE_DOT:   ${DOXYGEN_HAVE_DOT}")       # Does this variable exist?

# In a more recent version of CMake :(
# doxygen_add_docs(doxygen_demo
    # module.h
# )

# Create a manual target in my older version of CMake
if (DOXYGEN_FOUND)
    # Copy the Doxygen config file to the out-of-tree build directory
    # This enables CMake to perform variable substitutions!
    configure_file(Doxyfile Doxyfile @ONLY)

    add_custom_target(doc_doxygen_demo
        COMMAND ${DOXYGEN_EXECUTABLE} Doxyfile
        COMMENT "Generating Doxygen documentation"
        VERBATIM
    )
    set_directory_properties(PROPERTY
        ADDITIONAL_MAKE_CLEAN_FILES "${CMAKE_BINARY_DIR}/doc"
    )
endif (DOXYGEN_FOUND)
