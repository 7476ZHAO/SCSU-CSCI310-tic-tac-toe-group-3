#include "Character_c.h"
#include <iostream>

int main() {
    // Create a character at position (0,0) with name "Hero"
    Character hero(0, 0, "Hero");

    std::cout << "Initial position of " << hero.get_name() 
              << ": (" << hero.get_row() << ", " << hero.get_column() << ")\n";

    // Move the character randomly
    hero.move();
    std::cout << "After move: (" << hero.get_row() << ", " << hero.get_column() << ")\n";

    // Teleport the character randomly
    hero.teleport();
    std::cout << "After teleport: (" << hero.get_row() << ", " << hero.get_column() << ")\n";

    // Test flag
    std::cout << "Has flag? " << (hero.check_flag() ? "Yes" : "No") << "\n";
    hero.change_flag();
    std::cout << "After change_flag(): " << (hero.check_flag() ? "Yes" : "No") << "\n";

    // Create another character and test operator==
    Character enemy(3, 3, "Enemy");
    std::cout << "Is hero at same position as enemy? "
              << (hero == enemy ? "Yes" : "No") << "\n";

    return 0;
}
