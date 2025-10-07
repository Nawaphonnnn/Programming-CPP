#include <iostream>
#include <string>

using namespace std;

int main() {
    int score = 0;
    cout << "Input score: ";
    cin >> score;

    if (score >= 80) {
        cout << "A" << endl;
    }
    if (score >= 75) {
        cout << "B+" << endl;
    }
    if (score >= 70) {
        cout << "B" << endl;
    }
    if (score >= 65) {
        cout << "c+" << endl;
    }
    if (score >= 60) {
        cout << "B" << endl;
    }
    if (score >= 55) {
        cout << "D+" << endl;
    }
    if (score >= 50) {
        cout << "D" << endl;
    }
    if (score < 50) {
        cout << "E" << endl;
    }
    return 0;
}
