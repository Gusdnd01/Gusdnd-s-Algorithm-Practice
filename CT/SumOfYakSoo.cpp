#include <iostream>

using namespace std;

int solution(int num){
    int answer = 0;
    int arr[30];

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            answer += i;
        }
        else{
            continue;
        }
    } 
    return answer;
}