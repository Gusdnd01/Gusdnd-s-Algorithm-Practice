#include<iostream>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << solution(4);

    return 0;
}

char* solution(int num) {
    char* answer;
    
    if(num % 2 == 0){
        answer = "Even";
    }
    else{
        answer = "Odd";
    }

    answer = (char*)malloc(5);
    return answer;
}