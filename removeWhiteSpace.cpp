#include <iostream>

using namespace std;

int main()
{
    string text = "";
    getline(cin, text);

    string answer = "";
    bool reachedToSpace = false;
    char chr;
    int lenText = text.length();
    for (int i=0; i<lenText; i++) {

        chr = text[i];
        if (chr == ' ' and !reachedToSpace) {
            reachedToSpace = true;
            answer += ' ';
        } else if (chr != ' ' and reachedToSpace)
            reachedToSpace = false;

        if (chr == ' ' and reachedToSpace)
            continue;

        answer += chr;
    }

    cout << answer << endl;
    return 0;
}
