
add_library(text_lib basic_text.cpp text.hpp)

target_include_directories(text_lib
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )