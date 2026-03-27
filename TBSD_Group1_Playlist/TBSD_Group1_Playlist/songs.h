#pragma once

#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;
    string album;
    int timePlayed; 

public:
    // default constructor
    Song();
    //
    Song(string t, string ar, string al, int d);

    // Getters
    string getTitle();
    string getArtist();
    string getAlbum();
    int getLength();

    // Setters
    void setTitle(string t);
    void setArtist(string ar);
    void setAlbum(string al);
    void setLength(int d);

    // will display the songs 
    void display();


};

