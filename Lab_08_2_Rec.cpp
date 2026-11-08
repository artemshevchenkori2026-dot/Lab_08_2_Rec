// Lab_08_2_Rec.cpp
// Варіант 29
// Лабораторна робота № 8.2
// Опрацювання літерних рядків.
// Сканування рядка рекурсивним способом.

#include <iostream>
#include <string>

using namespace std;

// Рекурсивна функція підрахунку кількості слів, що починаються з літери 'b' або 'B'
size_t CountWordsStartingWithB(const string& s, size_t start = 0) {
    // Шукаємо початок слова (перший символ, що не є пробілом)
    start = s.find_first_not_of(" ", start);

    // Базовий випадок: якщо більше немає слів у рядку
    if (start == string::npos) {
        return 0;
    }

    // Перевіряємо, чи починається поточне слово з літери 'b' або 'B'
    size_t count = (s[start] == 'b' || s[start] == 'B') ? 1 : 0;

    // Знаходимо кінець поточного слова (наступний пробіл)
    size_t finish = s.find_first_of(" ", start);

    // Якщо це було останнє слово в рядку
    if (finish == string::npos) {
        return count;
    }

    // Рекурсивний виклик для решти рядка
    return count + CountWordsStartingWithB(s, finish);
}

int main() {
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "Number of words starting with 'b': " << CountWordsStartingWithB(str) << endl;

    return 0;
}