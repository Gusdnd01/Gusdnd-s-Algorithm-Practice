#include <iostream>
#include <string>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int sum = 0;
    string a = to_string(n);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
        
        sum += (a[i] - 48);
    }

    answer = sum;
    return answer;
}