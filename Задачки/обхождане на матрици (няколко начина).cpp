#include <iostream>
using namespace std;
void print3(int[5][5]);
void print4(int[5][5]);
void print5(int[5][5]);
void print6(int[5][5]);
const int MAX = 100;

void print3(int mat[5][5])
{
    const int size = 5;
    // ����������� ������ "������������" �� ��� �����
    for (int d = 0; d < size; d++)
       for (int i = 0; i <= d; i++)
            cout << mat[d - i][i] << " ";

    for (int d = 4; d > 0; d--)
        for (int i = 0; i < d; i++)
            cout << mat[size - 1 - i][size - d + i] << " ";
    cout << endl;
}

void print4(int mat[5][5])
{
    const int size = 5;
    // ���������� �� ����������, ������ ��������� ����������� ��-����
    for (int d = 0; d < size; d++)
        for (int i = 0; i <= d/2; i++)
            cout << mat[d - i][i] << " ";

    for (int d = 4; d > 0; d--)
        for (int i = 0; i < (d + 1)/2; i++)
            cout << mat[size - 1 - i][size - d + i] << " ";
    cout << endl;
}

void print5(int mat[5][5])
{
    const int size = 5;
    // ����� �������� �����, ����� �����������, � �� ��� �������������� �����
    for (int line = 0; line < size; line++)
    {
        // ����� ��������������...
        for (int i = 0; i < line + 1; i++)
            cout << mat[line][i] << " ";
        // ...����� ������������
        for (int i = 0; i < line; i++)
            cout << mat[line - 1 - i][line] << " ";
    }
    cout << endl;
}

void print6(int mat[5][5])
{
    const int size = 5, mid = size / 2;
    cout << mat[mid][mid] << " ";
    // ��� ����� �������� ����� �� �������� "��������"
    // � �� � ��������� �� 4 ������ �����
    for (int lap = 1; lap <= mid; lap++)
    {
        for (int i = 0; i < 2 * lap; i++)
            cout << mat[mid - lap][mid + 1 - lap + i] << " ";
        for (int i = 0; i < 2 * lap; i++)
            cout << mat[mid + 1 - lap + i][mid + lap] << " ";
        // ���������� - ������� � ���������� "����" �� ���������� �� ������� ��� ������ mid
        for (int i = 0; i < 2 * lap; i++)
            cout << mat[mid + lap][mid - (1 - lap + i)] << " ";
        for (int i = 0; i < 2 * lap; i++)
            cout << mat[mid - (1 - lap + i)][mid - lap] << " ";
    }
    cout << endl;
}

int main()
{
    int a[MAX][MAX];
 	int m, n;
 	cout << "m = "; cin >> m;
    int mat3[5][5] = { {1,3,6,10,15},{2,5,9,14,19},{4,8,13,18,22},{7,12,17,21,24},{11,16,20,23,25} };
    int mat4[5][5] = { {1,0,0,0,0},{2,4,0,0,0},{3,6,9,0,0},{5,8,11,13,0},{7,10,12,14,15} };
    int mat5[5][5] = { {1,4,9,16,25},{2,3,8,15,24},{5,6,7,14,23},{10,11,12,13,22},{17,18,19,20,21} };
    int mat6[5][5] = { {25,10,11,12,13},{24,9,2,3,14},{23,8,1,4,15},{22,7,6,5,16},{21,20,19,18,17} };

    print3(mat3); // �������� ������� 1-25
    print4(mat4); // �������� ������� 1-15
    print5(mat5); // �������� ������� 1-25
    print6(mat6); // �������� ������� 1-25
}
