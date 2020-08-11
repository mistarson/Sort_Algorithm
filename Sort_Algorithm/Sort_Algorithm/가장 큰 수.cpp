#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    return (a + b > b + a) ? true : false;
}

int main() {
    vector<int> array = { 1,5,2,6,3,4,7,10 };
    string answer = "";
    vector<string> strings;

    for (int i : array) {
        strings.push_back(to_string(i));
    }
    sort(strings.begin(), strings.end(), compare);

    for (auto i : strings) {
        answer += i;
    }

    if (answer[0] == '0')
        answer = "0";
    cout << answer;


}