#include <stdio.h>

void Number_sort(int arr[], int size);

int main(){
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90};
    //処理コード

    Number_sort(scores, SIZE);  // ソート関数を呼び出し
    
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", scores[i]);
    
    }

    printf("\n"); 
}


void Number_sort(int arr[], int size){
    for (int i = 0; i < size - 1; i++) {  // 外側のループ（ソートの回数）
        for (int j = 0; j < size - 1 - i; j++) {  // 内側のループ（隣同士の比較）
            if (arr[j] < arr[j + 1]) {  // 大きい値を前に移動
                int temp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = temp;  
            }
        }
    }
}






