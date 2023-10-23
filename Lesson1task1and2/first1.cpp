#include <iostream>

using namespace std;

class Checker {
    int num;

public:
    explicit Checker(int num) {
        this->num = num;
    }


    void taskA() const {
        if (this->num >= 0 && this->num <= 100 || this->num >= 1000 && this->num <= 1100) {
            printf("Yes, %d is within the given range", this->num);
        } else {
            printf("No, %d isn't within the given range", this->num);
        }

    }

    void taskB() const {
        int i = this->num;
        if (i % 2 == 0) {
            printf("Yes, %d is divisible by 2\n", this->num);
        }
        if (i % 3 == 0) {
            printf("Yes, %d is divisible by 3\n", this->num);
        }
        if (i % 4 == 0) {
            printf("Yes, %d is divisible by 4\n", this->num);
        }
        if (i % 5 == 0) {
            printf("Yes, %d is divisible by 5\n", this->num);
        }
        if (i % 6 == 0) {
            printf("Yes, %d is divisible by 6\n", this->num);
        }
        if (i % 7 == 0) {
            printf("Yes, %d is divisible by 7\n", this->num);
        }
    }

    void taskC() const {
        int hundreds = this->num / 100;
        int dozens = this->num / 10;
        int unities = this->num;
        printf("%d has :\n"
               "%d hundreds\n"
               "%d dozens\n"
               "%d unities\n", this->num, hundreds, dozens, unities);
    }

    void taskD() const {
        switch (this->num) {
            case 0:
                printf("It's Sunday\n");
                break;
            case 1:
                printf("It's Monday\n");
                break;
            case 2:
                printf("It's Tuesday\n");
                break;
            case 3:
                printf("It's Wednesday\n");
                break;
            case 4:
                printf("It's Thursday\n");
                break;
            case 5:
                printf("It's Friday\n");
                break;
            case 6:
                printf("It's Saturday\n");
                break;
            default:
                printf("Day of week not found\n");
                break;
        }
    }
};

void introductionA() {
    int num;
    printf("Give any number of integers:\n");
    cin >> num;
    Checker checker = *new Checker(num);
    checker.taskA();
}

void introductionB() {
    int num;
    printf("Write a number and I'll tell you if the number is divisible by 1, 2, 3, 4, 5, 6 and 7:\n");
    cin >> num;
    Checker checker = *new Checker(num);
    checker.taskB();
}

void introductionC() {
    int num;
    printf("Give me a number and I'll tell you what the number of hundreds, tens and unities of the number is:\n");
    cin >> num;
    Checker checker = *new Checker(num);
    checker.taskC();
}

void introductionD() {
    int num;
    printf("Write the day of the week in the form of integer and I'll in the form of string\n");
    cin >> num;
    Checker checker = *new Checker(num);
    checker.taskD();
}

int main() {

//    introductionA();
//    introductionB();

// zmienic by miec dziesiatki
//    introductionC();
//    introductionD();

    return 0;
}
