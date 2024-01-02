#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct Student {
    string firstName;
    string lastName;
    int studentNumber;
};

int main() {
    int maxStudents = 100; // Define an initial maximum number of students

    Student* studentList = new Student[maxStudents]; // Create a dynamic array

    int studentCount = 0; // Keep track of the number of students

    while (true) {
        cout << "Menu:\n";
        cout << "1. Add a student\n";
        cout << "2. Display the list of students\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";

        int option;
        cin >> option;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please choose a valid option.\n";
            continue;
        }

        switch (option) {
            case 1:
                if (studentCount < maxStudents) {
                    cout << "First Name: ";
                    cin >> studentList[studentCount].firstName;
                    cout << "Last Name: ";
                    cin >> studentList[studentCount].lastName;


                    if (!(cin >> studentList[studentCount].studentNumber)) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Invalid input. Please enter a valid student number.\n";
                        continue;
                    }

                    studentCount++;

                    // Check if the array needs to be resized
                    if (studentCount == maxStudents) {
                        maxStudents *= 2; // Double the maximum size
                        Student* newStudentList = new Student[maxStudents];
                        for (int i = 0; i < studentCount; i++) {
                            newStudentList[i] = studentList[i];
                        }
                        delete[] studentList;
                        studentList = newStudentList;
                    }
                } else {
                    cout << "Maximum number of students reached.\n";
                }
                break;

            case 2:
                cout << "List of Students:\n";
                for (int i = 0; i < studentCount; i++) {
                    cout << "Student " << i + 1 << ": First Name: " << studentList[i].firstName
                          << ", Last Name: " << studentList[i].lastName
                          << ", Student Number: " << studentList[i].studentNumber << endl;
                }
                break;

            case 3:
                delete[] studentList;
                return 0;

            default:
                cout << "Invalid option. Please choose again.\n";
        }
    }

    return 0;
}
