#pragma once

#include <vector>
#include "songs.h"

using namespace std;

class PlaylistManager {
public:
    // removes the entire playlist
    void removePlaylist(vector<Song>& playlist);

    // modify playlist options
    void addSong(vector<Song>& playlist, const Song& song);
    void removeSong(vector<Song>& playlist, int index);
    void reorderSong(vector<Song>& playlist, int oldIndex, int newIndex);
};