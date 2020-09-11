cmake_minimum_required(VERSION 3.10)

# set the project name
project(Proxy)
set(CMAKE_C_STANDARD 11)

find_package(PkgConfig REQUIRED)
pkg_search_module(GLIB REQUIRED glib-2.0)
pkg_search_module(LIBUV REQUIRED libuv)
include_directories(${GLIB_INCLUDE_DIRS})
link_directories(${GLIB_LIBRARIES})
link_directories(${LIBUV_LIBRARIES})


# add the executable
add_executable(client client.c common.h log.h)
target_link_libraries(client PUBLIC ${GLIB_LIBRARIES})
target_link_libraries(client PUBLIC ${LIBUV_LIBRARIES})
