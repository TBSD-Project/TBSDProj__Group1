#include <iostream>
#include "playlistManager.h"
#include "songs.h"

using namespace std;

/*
CHANGED AND REVERTED CONFLICTING FILES


*/


int main() {

    PlaylistManager manager;

    PlaylistManager::Playlist playlist;
    playlist.name = "My Playlist";

    Song song1;
    song1.name = "Blinding Lights";

    Song song2;
    song2.name = "God's Plan";

    manager.addSong(playlist, song1);
    manager.addSong(playlist, song2);

    manager.renamePlaylist(playlist, "Favorite Songs");

    cout << "Playlist: " << playlist.name << endl;

    for (int i = 0; i < playlist.songs.size(); i++) {
        cout << playlist.songs[i].name << endl;
    }

    return 0;
}