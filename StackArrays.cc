#include "StackArrays.h"

StackArrays::StackArrays(){
    number = 0;
}
StackArrays::~StackArrays(){
    delete songsPointers[0];
    delete songsPointers[1];
    delete songsPointers[2];
}
Song* StackArrays::getObjectArray(){
    return songs;
}
Song** StackArrays::getPointerArray(){
    return songsPointers;
}
void StackArrays::addSong(Song& s){
    if(number >= ARR_SIZE){
        cout <<"The array is full"<<endl;
    }
    songs[number] = s;
    Song* s1 = new Song(s);
    songsPointers[number] = s1;
    ++number;
}