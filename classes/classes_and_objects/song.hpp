#include <string>

class Song {
    std::string title;
    std::string artist;

    // public: To make these functions available outside of the file
    public:
        // Constructor being set up to take in pre-defined values
        Song(std::string new_title, std::string new_artist);
        // Deconstructor being set up to destroy the constructor
        ~Song();

        void add_title(std::string new_title);
        std::string get_title();

        void add_artist(std::string new_artist);
        std::string get_artist();
};