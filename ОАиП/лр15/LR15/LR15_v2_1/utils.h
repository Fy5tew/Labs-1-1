#pragma once


// Получить случайное число из промежутка
int random(int min, int max);

// Создать пустой массив
int* createEmptyArray(int length);

// Создать пустую матрицу
int** createEmptyMatrix(int n, int m);

// Заполнить массив случайными числами
void generateRandomArray(int* arr, int length, int min, int max);

// Заполнить матрицу случайными числами
void generateRandomMatrix(int** matrix, int n, int m, int min, int max);

// Вывести массив
void showArray(int* arr, int length);

// Вывести матрицу
void showMatrix(int** matrix, int n, int m);

// Освободить память массива
void del(int* arr);

// Освободить память матрицы
void del(int** matrix, int n);
