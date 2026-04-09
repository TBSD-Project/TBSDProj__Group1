#include "playlistManager.h"
#include <algorithm>

void PlaylistManager::removePlaylist(Playlist& playlist) {
    playlist.songs.clear();
}

void PlaylistManager::addSong(Playlist& playlist, const Song& song) {
    playlist.songs.push_back(song);
}

void PlaylistManager::removeSong(Playlist& playlist, int index) {

    if (index >= 0 && index < playlist.songs.size()) {
        playlist.songs.erase(playlist.songs.begin() + index);
    }

}

void PlaylistManager::reorderSong(Playlist& playlist, int oldIndex, int newIndex) {

    if (oldIndex >= 0 && oldIndex < playlist.songs.size() &&
        newIndex >= 0 && newIndex < playlist.songs.size()) {

        Song temp = playlist.songs[oldIndex];

        playlist.songs.erase(playlist.songs.begin() + oldIndex);
        playlist.songs.insert(playlist.songs.begin() + newIndex, temp);
    }

}

void PlaylistManager::renamePlaylist(Playlist& playlist, string newName) {
    playlist.name = newName;
}

void PlaylistManager::sortPlaylistByName(Playlist& playlist) {

    sort(playlist.songs.begin(), playlist.songs.end(),
        [](Song a, Song b) {
            return a.name < b.name;
        });

}