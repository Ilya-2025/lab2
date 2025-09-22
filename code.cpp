#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Инициализируем генератор случайных чисел
    srand(time(0));
    
    // Создаем три файла
    ofstream file1("file1.txt");
    ofstream file2("file2.txt");
    ofstream file3("file3.txt");
    
    // Проверяем, успешно ли открыты файлы
    if (!file1.is_open() || !file2.is_open() || !file3.is_open()) {
        cout << "Ошибка при создании файлов!" << endl;
        return 1;
    }
    
    // Записываем случайные числа в каждый файл
    for (int i = 0; i < 10; i++) {
        file1 << (rand() % 10 + 1);
        if (i < 9) file1 << " ";
    }
    file1.close();
    
    for (int i = 0; i < 10; i++) {
        file2 << (rand() % 10 + 1);
        if (i < 9) file2 << " ";
    }
    file2.close();
    
    for (int i = 0; i < 10; i++) {
        file3 << (rand() % 10 + 1);
        if (i < 9) file3 << " ";
    }
    file3.close();
    
    cout << "Файлы успешно созданы и заполнены случайными числами!" << endl;
    
    return 0;
}
