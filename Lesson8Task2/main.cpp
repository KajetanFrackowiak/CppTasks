#include <iostream>

class QueueNode {
public:
    int data;
    QueueNode* next;

    QueueNode(int value) : data(value), next(nullptr) {}
};

class Queue {
private:
    QueueNode* front;
    QueueNode* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(int value) {
        QueueNode* newNode = new QueueNode(value);
        if (rear == nullptr) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    void dequeue() {
        if (front == nullptr) {
            std::cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        QueueNode* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear == nullptr;
        }
        delete temp;
    }

    void display() {
        QueueNode* current = front;
        std::cout << "Queue: ";
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};


int main() {
    Queue myQueue;
    int choose = 0;

    while (choose != 4) {
        std::cout << "Write what would you like to do: 1-enqueue, 2-dequeue, 3-display, 4-end:" << std::endl;
        std::cin >> choose;

        switch (choose) {
            case 1: {
                std::cout << "Write number that you want to add on queue:" << std::endl;
                int num;
                std::cin >> num;
                myQueue.enqueue(num);
                break;
            }
            case 2:
                myQueue.dequeue();
            break;
            case 3:
                myQueue.display();
            break;
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
        }
    }
    return 0;
}
