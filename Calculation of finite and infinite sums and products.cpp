////Topic 5. Calculation of finite and infinite sums and products.
// 
////Exercise 1.
////5)
////      1     1     1          1
//// 1 + --  + -- +  -- + ... + --
////     √1    √2    √3         √n
// 
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//
//using namespace std;
//
//int main() 
// {
//
//    int n;
//    cout << "Enter n: ";
//    cin >> n;
//
//    if (n <= 0) {
//        cout << "The number must be natural(greater 0)\n";
//        return 1;
//    }
//
//    double sum = 1.0;
//    for (int i = 1; i <= n; ++i) {
//        sum += 1.0 / sqrt(i);
//    }
//
//    cout << fixed << setprecision(4);
//    cout << "Sum = " << sum << "\n";
//
//    return 0;
//}
// 
////Exercise 2.
////5)S = ∑ от n = 1 до k ((-1)^(n+1) * x^(2n-1)) / (2n - 1)!.
//
//#include <iostream>
//#include <cmath>
//#include <iomanip>
//
//using namespace std;
//
//long double factorial(int n) 
//{
//    if (n == 0) return 1;
//    long double result = 1;
//    for (int i = 1; i <= n; ++i) {
//        result *= i;
//    }
//    return result;
//}
//
//int main() 
//{
//
//    int k;
//    double x;
//    cout << "Enter k: ";
//    cin >> k;
//    cout << "Enter x: ";
//    cin >> x;
//
//    if (k <= 0) {
//        std::cout << "The number must be natural (greater 0)\n";
//        return 1;
//    }
//
//    long double sum = 0;
//    for (int n = 1; n <= k; ++n) {
//        long double numerator = pow(-1, n + 1) * pow(x, 2 * n - 1);
//        long double denominator = factorial(2 * n - 1);
//        sum += numerator / denominator;
//    }
//
//    cout << fixed << setprecision(10);
//    cout << "Result S = " << sum << "\n";
//
//    return 0;
//}
// 
////Exercise 3
////5)S = ∑ от n = 1 до ∞ (5/((i+1)(i-1)))
// 
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//
//int main() 
//{
//    setlocale(LC_ALL, "Russian");
//
//    // Ввод точности вычислений
//    double e;
//    std::cout << "Введите точность вычислений e (e > 0): ";
//    std::cin >> e;
//
//    // Проверка корректности ввода
//    if (e <= 0) {
//        std::cout << "Точность должна быть больше 0\n";
//        return 1;
//    }
//
//    // Вычисление суммы
//    double sum = 0;
//    int i = 2; // начинаем с i = 2, так как при i = 1 знаменатель обращается в 0
//    double currentTerm = 5.0 / ((i + 1) * (i - 1));
//
//    while (std::abs(currentTerm) >= e) {
//        sum += currentTerm;
//        i++;
//        currentTerm = 5.0 / ((i + 1) * (i - 1));
//    }
//
//    // Вывод результата
//    std::cout << std::fixed << std::setprecision(10);
//    std::cout << "Сумма ряда S = " << sum << "\n";
//    std::cout << "Количество просуммированных членов: " << i - 2 << "\n";
//
//    return 0;
//}
// 
//Exercise 4. 
//Вычислить и вывести на экран значение функции F(x) на отрезке[a, b] с шагом
//h = 0.1 и точностью E. Результат работы программы представить в виде 
//следующей таблицы:
//№  |Значение x |Значение функции F(x) | Количество просуммированных слагаемых n|
//1  |___________|______________________|________________________________________|
//2  |___________|______________________|________________________________________|
//...|___________|______________________|________________________________________|
// __|___________|______________________|________________________________________|
//                x      x ^ 2   x ^ 3   x ^ 4
//5) F(x) = 1 + ------ - ----- + ----- - ----- + ..., x ∈ [0.1; 0.9].
//              1 * 4    2 * 5   3 * 6   4 * 7
//
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//
//using namespace std;
//
//double calculateF(double x, double epsilon) 
//{
//    double sum = 1.0;
//    double term = 1.0;
//    int n = 0;
//
//    while (fabs(term) > epsilon) {
//        n++;
//        term = pow(-1, n) * pow(x, n) / (n * (n + 3));
//        sum += term;
//    }
//
//    return sum;
//}
//
//int main() 
//{
//
//    const double a = 0.1;
//    const double b = 0.9;
//    const double step = 0.1;
//    const double epsilon = 0.0001;
//
//    cout << "Number\tValue of x\tValue of F(x)\tNumber of summed members\n";
//
//    for (double x = a; x <= b; x += step) {
//        double result = calculateF(x, epsilon);
//        int n = 0;
//
//        double term = 1.0;
//        while (fabs(term) > epsilon) {
//            n++;
//            term = pow(-1, n) * pow(x, n) / (n * (n + 3));
//        }
//
//        cout << fixed << setprecision(4);
//        cout << (x - a) / step + 1 << "\t" << x << "\t\t" << result << "\t\t" << n << "\n";
//    }
//
//    return 0;
//}