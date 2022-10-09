#include "HeapArrays.h"

HeapArrays::HeapArrays(){
    number = 0;
    songs = new Song[ARR_SIZE];
    songsPointers = new Song*[ARR_SIZE];
}
HeapArrays::~HeapArrays(){
    delete []songs;
    delete songsPointers[0];
    delete songsPointers[1];
    delete songsPointers[2];
    delete []songsPointers;
}
Song* HeapArrays::getObjectArray(){
    return songs;
}
Song** HeapArrays::getPointerArray(){
    return songsPointers;
}
void HeapArrays::addSong(Song& s){
    if(number >= ARR_SIZE){
        cout <<"The array is full"<<endl;
    }
    songs[number] = s;
    Song* s1 = new Song(s);
    songsPointers[number] = s1;
    ++number;
}