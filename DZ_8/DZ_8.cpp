#include <string>
#include <iostream>

using namespace std;

int main() {
    string S = "hello world. hello step. hello it.";
    string S0 = "hello";
    cout << S << endl;

    size_t pos = S.find(S0);

    if (pos < S.length()) {
        S.erase(pos, S0.length());
    }
    cout << S << endl;

    return 0;
}