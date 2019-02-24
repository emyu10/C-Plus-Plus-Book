// linesin
// reads multiple lines, terminates on '$' character
#include <iostream>

using namespace std;

const int MAX = 2000;
char str[MAX];

int main()
{
    cout << "Enter a string: " << endl;
    cin.get(str, MAX, '$');
    cout << "You entered: " << endl << str << endl;
    return 0;
}
