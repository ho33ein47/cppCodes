#include <iostream>

using namespace std;

int main()
{
    int mat [4][4];
    bool isTriangle = true;

    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            cin >> mat[i][j];
            if (i > j and mat[i][j] != 0) {
                isTriangle = false;
            }
        }
    }

    if (isTriangle) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}

