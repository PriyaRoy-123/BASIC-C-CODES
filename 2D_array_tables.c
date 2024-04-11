#include <stdio.h>
void storeTable(int arr[][10],int n,int m,int number);

int main()
{
    int tables[2][10];
    storeTable(tables,0,10,2);
    storeTable(tables,0,10,3);
    for(int i=0;i<10;i++){
        printf("%d\t",tables[0][i]);
    }
    for(int i=0;i<10;i++){
        print("%d\t",tables[1][1]);
    }  
        printf("\n");
    }

    return 0;
    void store(int arr[][10],int n,int m,int number){
        for(int i=o;i<m;i++){
            arr[n][i] =number*(i+1);
        
    }
}