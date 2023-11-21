#include <iostream>

class StackNode {
public:
    int data;
    StackNode* next;

    StackNode(int value) : data(value), next(nullptr) {}
};

class Stack {
private:
    StackNode* top;

public:
    Stack() : top(nullptr) {}

    void push(int value) {
        StackNode* newNode = new StackNode(value);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr) {
            std::cout << "Stack is empty. Cannot pop.\n";
            return;
        }

        StackNode* temp = top;
        top = top->next;
        delete temp;
    }

    void display() {
        StackNode* current = top;
        std::cout << "Stack: ";
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack myStack;
    int choose = 0;

    while (choose != 4) {
        std::cout << "Write what would you like to do: 1-push, 2-pop, 3-display, 4-end:" << std::endl;
        std::cin >> choose;

        switch (choose) {
            case 1: {
                std::cout << "Write number that you want to add on stack:" << std::endl;
                int num;
                std::cin >> num;
                myStack.push(num);
                break;
            }
            case 2:
                myStack.pop();
            break;
            case 3:
                myStack.display();
            case 4:
                std::cout << "Good bye. :)" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
        }
    }

    return 0;
}
