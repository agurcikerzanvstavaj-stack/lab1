#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "=== Меню задач ===" << endl;
    cout << "1. Задача Begin 44 (|a - b|)" << endl;
    cout << "2. Рух човна" << endl;
    cout << "3. Задача Begin 8 (середнє арифметичне)" << endl;
    cout << "Оберіть номер задачі: ";
    cin >> choice;

    if (choice == 1) {
        double a, b, d, result;
        cout << "Введіть число a: ";
        cin >> a;
        cout << "Введіть число b: ";
        cin >> b;

        d = a - b;
        if (d >= 0)
            result = d;
        else
            result = -d;

        cout << "Різниця за модулем |a - b| = " << result << endl;
    }
    else if (choice == 2) {
        double V, U, T1, T2;
        double S1, S2, S;

        cout << "Введіть швидкість човна у стоячій воді V (км/год): ";
        cin >> V;
        cout << "Введіть швидкість течії річки U (км/год, U < V): ";
        cin >> U;
        cout << "Введіть час руху по озеру T1 (год): ";
        cin >> T1;
        cout << "Введіть час руху проти течії T2 (год): ";
        cin >> T2;

        S1 = V * T1;
        S2 = (V - U) * T2;
        S  = S1 + S2;

        cout << "Шлях по озеру: " << S1 << " км" << endl;
        cout << "Шлях проти течії: " << S2 << " км" << endl;
        cout << "Загальний шлях: " << S << " км" << endl;
    }
    else if (choice == 3) {
        double a, b, avg;
        cout << "Введіть число a: ";
        cin >> a;
        cout << "Введіть число b: ";
        cin >> b;

        avg = (a + b) / 2;
        cout << "Середнє арифметичне: " << avg << endl;
    }
    else {
        cout << "Неправильний вибір!" << endl;
    }

    return 0;
}
