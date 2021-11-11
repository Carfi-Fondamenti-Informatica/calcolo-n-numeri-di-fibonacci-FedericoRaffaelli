#include <iostream>
using namespace std;

int main() {
   int n=0, i=1, m=1, k=0, j=0;
    cin >> n;
    if (n>=2){
        for (int i=1; i<n+1; i++){
            j=m+k;
            m=k;
            k=j;
            cout << j << endl;
        }
    } else{
        cout << "errore" << endl;
    }
   return 0;
}
