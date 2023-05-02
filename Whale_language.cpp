#include<iostream>
#include<vector>
#include <string>
#include <set>

std::vector<char> process_string(const std::string& input) {
    std::set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::vector<char> result;

    for (char ch : input) {
        if (vowels.count(ch) > 0) {
            result.push_back(ch);
            if (ch == 'e' || ch == 'u') {
                result.push_back(ch);
            }
        }
    }

    return result;
}

int main() {
    std::string input = "turpentine and turtles";
    std::vector<char> result = process_string(input);

    for (char ch : result) {
        std::cout << ch;
    }
}
