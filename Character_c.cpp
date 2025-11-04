#include "Character_c.h"
#include <string>
#include <random>

using namespace std;

Character::Character(int int_row, int int_column, string string_name)
{
    row = int_row;
    column = int_column;
    name = string_name;
    has_flag = false;

}

void Character::set_row(int new_row)
{
    row = new_row;
}

void Character::set_column(int new_column)
{
    column = new_column;
}

void Character::set_name(string new_name)
{
    name = new_name;
}

void Character::change_flag()
{
    has_flag = !has_flag;
}

void Character::move()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(-1,1);

    int row_chg = dist(gen);
    int column_chg = dist(gen);

    row = row + row_chg;
    column = column + column_chg;

    //ensure character doesn't leave the board
    if(row<0)
        row = 0;

    if (row>5)
        row = 5;

    if (column<0)
        column = 0;

    if (column>5)
        column = 5;
}

void Character::teleport()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0,5);

    row = dist(gen);
    column = dist(gen);
}

bool Character:: operator == (const Character& c1)
{
    return(c1.get_row() == row && c1.get_column() == column);
}
