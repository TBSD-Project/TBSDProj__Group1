#include <stdio.h>
#include <string.h>
#include "playlistManager.h"

void createPlaylist(Playlist* p, char name[]) {
    strcpy(p->playlistName, name);
    p->songCount = 0;
}

void addSongToPlaylist(Playlist* p, char artist[], char song[]) {

    if (p->songCount >= MAX_SONGS) {
        printf("Playlist is full\n");
        return;
    }

    strcpy(p->songs[p->songCount].artistName, artist);
    strcpy(p->songs[p->songCount].songName, song);
    p->songs[p->songCount].timesPlayed = 0;

    p->songCount++;
}

void removeSongFromPlaylist(Playlist* p, int index) {

    if (index < 0 || index >= p->songCount) {
        printf("Invalid song index\n");
        return;
    }

    for (int i = index; i < p->songCount - 1; i++) {
        p->songs[i] = p->songs[i + 1];
    }

    p->songCount--;
}

void deletePlaylist(Playlist* p) {
    p->songCount = 0;
}

void renamePlaylist(Playlist* p, char newName[]) {
    strcpy(p->playlistName, newName);
}

void displayPlaylist(Playlist* p) {

    printf("Playlist: %s\n", p->playlistName);

    for (int i = 0; i < p->songCount; i++) {
        printf("%d. %s - %s (Played %d times)\n",
            i + 1,
            p->songs[i].artistName,
            p->songs[i].songName,
            p->songs[i].timesPlayed);
    }
}