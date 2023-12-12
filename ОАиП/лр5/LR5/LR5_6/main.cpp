#include <iostream>
using namespace std;


int main() {
	setlocale(LC_CTYPE, "Russian");

	char answer;
	cout << "Добрый день! Хотите зарегистрироваться на конкурс? (y/n): "; cin >> answer;

	switch (answer) {
	case 'n': 
		cout << "Хорошо, до свидания!" << endl; 
		break;
	case 'y':
		char firstName[60], lastName[60];
		int age;
		cout << "Хорошо, введите ваше имя: "; cin >> firstName;
		cout << "Укажите вашу фамилию: "; cin >> lastName;
		cout << "Ваш возраст: "; cin >> age;
		cout << "Вы успешно зарегистрировались на конкурс, " << lastName << " " << firstName << "!" << endl;
		break;
	default:
		cout << "Я не знаю такой команды!" << endl;
	}

	return 0;
}