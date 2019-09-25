#include <iostream>
using namespace std;


void bubble(int *v, int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0; j< n-1-i;j++){
            if(v[j] > v[j+1]){
            swap(v[j],v[j+1]);
            }
        }
    }
}

int main(){
    srand(time(NULL));
    int n;
    cin >> n;
    int v[n];
    for(int i = 0;i<n;i++){
        v[i] = rand() % 15;
    }
    
    bubble(v, n);

    for(int i = 0; i < n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}