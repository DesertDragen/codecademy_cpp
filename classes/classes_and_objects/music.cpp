#include <iostream>
#include "song.hpp"

int main() {
    Song electric_relaxation;
    electric_relaxation.add_title("Electric Relaxation");
    std::cout << "Song: " << electric_relaxation.get_title();

    electric_relaxation.add_artist("A Tribe Called Quest");
    std::cout << "\nArtist: " << electric_relaxation.get_artist();
}