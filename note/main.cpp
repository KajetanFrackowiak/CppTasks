#include <iostream>
#include <list>

class YouToubeChannel {
private:
    std::string Name;
    std::string ownerName;
    int SubscribersCount;
    std::list<std::string> PublishedVideoTitles;

public:
    YouToubeChannel(const std::string& name, const std::string& ownerName): SubscribersCount(0) {
    }

    static void GetInfo() {
    }

    void Subscribe() {
        SubscribersCount++;
    }

    void Unsubscibe() {
        SubscribersCount--;
    }

    void PublishVideo(const std::string& title) {
        PublishedVideoTitles.push_back(title);
    }
};

int main() {
    YouToubeChannel ytChannel("CodeBeauty", "Saldina");
    ytChannel.PublishVideo("C++ for begginers");
    ytChannel.PublishVideo("HTML & CSS for beginners");
    ytChannel.PublishVideo("C++ OOP");
    ytChannel.Subscribe();
    ytChannel.GetInfo();

    system("pause>0");
}
