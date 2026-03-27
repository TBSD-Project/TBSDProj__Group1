#pragma once

#include "songs.h"

class DisplayManager {

public:
    void displayArtist(const Song& song);
    void displayAlbum(const Song& song);
    void displayTimesPlayed(const Song& song);

};
