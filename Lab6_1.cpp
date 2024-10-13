/****************************************************
* Автор: Алексеев Д.К.                              *
* Дата: 13.10.2024                                  *
* Название: Лаба 6 использования процедур и функций *
****************************************************/
#include<iostream>
#include<cmath>

using namespace std ;

int sumOfAbs(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += abs(arr[i]) ;
    }
    
    return sum ;
}

int main() {
    const int k = 6 ;
    const int n = 3 ;
    const int m = 7 ;
    
    int x[k] = {1, 4, 5, 32, -3, 12} ;
    int y[n] = {-8, 0, -2} ;
    int z[m] = {8, 1, 2, -7, 3, -6, 15} ;
    
    cout << "Сумма модулей элементов массива X: " << sumOfAbs(x, k) << endl ;
    cout << "Сумма модулей элементов массива Y: " << sumOfAbs(y, n) << endl ;
    cout << "Сумма модулей элементов массива Z: " << sumOfAbs(z, m) << endl ;

    return 0 ;
}