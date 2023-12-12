#include <iostream>


void main() {
	float x = 3, y;
	y = x * x + sin(x);
	std::cout << y;
}


/*
void main() {
	double t, u, k = 4, a = 4.1, x = 5e-5;
	t = 2 * tan(k) / a + log(3 + x) + exp(x);
	u = sqrt(t + 1) - sin(x) * cos(t);
	std::cout << "t=" << t;
	std::cout << "u=" << u;
}
*/


/*Вариант 8*/
/*
void main() {
	double s, t, x = 0.1, j = 12, y = 5e-6;
	s = 0.4 * x - 1 / j * tan(y);
	t = s - sin(s);
	std::cout << "s=" << s << std::endl;
	std::cout << "t=" << t << std::endl;
}
*/


/*Вариант 11*/
/*
void main() {
	double w, d, a = 1.5, x = -1.8, z = 15e-9;
	w = tan(1) * (1 + x) + z + exp(a);
	d = 9 * sqrt(2 - 3 * x) + abs(a + 1);
	std::cout << "w=" << w << std::endl;
	std::cout << "d=" << d << std::endl;
}
*/


/*Дополнительно*/

/*Вариант 7*/
/*
void main() {
	double y, w, x = 1.4, m = 6, z = 0.05e-5;
	y = sqrt(1 + x) - cos(2 / m);
	w = 0.6 * z - 2 * exp(-2 * y * m);
	std::cout << "y=" << y << std::endl;
	std::cout << "w=" << w << std::endl;
}
*/


/*Вариант 2*/
/*
void main() {
	double z, y, n = 2, b = -0.12, x = 1.3e-4;
	z = 1 / (x - 1) + sin(x) - sqrt(n);
	y = (exp(-b) + 1) / (2 * z);
	std::cout << "z=" << z << std::endl;
	std::cout << "y=" << y << std::endl;
}
*/


/*Вариант 14*/
/*
void main() {
	double s, w, v, a = 1.5, b = -8.1, j = 4, t = 4e-8;
	s = sqrt(t * (a / t) + 1) + 4 * exp(2 * b);
	w = s * a / (1 + 0.1 * a);
	v = s + j * sqrt(pow(a, 2) + pow(b, 2));
	std::cout << "s=" << s << std::endl;
	std::cout << "w=" << w << std::endl;
	std::cout << "v=" << v << std::endl;
}
*/