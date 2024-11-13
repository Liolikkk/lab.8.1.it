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
                return i; // Знайшли третю крапку, повертаємо її індекс
            }
        }
    }
    return -1; // Якщо менше трьох крапок
}

char* ReplaceEveryFourth(char* dest, const char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if ((i + 1) % 4 == 0) { // Кожен четвертий символ
            dest[i] = '.';
        }
        else {
            dest[i] = str[i]; // Копіюємо символ, якщо це не кожен четвертий
        }
    }
    dest[length] = '\0'; // Завершуємо рядок
    return dest;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    // Знаходження індексу третьої крапки
    int thirdDotIndex = FindThirdDot(str);
    if (thirdDotIndex != -1) {
        cout << "Index of the third dot: " << thirdDotIndex << endl;
    }
    else {
        cout << "There are less than three dots in the string." << endl;
    }

    // Заміна кожного четвертого символу на крапку
    char dest[101];
    ReplaceEveryFourth(dest, str);
    cout << "Modified string: " << dest << endl;

    return 0;
}
