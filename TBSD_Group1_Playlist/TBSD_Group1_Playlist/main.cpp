#include <iostream>
#include "playlistManager.h"
#include "songs.h"
#include "displayManager.h"
#include "songQueue.h"

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
   {
       SongQueueManager sqm;
       vector<Song> queue;

       Song s1("Song A", "Artist A", "Album A", 0);
       Song s2("Song B", "Artist B", "Album B", 0);
       Song s3("Song C", "Artist C", "Album C", 0);

       sqm.addSongToQueue(queue, s1);
       sqm.addSongToQueue(queue, s2);
       sqm.addSongToQueue(queue, s3);

       sqm.displayQueue(queue);

       cout << endl;

       sqm.playNextSong(queue);   // plays Song A
       sqm.displayQueue(queue);

       cout << endl;

       sqm.reorderQueue(queue, 1, 0);
       sqm.displayQueue(queue);

       cout << endl;

       sqm.clearQueue(queue);
       sqm.displayQueue(queue);

       return 0;
   }
   