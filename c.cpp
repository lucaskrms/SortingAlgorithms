#include <iostream>
using namespace std;

void insertion(int *v, int n){
    int aux, j;
    for(int i = 1; i<n;i++){
        aux = v[i];
        j = i-1;
        while(j>=0 && aux < v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = aux;
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

    insertion(v,n);

    for(int i = 0; i < n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}