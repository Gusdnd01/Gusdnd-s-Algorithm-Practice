#include <iostream>
#include <string>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    for (long long i = 0; i <= n; i++) {
        if (i * i == n) {
            answer = (i + 1) * (i + 1);
            return answer;
        }
        else {
            continue;
        }
    }

    answer = -1;

    return answer;
}