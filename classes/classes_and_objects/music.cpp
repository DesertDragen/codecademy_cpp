#include <iostream>
#include "song.hpp"

int main() {
    /*
    Song electric_relaxation;
    electric_relaxation.add_title("Electric Relaxation");
    std::cout << "Song Title: " << electric_relaxation.get_title() << "\n";

    electric_relaxation.add_artist("A Tribe Called Quest");
    std::cout << "Artist: " << electric_relaxation.get_artist() << "\n";
    */

   // Adding pre-defined values to the constructor
    Song back_to_black("Back to Black", "Amy Winehouse");
    std::cout << "Song Title: " << back_to_black.get_title() << "\n";
    std::cout << "Artist: " << back_to_black.get_artist() << "\n";
}