#ifndef SONG_H
#define SONG_H

#include <string>
using namespace std;

class Song {
private:
    string title;
    string artist;
    string album;
    int length; // in seconds

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

    // will display the songs 
    void display();
};

#endif
#pragma once
