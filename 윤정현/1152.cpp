#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s, tmp = "";
    vector<string> word;
    getline(cin, s);

    for (char c : s) {
        if (c == ' ') {
            if (tmp == "") continue;
            word.push_back(tmp);
            tmp = "";
        } else
            tmp += c;
    }

    if (tmp != "") word.push_back(tmp);

    cout << word.size() << "\n";

    return 0;
}
