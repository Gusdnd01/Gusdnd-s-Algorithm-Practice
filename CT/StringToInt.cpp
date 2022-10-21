#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    if (s[0] == '-') {
        vector<char> index;
        for (int i = 1; i < s.size(); i++) {
            index.push_back(s[i]);
        }
        for (int i = 0; i < index.size(); i++) {
            s[i] = index[i];
        }

        s[s.size() - 1] = 0;

        answer = stoi(s) * -1;
    }
    else {
        answer = stoi(s);
    }
    
    return answer;
}