#include <iostream>
#include <thread>
#include <chrono>

#include "../include/lib.hpp"
using namespace std;
using namespace liba;
int main() {
    int n;

    cout << "Enter an odd >= 3 ";
    cin >> n;

    if (n >= 3  && n % 2 == 0) {
        cout << "an odd num > 3 is required\n";
        return 1;
    }

    clear();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            goTo(3 + i * 2, 5 + j * 6);
            cout << magicValue(n, i, j);
            cout.flush();

            this_thread::sleep_for(chrono::milliseconds(100));
        }
    }

    goTo(5 + n * 2, 1);

    return 0;
}