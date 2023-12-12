#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


string getLine(string);
int getInt(string);

string concat(string, string);
string mult(int, string);
int find(string, string);
string del(string, string);


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Это строковый калькулятор. Список доступных операций:" << endl
		<< "[+] Обединение строк." << endl
		<< "[*] Повторение строки заданное число раз." << endl
		<< "[?] Поиск подстроки в строке." << endl
		<< "[-] Удаление подстроки из строки." << endl << endl;

	char operation;
	cout << "Укажите операцию: "; cin >> operation;
	cin.ignore();

	switch (operation) {
	case '+': {
		string first = getLine("Введите первую строку: ");
		string second = getLine("Введите вторую строку: ");
		cout << endl;
		string result = concat(first, second);
		cout << "Результат объединения строк: " << result << endl;
		break;
	}
	case '*': {
		string str = getLine("Введите строку: ");
		int n = getInt("Введите число повторений: ");
		cout << endl;
		string result = mult(n, str);
		cout << "Результат повторения строки: " << result << endl;
		break;
	}
	case '?': {
		string str = getLine("Введите строку: ");
		string substr = getLine("Введите подстроку: ");
		cout << endl;
		int substr_start = find(substr, str);
		int substr_end = substr_start + substr.length();
		if (substr_start == -1) {
			cout << "Строка не содержит введенную подстроку!" << endl;
		}
		else {
			cout << "Подстрока найдена на позиции " << substr_start << ":" << endl;
			cout << str << endl;
			for (int i = 0; i < str.length(); i++) {
				cout << (i >= substr_start && i < substr_end ? "^" : "~");
			}
			cout << endl;
		}
		break;
	}
	case '-': {
		string str = getLine("Введите строку: ");
		string substr = getLine("Введите подстроку: ");
		cout << endl;
		string result = del(substr, str);
		cout << "Результат удаления подстроки: " << result << endl;
		break;
	}
	default: {
		cout << "Неизвестная операция!" << endl;
	}
	}

	return 0;
}


// Запрашивает у пользователя ввод строки выводя переданный текст
string getLine(string input_text) {
	string user_input;
	cout << input_text;
	getline(cin, user_input);
	return user_input;
}


// Запрашивает у пользователя ввод целого числа выводя переданный текст
int getInt(string input_text) {
	int user_input;
	cout << input_text;
	cin >> user_input;
	return user_input;
}


// Объединяет две строки
string concat(string lhs, string rhs) {
	return lhs + rhs;
}


// Повторяет строку заданное число раз
string mult(int n, string str) {
	string mult_result = "";
	for (; n > 0; n--) {
		mult_result += str;
	}
	return mult_result;
}


// Находит начало подстроки в строке
int find(string substr, string str) {
	return str.find(substr);
}


// Удаляет подстроку из строки
string del(string substr, string str) {
	int substr_start = find(substr, str);
	int substr_end = substr_start + substr.length();
	string del_result = "";
	for (int i = 0; i < str.length(); i++) {
		if (i < substr_start || i >= substr_end) {
			del_result += str[i];
		}
	}
	return del_result;
}
