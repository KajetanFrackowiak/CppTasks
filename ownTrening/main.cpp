#include <iostream>
#include <list>
#include <utility>
// add strucutres, classes, pointers. From next lesson 8.12 won't be check obecnosc. musi byc obiektowy projekt i wachlasz, co c++ oferuje
// polimorfizm, hermetyzacja, dziedziczenia,

class OtherClass : public YoutubeChannel {
    void addVideo(const std::string& videoTitle) override {
        std::cout << " " << std::endl;
    }
};

class YoutubeChannel {
public:
    std::string Name;
    std::string OwnerName;
    int subscibersCount;
    std::list<std::string> PublishedVideo;

    // Constructor
    YoutubeChannel(std::string name, std::string ownerName): subscibersCount(0) {
         this->Name = std::move(name);
         this->OwnerName = std::move(ownerName);
     }

    // Destructor
    ~YoutubeChannel() { 
        
    }

     static void printList(const std::list<std::string>&list) {
        for (const std::string& element : list) {
            std::cout << element << ", ";
        }
        std::cout << std::endl;
    }
     
    virtual void addVideo(const std::string& videoTitle) {
        PublishedVideo.push_back(videoTitle);
    }

    void GetInfo() const {
        std::cout << "Name: " << this->Name << std::endl;
        std::cout << "Owner name: " << this->OwnerName << std::endl;
        std::cout << "Subscribers count: " << this->subscibersCount << std::endl;
        std::cout << "Published videos: ";
        printList(this->PublishedVideo);
    }
};

int main() {
    YoutubeChannel youtubeChanel("Hania", "Kajetan");

    youtubeChanel.PublishedVideo = {"c"};
    youtubeChanel.addVideo("c++");

    for (const std::string& title : youtubeChanel.PublishedVideo) {
        std::cout << title << " ";
    }

    youtubeChanel.GetInfo();
    return 0;
}