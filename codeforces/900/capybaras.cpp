#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();

        if((s[0] == 'a' && s[1] == 'a') || (s[0] == 'b' && s[1] == 'b') || (s[0] == 'b' && s[1] == 'a')){
            cout << s[0] << " " << s[1] << " ";
            for(int i = 2; i<n; i++){
                cout << s[i];
            }
            cout << endl;
        }
        else{
            bool found = false;
            int pos = 0;
            for(int i = 2; i<n; i++){
                if(s[i] == 'a'){
                    found = true;
                    pos = i;
                }
            }

            if(found){
                cout << s[0] << " ";
                for(int i = 1; i<pos; i++){
                    cout << s[i];
                }
                cout << " ";
                for(int i = pos; i<n; i++){
                    cout << s[i];
                }
                cout << endl;
            }
            else{
                for(int i = 0; i<n-2; i++){
                    cout << s[i];
                }
                cout << " " << s[n-2] << " " << s[n-1] << endl;
            }
        }
    }
    return 0;
}
