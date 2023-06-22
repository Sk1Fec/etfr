// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp
#define MAINPREFIX z
#define PREFIX etfr

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 2.10
#define REQUIRED_CBA_VERSION {3,15,7}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(ETFR - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(ETFR - COMPONENT)
#endif

