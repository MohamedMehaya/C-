#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string s;
    getline(cin, s);
    int c=0;
    string s2="";

    for(int i=0;i<s.length();i++){
        if(std::isdigit(s[i])){
            c+=s[i] - '0';
        }else {
            s2+=s[i];
        }
    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << s2 << endl;
    cout << c << endl;
}
