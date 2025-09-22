#include <iostream>
#include <cmath>   // для fabs()
using namespace std;

int main() {
    // === Задача 1. Begin 44 (|a - b|) ===
    double a, b, result;
    cout << "=== Задача 1: |a - b| ===" << endl;
    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть число b: ";
    cin >> b;

    result = fabs(a - b);   // модуль різниці
    cout << "Різниця за модулем |a - b| = " << result << endl << endl;

    // === Задача 2. Рух човна ===
    double V, U, T1, T2;
    double S1, S2, S;

    cout << "=== Задача 2: Рух човна ===" << endl;
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
    cout << "Загальний шлях: " << S << " км" << endl << endl;

    // === Задача 3. Begin 8 (середнє арифметичне) ===
    double c, d, avg;
    cout << "=== Задача 3: Середнє арифметичне ===" << endl;
    cout << "Введіть число a: ";
    cin >> c;
    cout << "Введіть число b: ";
    cin >> d;

    avg = (c + d) / 2;
    cout << "Середнє арифметичне: " << avg << endl;

    return 0;
}
