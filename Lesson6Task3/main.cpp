#include <iostream>
#include <limits>
using namespace std;

int main() {
    int size = 10;
    int *arr1 = new int[size];
    int *arr2 = new int[size];
    int arrSumSize = size*2 + 2;
    int *arrSum = new int [arrSumSize];

    for (int i = 0; i < size; i++) {
        cout << "Write integer to your first array:" << endl;
        int num;
        cin >> num;
        while (cin.fail() || cin.peek() != '\n') {
            // resetuje flage bledow
            cin.clear();
            // sluzy do wyczyszczenia bufora wejsciowego ignorujac znaki az do napotkania znaku nowej linii
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> num;
        }
        arr1[i] = num;
    }
    for (int i = 0; i < size; i++) {
        cout << "Write integer to your second array:" << endl;
        int num;
        cin >> num;
        while (cin.fail() || cin.peek() != '\n') {
            // resetuje flage bledow
            cin.clear();
            // sluzy do wyczyszczenia bufora wejsciowego ignorujac znaki az do napotkania znaku nowej linii
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> num;
        }
        arr2[i] = num;
    }

    for (int i = 0; i < arrSumSize ; i++) {
        arrSum += arr1[i] + arr2[i];
    }

    for (int i = 0; i < 2; i++) {
        int num;
        cin >> num;
        while (cin.fail() || cin.peek() != '\n') {
            // resetuje flage bledow
            cin.clear();
            // sluzy do wyczyszczenia bufora wejsciowego ignorujac znaki az do napotkania znaku nowej linii
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> num;
        }
        arrSum[-i] = num;
    }

    for (int i = 0; i < arrSumSize; i++) {
        cout << arrSum[i] << " ";
    }

//    delete arr1 [];
//    delete arr2 [];
//    delete arrSum [];
    return 0;
}
