#include "busca_seq_ordenada.h"

int busca_seq_ordenada(int arr[], int n, int alvo){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==alvo) return i;
    }
    return -1;
}

void bubble_sort(int arr[], int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int conta_especialidades_distintas(int arr[], int n){
    bubble_sort(arr,n);
    int count=0,i;
    int unicos[n]; 
    int unicos_count=0;

    for(i=0;i<n;i++){
        if(busca_seq_ordenada(unicos, unicos_count, arr[i])==-1){
            unicos[unicos_count] = arr[i];
            unicos_count++;
            count++;
        }
    }
    return count;
}
