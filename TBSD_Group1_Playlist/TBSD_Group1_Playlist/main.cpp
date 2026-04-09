#include <iostream>
#include "playlistManager.h"
#include "songs.h"
#include "displayManager.h"

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
   {
    // Create a song
    Song song1("Blinding Lights", "The Weeknd", "After Hours", 5);

    // Create display manager
    DisplayManager dm;

    // Display song info
    dm.displayTitle(song1);
    dm.displayArtist(song1);
    dm.displayAlbum(song1);
    dm.displayTimesPlayed(song1);

    cout << endl;

    // Test missing artist
    Song song2("Unknown Song", "", "", 0);

    dm.displayTitle(song2);
    dm.displayArtist(song2);  // should show "Unknown Artist"
    dm.displayAlbum(song2);   // should show "Unknown Album"
    dm.displayTimesPlayed(song2);

    return 0;

    }