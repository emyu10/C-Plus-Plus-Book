// replay
// gets four ages from user, displays them
#include <iostream>

using namespace std;

int main()
{
    int age[4];
    for (int j = 0; j < 4; j++) {
        cout << "Enter an age: ";
        cin >> age[j];
    }

    for (int j = 0; j < 4; j++) {
        cout << "You entered " << age[j] << endl;
    }
    return 0;
}
