project(hw05library)


set(HEADER_FILES billType.h dateType.h patientType.h doctorType.h personType.h)

set(SOURCE_FILES billType.cpp dateType.cpp patientType.cpp doctorType.cpp personType.cpp)

add_library(hw05_library ${SOURCE_FILES} ${HEADER_FILES})
