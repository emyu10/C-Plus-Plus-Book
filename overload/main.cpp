// demonstrates function overloading
#include <iostream>

using namespace std;

void repchar();
void repchar(char);
void repchar(char, int);

int main()
{
    repchar();
    repchar('=');
    repchar('+', 30);
    return 0;
}

/**
 * prints a line of 45 asterisks
 */
void repchar()
{
    for (int j = 0; j < 45; j++) {
        cout << "*";
    }
    cout << endl;
}

/**
 * prints argument char for 45 times in a single line
 */
void repchar(char ch)
{
    for (int j = 0; j < 45; j++) {
        cout << ch;
    }
    cout << endl;
}

/**
 * prints passed character for passed number of times in a single line
 */
void repchar(char ch, int n)
{
    for (int j = 0; j < n; j++) {
        cout << ch;
    }
    cout << endl;
}
