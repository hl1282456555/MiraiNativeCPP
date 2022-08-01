cmake_minimum_required(VERSION 3.19)

project(MiraiNativeCPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(Boost_USE_RELEASE_LIBS       ON)
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME 	OFF)
set(Boost_USE_STATIC_LIBS 		OFF)

find_package(Boost 1.79.0 REQUIRED COMPONENTS log filesystem random thread iostreams json chrono date_time locale)
find_package(OpenSSL REQUIRED)

file(GLOB_RECURSE SOURCE_FILES ./Source/*.h ./Source/*.hpp ./Source/*.c ./Source/*.cpp)
file(GLOB_RECURSE THIRDPARTY_FILES ./ThirdParty/*.h ./ThirdParty/*.hpp ./ThirdParty/*.c ./ThirdParty/*.cpp)

add_compile_options(/utf-8)

add_library(${PROJECT_NAME} SHARED  
	${SOURCE_FILES}
	${THIRDPARTY_FILES}
	)

source_group(TREE ${CMAKE_SOURCE_DIR} FILES ${SOURCE_FILES})
source_group(TREE ${CMAKE_SOURCE_DIR} FILES ${THIRDPARTY_FILES})

# Add boost support
if (Boost_FOUND)
	message("Boost VERSION: ${Boost_VERSION}")
    message("Boost INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message("Boost Boost_LIBRARY_DIRS: ${Boost_LIBRARY_DIRS}")

	target_link_libraries(${PROJECT_NAME} PUBLIC 
		Boost::headers 
		Boost::diagnostic_definitions 
		Boost::dynamic_linking
		Boost::log
		Boost::filesystem
		Boost::random
		Boost::thread
		Boost::iostreams
		Boost::json
		Boost::chrono
		Boost::date_time
		Boost::locale
		)
endif()

# Add openssl support
if (OPENSSL_FOUND)
	include_directories(${OPENSSL_INCLUDE_DIR})
	target_link_libraries(${PROJECT_NAME} PUBLIC OpenSSL::SSL)
endif()

# Add http request ability support
include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
                         GIT_TAG 871ed52d350214a034f6ef8a3b8f51c5ce1bd400) # The commit hash for 1.9.0. Replace with the latest from: https://github.com/libcpr/cpr/releases
FetchContent_MakeAvailable(cpr)
add_definitions(-DWITH_HTTP_REQUEST)
target_link_libraries(${PROJECT_NAME} PUBLIC cpr::cpr)

# Add project export classes defintion
add_definitions(-DMIRAI_NATIVE_API_EXPORT)

# Add project public include path
target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_SOURCE_DIR}/Source/Public")