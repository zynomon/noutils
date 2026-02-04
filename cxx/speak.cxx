#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++) {
        string text = argv[i];
        cout << (text.empty() ? "There might be issues like no input given" : text) << '\n';
    }
    return 0;
}
