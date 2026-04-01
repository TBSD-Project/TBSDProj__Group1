#pragma once

#include <vector>
#include <string>
#include "songs.h"

using namespace std;

class PlaylistManager {
public:
    class Playlist {
    public:
        string name;
        vector<Song> songs;
    };

    void removePlaylist(Playlist& playlist);

    void addSong(Playlist& playlist, const Song& song);
    void removeSong(Playlist& playlist, int index);
    void reorderSong(Playlist& playlist, int oldIndex, int newIndex);
    void renamePlaylist(Playlist& playlist, string newName);
    void sortPlaylistByName(Playlist& playlist);
};