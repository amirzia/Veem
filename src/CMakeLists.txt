
add_library(text_lib basic_text.cpp text.hpp)

target_include_directories(text_lib
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

add_executable(veem veem.cc)
target_link_libraries(veem -lncurses)