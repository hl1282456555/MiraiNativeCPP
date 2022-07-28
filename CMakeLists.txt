cmake_minimum_required(VERSION 3.15)

project(MiraiNativeCPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE SOURCE_FILES ./Source/*.h ./Source/*.hpp ./Source/*.c ./Source/*.cpp)
file(GLOB_RECURSE THIRDPARTY_FILES ./ThirdParty/*.h ./ThirdParty/*.hpp ./ThirdParty/*.c ./ThirdParty/*.cpp)

if (MSVC)
add_compile_options(/utf-8)
string(REPLACE "/EHsc" "/EHa" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
else()
endif()

add_library(${PROJECT_NAME} SHARED  
	${SOURCE_FILES}
	${THIRDPARTY_FILES}
	)

source_group(TREE ${CMAKE_SOURCE_DIR} FILES ${SOURCE_FILES})
source_group(TREE ${CMAKE_SOURCE_DIR} FILES ${THIRDPARTY_FILES})

# project defintions
add_definitions(-DMIRAI_NATIVE_API_EXPORT)

# Add mirai-core-native library
add_definitions(-DWITH_MIRAI_CORE_NATIVE)
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/ThirdParty/mirai-core-native/include")
target_link_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/ThirdParty/mirai-core-native/lib")
target_link_libraries(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/ThirdParty/mirai-core-native/lib/miraicore.lib")

# Add json support
add_definitions(-DWITH_JSON)
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/ThirdParty/json")

# Collect source files from project dir.
set(PROJECT_SOURCE_PATHS)
file(GLOB_RECURSE PROJECT_SOURCE_FILES ./Source/*.*)

foreach(CURRENT_PROJECT_FILE ${PROJECT_SOURCE_FILES})
	if (NOT IS_DIRECTORY ${CURRENT_PROJECT_FILE})
		get_filename_component(TEMP_FILE_PATH ${CURRENT_PROJECT_FILE} DIRECTORY)
		list(APPEND PROJECT_SOURCE_PATHS ${TEMP_FILE_PATH})
	endif()
endforeach()

list(REMOVE_DUPLICATES PROJECT_SOURCE_PATHS)

target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_PATHS}")