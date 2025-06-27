#include <iostream>
using namespace std;

long long calculateDifference(long long A, long long B) {
    long long N = B - A + 1;
    long long pairs = N / 2;
    long long sum = 0;
    long long first_term = 2*B - 1;
    long long last_term = (N % 2 == 0) ? (2*A + 1) : (2*(A+1) + 1);
    long long num_terms = pairs;
    
    sum = num_terms * (first_term + last_term) / 2;
    
    if (N % 2 != 0) {
        sum += A * A;
    }
    
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long A, B;
    cin >> A >> B;
    
    cout << calculateDifference(A, B) << endl;
    
    return 0;
}