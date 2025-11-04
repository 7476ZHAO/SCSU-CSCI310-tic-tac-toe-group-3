#ifndef CHARACTER_C_H
#define CHARACTER_C_H

#include <string>

class Character
{
    private:
        int row;
        int column;
        std::string name;
        bool has_flag;
    
    public:
    
    Character(int int_row, int int_column, std::string string_name);

    int get_row() const {return row;}
    int get_column() const {return column;}
    std::string get_name() const {return name;}
    bool check_flag() const {return has_flag;}

    void set_row (int new_row);
    void set_column (int new_column);
    void set_name (std::string new_name);
    void change_flag ();

    void move ();
    void teleport ();

    bool operator == (const Character& c1);
};
#endif