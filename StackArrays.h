#ifndef STACKARRAYS_H
#define STACKARRAYS_H

#include "defs.h"
#include <iostream>
#include <string>
#include "Song.h"

using namespace std;
class StackArrays{
    public:
        StackArrays();
        ~StackArrays();
        Song* getObjectArray();
        Song** getPointerArray();
        void addSong(Song&);
    private:
        Song songs[ARR_SIZE];
        Song* songsPointers[ARR_SIZE];
        int number;
};
#endif