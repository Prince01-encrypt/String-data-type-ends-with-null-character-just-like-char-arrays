#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#define ll long long
 
using namespace std;
 
int main() {
    string arr;
    cin >> arr;
    int count[26] = {0};

    for(int i = 0; arr[i] != '\0'; i++) {
        count[arr[i] - 'a']++;
    }
    int match = 0;

    for(int i = 0; i < 26; i++) {
        if(count[i] > 0) {
            match++;
        }
    }

    if(match % 2 == 0)  cout << "CHAT WITH HER!";
    else    cout << "IGNORE HIM!";
    
    cout << "\n";
    return 0;
}
