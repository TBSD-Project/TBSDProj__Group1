#include "songs.h"
#include <iostream>

using namespace std;

// Constructors
Song::Song() {
    title = "";
    artist = "";
    album = "";
    timePlayed = 0;
}

Song::Song(string t, string ar, string al, int d) {
    title = t;
    artist = ar;
    album = al;
    timePlayed = d;
}

// Getters
string Song::getTitle() const { return title; }
string Song::getArtist() const { return artist; }
string Song::getAlbum() const { return album; }
int Song::getPlaycount() const { return timePlayed; }

// Setters
void Song::setTitle(string t) { title = t; }
void Song::setArtist(string ar) { artist = ar; }
void Song::setAlbum(string al) { album = al; }
void Song::setPlaycount(int d) { timePlayed = d; }

// Other
void Song::display() {
    cout << "Title: " << title << endl;
    cout << "Artist: " << artist << endl;
    cout << "Album: " << album << endl;
    cout << "Play Count: " << timePlayed << endl;
}

void Song::incrementPlayCount() {
    timePlayed++;
}