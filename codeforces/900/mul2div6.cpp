#include <iostream>
using namespace std;

int steps(int n){
    int count = 0;

    if(n == 1){
        return 0;
    }
    int moves = 0;
    while(n>1){
        if(n%6 == 0){
            n = n/6;
            moves ++;
        }
        else if(n%3 == 0){
            n = n*2;
            moves++;
        }
        else{
            return -1;
        }
        if(moves > 100){
            return -1;
        }
    }
    return moves;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << steps(n) << "\n";
    }
    return 0;
}
