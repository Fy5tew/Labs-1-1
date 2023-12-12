#pragma once


// �������� ��������� ����� �� ����������
int random(int min, int max);

// ������� ������ ������
int* createEmptyArray(int length);

// ������� ������ �������
int** createEmptyMatrix(int n, int m);

// ��������� ������ ���������� �������
void generateRandomArray(int* arr, int length, int min, int max);

// ��������� ������� ���������� �������
void generateRandomMatrix(int** matrix, int n, int m, int min, int max);

// ������� ������
void showArray(int* arr, int length);

// ������� �������
void showMatrix(int** matrix, int n, int m);

// ���������� ������ �������
void del(int* arr);

// ���������� ������ �������
void del(int** matrix, int n);
