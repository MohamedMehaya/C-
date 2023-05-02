#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    
    if(n <= 1){
        cout << "NONE" << endl;
        return -1;
    }
    
    bool found = false;
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            cout << i << endl;
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << n << endl;
    }

    return 0;
}
