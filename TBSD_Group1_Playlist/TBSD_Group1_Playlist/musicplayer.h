#pragma once
#ifndef MUSIC_PLAYER_H
#define MUSIC_PLAYER_H

#define MAX_LENGTH 100

/* Song structure */
typedef struct {
    char artistName[MAX_LENGTH];
    char songName[MAX_LENGTH];
    int timesPlayed;
} Song;

/* Queue structure */
typedef struct {
    Song songs[50];
    int front;
    int rear;
} Queue;

/* Playlist structure */
typedef struct {
    Song songs[100];
    int count;
} Playlist;

#endif