#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);getchar();
    int a[11][11];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d",&a[i][j]);getchar();
        }
    }

    // proses
    int kolom[11], baris[11];
    
    // hitung dari kolom
    for(int i = 0 ; i < n ; i++){
        int temp = 0, max = 0;
        for(int j = 0 ; j < n ; j++){
            if(max < a[j][i]){
                max = a[j][i];
                temp++;
            }
        }
        kolom[i] = temp;
    }
    
    // hitung dari baris
    for(int i = 0 ; i < n ; i++){
        int temp = 0, max = 0;
        for(int j = 0 ; j < n ; j++){
            if(max < a[i][j]){
                max = a[i][j];
                temp++;
            }
        }
        baris[i] = temp;
    }

    for(int i = 0 ; i < n ; i++){
        printf("%d",kolom[i]);
        if(i == n-1) printf("\n");
        else printf(" ");
    }

    for(int i = 0 ; i < n ; i++){
        printf("%d",baris[i]);
        if(i == n-1) printf("");
        else printf("\n");
    }
    return 0;
}