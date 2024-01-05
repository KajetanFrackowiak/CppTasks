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

int getMin(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}

int getMax(const int numbers[], int size) {
    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int main() {
    // YouToubeChannel ytChannel("CodeBeauty", "Saldina");
    // ytChannel.PublishVideo("C++ for begginers");
    // ytChannel.PublishVideo("HTML & CSS for beginners");
    // ytChannel.PublishVideo("C++ OOP");
    // ytChannel.Subscribe();
    // ytChannel.GetInfo();

    int numbers[5] = {5,4,-2,29,6};
    std::cout << "Min is: " << getMin(numbers, 5) << std::endl;
    std::cout << "Max is: " << getMax(numbers, 5) << std::endl;
    // system("pause>0");
    return 0;
}
