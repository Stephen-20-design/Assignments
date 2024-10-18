// arrays 2d-arrays
#include<stdio.h>
int main(){
    int i,j;
    int marks [2][3]={{10,20,30},{40,30,50}};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            
                printf("marks [%d][%d]=%d\n",i,j, marks[i][j]);
            }
    }
    return 0;
}
