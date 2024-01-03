#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    int s = n;
    int p = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= p; j++){
            cout << ("\t");
        }

        for (int j = 1; j <= s; j++){
            if (i > 1 && i <= n / 2 && j > 1 && j < s){
                cout << ("\t");
            }else{
                cout << ("*\t");
            }
        }

        cout << endl;

        if (i <= n / 2){
            s -= 2;
            p++;
        }else{
            s += 2;
            p--;
        }
    }
}
