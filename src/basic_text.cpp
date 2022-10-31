
#include "text.hpp"

struct BasicText : Text {
    BasicText(std::string str) : m_str{ str } {};
    ~BasicText() {};
    std::string get_whole_text() override {
        return m_str;
    }
    void insert_string(std::string, Pos pos) override {}
    void delete_char(Pos pos) override {}
    private:
    std::string m_str;
};
