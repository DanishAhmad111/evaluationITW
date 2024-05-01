#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int count1 = 0;
        int count2 = 0;
        int n;
        cin >> n;
        int arr[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(arr[i][j] == 0) {
                    continue; 
                }
              
                else {
                    for(int k = i; k < i + 1; k++) {
                        for(int l = 0; l < n; l++) {
                            if(arr[k][l] == 1) {
                                count1++;
                            }
                        }
                    }
                    for(int m = i + 1; m < i + 2; m++) {
                        for(int p = 0; p < n; p++) {
                            if(arr[m][p] == 1) {
                                count2++;
                            }
                        }
                    }
                }
            }
        }
        
        if(count1 == count2) {
            cout<<count1<<endl;
            cout << "SQUARE" << endl;
        } else {
            cout << "TRIANGLE" << endl;
        }
    }
    return 0;
}
