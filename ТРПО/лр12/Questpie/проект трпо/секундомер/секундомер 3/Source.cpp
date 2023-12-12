#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>

int main()
{
    auto start = std::chrono::steady_clock::now();

    while (true)
    {
        if (kbhit() && getch() == 32)
            break;

        auto end = std::chrono::steady_clock::now();
        auto diff = end - start;

        std::cout << "Time elapsed: "
            << std::chrono::duration <double, std::milli>(diff).count()
            << " ms" << std::endl;

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}