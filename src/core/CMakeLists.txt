set(CORE_HEADER_FILES
    GlogenEngine.h
    BoundedEngine.h
)

add_library(core STATIC Core.cpp)

install(TARGETS core
    EXPORT glogen
    LIBRARY DESTINATION ${installlibdir}
    ARCHIVE DESTINATION ${installlibdir}
    RUNTIME DESTINATION ${installbindir}
    # Only this one usefull so far
    # This will render include_directories optional when using this lib as IMPORTED
    INCLUDES DESTINATION ${installincludedir}
)