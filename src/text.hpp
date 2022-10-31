#ifndef TEXT_LIB
#define TEXT_LIB

#include <string>

struct Pos {
    int line;
    int column;
};

struct Text {
    virtual ~Text() = default;
    virtual std::string get_whole_text() = 0;
    virtual void insert_string(std::string, Pos pos) = 0;
    virtual void delete_char(Pos pos) = 0;
};
#endif
