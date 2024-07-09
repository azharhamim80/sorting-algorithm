#include<iostream>
using namespace std;
int arr[]={8,5,4,6,2,1,9,7,3};
int temp[9];

void Merge(int L, int Mid, int H){

    int i = L, k=L, j= Mid+1;
    while(i<=Mid && j<=H){
        if(arr[i]<arr[j]){

            temp[k]=arr[i];
            k++;
            i++;
        }
        else{
            temp[k]=arr[j];
            k++;
            j++;
        }

    }
    for( ;i<=Mid;i++){
        temp[k]=arr[i];
        k++;
    }
    for( ;j<=H;j++){
        temp[k]=arr[j];
        k++;
    }
    for(int a=L;a<k; a++){
        arr[a]=temp[a];
    }

}

void MergeSort(int L, int H){

    if(L<H){
        int Mid = (L+H)/2;
        MergeSort(L,Mid);
        MergeSort(Mid+1,H);
        Merge(L,Mid,H);
    }
}

int main(){

    MergeSort(0,8);
    for(int i=0; i<9;i++){
        cout<<temp[i]<<" ";
    }


}

