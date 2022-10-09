#ifndef HEAPARRAYS_H
#define HEAPARRAYS_H

#include "defs.h"
#include <iostream>
#include <string>
#include "Song.h"
using namespace std;

class HeapArrays{
    public:
        HeapArrays();
        ~HeapArrays();
        Song* getObjectArray();
        Song** getPointerArray();
        void addSong(Song&);
    private:
        Song* songs;
        Song** songsPointers;
        int number;
};
#endif