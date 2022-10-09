#include "Song.h"

Song::Song(const string& title, const string& artist, const string& content){
    this->title = title;
    this->artist = artist;
    this->content = content;
}
Song::Song(){
    this->title = "";
    this->artist = "";
    this->content = "";
}
Song::Song(const Song& s){
    this->title = s.title;
    this->artist = s.artist;
    this->content = "A message from the RCMP about violating copyright infringement";
}
Song::~Song(){

}
string Song::getArtist(){
    return artist;
}
string Song::getTitle(){
    return title;
}
bool Song::matches(const string& artist, const string& title){
    if(artist.compare(artist) == 0){
        if(title.compare(title) == 0){
            return true;
        }
    }
    return false;
}

void Song::print(){
    cout<<"Title is: "<<getTitle()<<endl;
    cout << "Artist is: "<<getArtist()<<endl;
    
}
void Song::play(){
    print();
    
    cout<<"Content is "<< this->content<<endl;
}
