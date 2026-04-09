#include <iostream>
using namespace std;

/*
CHANGED AND REVERTED CONFLICTING FILES


*/


int main() {

    Playlist myPlaylist;

    createPlaylist(&myPlaylist, "My Playlist");

    addSongToPlaylist(&myPlaylist, "Drake", "God's Plan");
    addSongToPlaylist(&myPlaylist, "The Weeknd", "Blinding Lights");

    displayPlaylist(&myPlaylist);

    return 0;
}