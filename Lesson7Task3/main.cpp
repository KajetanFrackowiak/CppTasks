#include <iostream>
#include <limits>

using namespace std;

struct Student {
    string name;
    string surname;
    int index;
};

int main()
{
    Student students[3];  // Students array
    students[0] = {"Kajetan", "Zurawki"};
    students[1].name = "Jan";
    students[1].surname = "Frackowiak";
    students[2] = {"Krzysztow", "Nowak", 021231123};

    Student *doctor = new Student;
    (*doctor).name = "Mateusz";
    (*doctor).surname = "Kowalski";
    doctor -> index = 21321312;

    Student *user = new Student;
    string name;
    string surname;
    int index;
    cout << "Please write name your dear student:" << endl;
    cin >> name;
    while (cin.fail() || cin.peek() != '\n') {
        cout << "Please write corrent string:" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> name;
    }
    user -> name = name;

    cout << "Please write surname your dear student:" << endl;
    cin >> surname;
    while (cin.fail() || cin.peek() != '\n') {
        cout << "Please write corrent string:" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> surname;
    }
    user -> surname = surname;

    cout << "Please write index your dear student:" << endl;
    cin >> index;
    while (cin.fail() || cin.peek() != '\n') {
        cout << "Please write corrent string:" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> index;
    }
    user -> index = index;

    cout << user->name << " " << user->surname << " " << user->index;
    return 0;
}
