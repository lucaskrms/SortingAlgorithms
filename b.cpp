#include <iostream>
using namespace std;

void selection(int *v, int n){
    for(int i = 0;i<n-1;i++){
        int Pmenor = i;
        for(int j = i+1;j<n;j++){
            if(v[j] < v[Pmenor]){
                swap(v[j],v[Pmenor]);
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

    for(int i = 0; i < n;i++){
        cout << v[i] << " ";
    }
    cout << endl;

    selection(v,n);

    for(int i = 0; i < n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}