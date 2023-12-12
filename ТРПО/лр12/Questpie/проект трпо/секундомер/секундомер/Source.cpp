#include <iostream>
#include <chrono>

using namespace std;

int main() {
    cout << "Press enter to start the timer!" << endl;
    cin.get();
    auto start = chrono::steady_clock::now();
    cout << "Press enter to stop the timer!" << endl;
    cin.get();
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, milli>(diff).count() << " ms" << endl;
    return 0;
}