// =================================
//     Логические выражения
// =================================

/*************************
 * bool - логический тип *
 *************************
 *
 * bool используется исключительно для хранения результатов логических выражений.
 * У логического выражения может быть один из двух результатов true или false.
 * true — если логическое выражение истинно,
 * false — если логическое выражение ложно.
 * Значение true  хранится как 1
 * Значение false хранится как 0
 */

/*************************
 * Логические операторы  *
 *************************
 > (больше)
 < (меньше)
 == (равно)
 != (не равно)
 >= (больше или равно)
 <= (меньше или равно)

 !Воспринимайте любую логическую операцию как утверждение. Утверждение может быть либо Истинным(true), либо Ложным(false)
 2 == 2 - Истина
 2 > 4  - Ложь
 * */

// Пример:

#include "iostream"
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int a = -2, b = 4;
//    TODO: Раскомментируйте блок кода, чтобы ввести исходные данные с клавиатуры:
//    cout << "a = ";
//    cin >> a;
//    cout << "b = ";
//    cin >> b;
    cout << "a = " << a << " b = " << b << endl;
    cout << "Напоминаю: 1 - true, 0 - false" << endl;
    cout << "a > 0 --> " << (a > 0) << endl; // При подстановке в поток Вывода, логические операции заключаем в скобки
    cout << "b > 0 --> " << (b > 0) << endl;
    cout << "a < b --> " << (a < b) << endl;
    cout << "a + 6 == b --> " << (a + 6 == b) << endl; // У логических операторов приоритет ниже, чем у математических
    cout << "a != b --> " << (a != b) << endl;
    cout << "a != b --> " << ((a != b) ? "true" : "false") << endl; // А еще можно делать так. Но это уже совсем друга истори-)
}

// TODO: Поэкспериментируйте с кодом приведенным выше. Добавьте операторы "больше или равно", "меньше или равно".
// TODO: Попробуйте составить более сложные выражения