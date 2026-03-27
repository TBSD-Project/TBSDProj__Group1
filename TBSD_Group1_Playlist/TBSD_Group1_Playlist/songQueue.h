#pragma once

#include <vector>
#include "songs.h"

using namespace std;

class SongQueueManager {
public:
    void addSongToQueue(vector<Song>& queue, const Song& song);
    void removeSongFromQueue(vector<Song>& queue);
    void reorderQueue(vector<Song>& queue, int oldIndex, int newIndex);
};

