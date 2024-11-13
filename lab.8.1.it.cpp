#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int FindThirdDot(char* str) {
    int dotCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            dotCount++;
            if (dotCount == 3) {
                return i; // ������� ����� ������, ��������� �� ������
            }
        }
    }
    return -1; // ���� ����� ����� ������
}

char* ReplaceEveryFourth(char* dest, const char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if ((i + 1) % 4 == 0) { // ����� ��������� ������
            dest[i] = '.';
        }
        else {
            dest[i] = str[i]; // ������� ������, ���� �� �� ����� ���������
        }
    }
    dest[length] = '\0'; // ��������� �����
    return dest;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    // ����������� ������� ������ ������
    int thirdDotIndex = FindThirdDot(str);
    if (thirdDotIndex != -1) {
        cout << "Index of the third dot: " << thirdDotIndex << endl;
    }
    else {
        cout << "There are less than three dots in the string." << endl;
    }

    // ����� ������� ���������� ������� �� ������
    char dest[101];
    ReplaceEveryFourth(dest, str);
    cout << "Modified string: " << dest << endl;

    return 0;
}
