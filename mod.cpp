#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int runedTime = 0;
    while (true) {

        int counter = 0;

        // get number from user
        int input = -1;
        cin >> input;

        // if entered number was 0 or program runed more than 100 times, the program will be terminated
        if (input == 0 or runedTime > 100) {
            break;

        } else if (input > 0) {
            double sqrNumber = sqrt(input);
            int typeCasted = sqrNumber;

            for (int i=1; i<=typeCasted; i++) {
                if (input%i == 0) {
                    counter++;
                }
            }
            counter = counter*2;
            if (typeCasted == sqrNumber) {
                counter--;
            }
        }
        cout << counter << endl;
        runedTime++;
    }
    return 0;
}

