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
    Song();
    Song(string t, string ar, string al, int d);

    // Getters
    string getTitle() const;
    string getArtist() const;
    string getAlbum() const;
    int getPlaycount() const;

    // Setters
    void setTitle(string t);
    void setArtist(string ar);
    void setAlbum(string al);
    void setPlaycount(int d);

    void display();
    void incrementPlayCount();
};