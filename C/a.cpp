#include <iostream>
using namespace std;

int main(){
    int t, arr[26], i, n, j;
    char *str;
    cin >> t;
    while (t--){
        for (i=0; i<26; i++){
            cin >> arr[i];
        }
        cin >> n;
        char str[n][10];
        for (i=0; i<n; i++){
            cin >> str[i];    
        }
        for (i=0; i<n; i++){
            for (j=0; j<10; j++){
                cin >> str[i][j];
            }
            cout << endl;
        }
    }
}