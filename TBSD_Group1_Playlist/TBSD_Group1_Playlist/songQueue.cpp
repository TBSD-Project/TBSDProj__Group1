#include "songQueue.h"
#include <iostream>
using namespace std;

// Add song to queue
void SongQueueManager::addSongToQueue(vector<Song>& queue, const Song& song) {
    queue.push_back(song);
    cout << "Song added to queue: " << song.getTitle() << endl;
}

// Remove song from queue (front)
void SongQueueManager::removeSongFromQueue(vector<Song>& queue) {
    if (queue.empty()) {
        cout << "Queue is empty. Nothing to remove." << endl;
        return;
    }

    cout << "Removed: " << queue.front().getTitle() << endl;
    queue.erase(queue.begin());
}

// Reorder queue
void SongQueueManager::reorderQueue(vector<Song>& queue, int oldIndex, int newIndex) {
    if (oldIndex < 0 || oldIndex >= queue.size() ||
        newIndex < 0 || newIndex >= queue.size()) {
        cout << "Invalid index." << endl;
        return;
    }

    Song temp = queue[oldIndex];
    queue.erase(queue.begin() + oldIndex);
    queue.insert(queue.begin() + newIndex, temp);

    cout << "Queue reordered." << endl;
}

// Display queue
void SongQueueManager::displayQueue(const vector<Song>& queue) {
    if (queue.empty()) {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "\n--- Song Queue ---" << endl;
    for (int i = 0; i < queue.size(); i++) {
        cout << i << ". " << queue[i].getTitle()
            << " - " << queue[i].getArtist() << endl;
    }
}

// Play next song
Song SongQueueManager::playNextSong(vector<Song>& queue) {
    if (queue.empty()) {
        cout << "Queue is empty. No song to play." << endl;
        return Song(); // return default song
    }

    Song current = queue.front();
    queue.erase(queue.begin());

    cout << "Now playing: " << current.getTitle() << endl;

    // increment play count
    current.incrementPlayCount();

    return current;
}

// Clear queue
void SongQueueManager::clearQueue(vector<Song>& queue) {
    queue.clear();
    cout << "Queue cleared." << endl;
}