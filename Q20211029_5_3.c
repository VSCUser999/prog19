#include <stdio.h>

int Max_Found(int [], int );

int main(){
    int k,n, arr[100];

    scanf("%d", &n);
    for (k = 0; k < n; k++){
        scanf("%d", &arr[k]);
    }
    k = Max_Found(arr,n);
    printf("%d\n\n",k);
}

int Max_Found(int arrfun[], int m){
    int h,i,j,iVal_new,iVal_old,iMaxValue = -9999 ;

    for(i = 0;i < m; i++){
        iVal_old = 1;
        for(j = i; j < m; j++){
            iVal_new = arrfun[j] * iVal_old;
            iVal_old = iVal_new;
            if(iVal_new > iMaxValue) iMaxValue = iVal_new;

            //printf("x[%2d~%2d] = %5d , Max value = %5d\n", i,j,iVal_new,iMaxValue);
        }
    }

    return iMaxValue;
}