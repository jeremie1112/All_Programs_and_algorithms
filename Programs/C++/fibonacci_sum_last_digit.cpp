#include <iostream>
//we can use two things in this problem
//1. S(n) =  F(n+2) - 1
//2. Pisano Period of 10 is 60
int get_fibonacci_last_digit(int n) {
    if (n <= 1)
    {
        return n;
    }

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {

       int tmp_previous = previous;
       previous = current % 10;
       current = (tmp_previous + current)%10;
    }
    if(current == 0)
    {
        current = 10;
    }

    return current;
}


int main() {
    long long int n;
    std::cin >> n;
    n = n % 60;
    std::cout << get_fibonacci_last_digit(n+2) - 1;
}
