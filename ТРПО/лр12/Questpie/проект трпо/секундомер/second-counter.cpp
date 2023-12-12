#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>

bool triger=true;
void trigchange() { triger = !triger; }

int main()
{
	auto start = std::chrono::steady_clock::now();
	
	
		while (true)
		{

		
			if (_kbhit() && _getch() == 32)
				 break;

		auto end = std::chrono::steady_clock::now();
		auto diff = end - start;
		system("cls");
		std::cout << "press space to stop: " << std::endl;
		std::cout << "Time elapsed: "
			<< ceil(std::chrono::duration <double, std::milli>(diff).count()/1000)-1
			<< " s" << std::endl;

		std::this_thread::sleep_for(std::chrono::seconds(1));
		
	}
		system("pause");
	return 0;
}
