cmake_minimum_required(VERSION 3.16)
project(glogen--)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_COMPILER clang)
set(CMAKE_C_COMPILER clang)

# Glogen options and parameters
option(GG_BUILD_EXAMPLES "Enable Glogen examples compilation" OFF)
option(GG_BUILD_TESTS "Enable Glogen tests compilation (requires GoogleTests)" OFF)

# ccmake -> cmake-curses-gui

# Set some install directories variables
get_filename_component(installdir ${CMAKE_INSTALL_PREFIX}/glogen ABSOLUTE)
get_filename_component(installlibdir ${installdir}/lib ABSOLUTE)
get_filename_component(installincludedir ${installdir}/include ABSOLUTE)
get_filename_component(installdocdir ${installdir}/doc ABSOLUTE)
get_filename_component(installbindir ${installdir}/bin ABSOLUTE)
get_filename_component(installsharedir ${installdir}/share ABSOLUTE)

# Actual glogen core code
add_subdirectory(src)

# Export all glogen libs, to be IMPORTED by other projects
install(EXPORT glogen NAMESPACE glogen:: DESTINATION ${installdir})