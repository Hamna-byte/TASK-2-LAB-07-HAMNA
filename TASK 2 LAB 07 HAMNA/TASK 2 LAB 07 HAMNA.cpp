#include <iostream>
using namespace std;
int main() {
    int hours[10];
    int maxHours = 0, max = 0;
    cout << "Enter the number of hours studied by 10 students:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> hours[i];
        if (hours[i] > maxHours) {
            maxHours = hours[i];
            max = i;
        }
    }
    cout << "Number of hours studied by each student:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Student " << i + 1 << ": " << hours[i] << " hours" << endl;
    }
    cout << "STUDENT " << max + 1 << " STUDIED THE MOST WITH " << maxHours << " HOURS." << endl;
    return 0;
}