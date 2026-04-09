#include "displayManager.h"
#include <iostream>
using namespace std;

void DisplayManager::displayArtist(const Song& song) {
    if (song.getArtist().empty()) {
        cout << "Artist: Unknown Artist" << endl;
    }
    else {
        cout << "Artist: " << song.getArtist() << endl;
    }
}

void DisplayManager::displayAlbum(const Song& song) {
    if (song.getAlbum().empty()) {
        cout << "Album: Unknown Album" << endl;
    }
    else {
        cout << "Album: " << song.getAlbum() << endl;
    }
}

void DisplayManager::displayTimesPlayed(const Song& song) {
    cout << "Times Played: " << song.getPlaycount() << endl;
}

void DisplayManager::displayTitle(const Song& song) {
    cout << "Title: " << song.getTitle() << endl;
}