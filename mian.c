#include <stdio.h>

void Number_sort(int arr[], int size);

int main(){
    const int SIZE = 6; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    //処理コード

    Number_sort(scores, SIZE);  // ソート関数を呼び出し
    
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", scores[i]);
    }

    printf("\n"); 
}


void Number_sort(int arr[], int size){
    for (int i = 0; i < size - 1; i++) {  
        for (int j = 0; j < size - 1 - i; j++) {  
            if (arr[j] < arr[j + 1]) {  
                int temp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = temp;  
            }
        }
    }
}






