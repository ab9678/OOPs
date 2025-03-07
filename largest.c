# include <stdio.h>

int main(){
    int i, a[5];

    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    int highest=0,index;

    for (i=0;i<5;i++){
        if(a[i]>highest){
            highest = a[i];
            index=i;
        }
    }

    printf("%d",highest);
}