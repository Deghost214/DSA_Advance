#include <iostream>
#include <string>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i, n;
        n = s.size();
        int moves = 0;
        int open1 = 0, open2 = 0;
        for(i = 0; i < n; i++){
            if(s[i] == '('){
                open1++;
            }
            else if(s[i] == '['){
                open2++;
            }
            else if(s[i] == ')'){
                if(open1 >= 1){
                    moves++;
                    open1--;
                }
            }
            else if(s[i] == ']'){
                if(open2 >= 1){
                    moves++;
                    open2--;
                }
            }
        }
        cout << moves << endl;
    }
    return 0;
}
