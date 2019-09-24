#include <iostream>
using namespace std;


void merge(int *v,int *aux, int p, int q, int r){
    int tam = r-p;
    int i = p;
    int j = q;
    int k = 0;
    while(i<q && j<r){
        if(v[i] <= v[j])
            aux[k++] = v[i++];
        else
        {
            aux[k++] = v[j++];
        }   
    }
    while(i<q)
        aux[k++] = v[i++];
    while(j<r)
        aux[k++] = v[j++];
    for(k = 0;k<tam;k++){
        v[p+k] = aux[k];
    }       
}
void insertionSort(int *v, int p, int r){
    int aux, j;
    for(int i = p+1; i<r;i++){
        aux = v[i];
        j = i-1;
        while(j>=0 && aux < v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = aux;
    }
}
void mergeSort(int *v,int *aux, int p, int r){
    if(p-r <=10){
        insertionSort(v,p,r);
    }
    
    if(p<r-1){
        int meio = (p+r) / 2;
        mergeSort(v,aux,p,meio);
        mergeSort(v,aux,meio, r);
        merge(v,aux,p,meio,r);
    }
}
void mergeSort(int *v, int n){
    int *aux = new int[n];
    mergeSort(v,aux,0,n);
    delete []aux;
}

int main(){
    srand(time(NULL));
    int n;
    cin >> n;
    int v[n];

    for(int i = 0;i<n;i++){
        v[i] = rand() % 15;
    }
    for(int i = 0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;

    mergeSort(v,n);

    for(int i = 0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;

}
