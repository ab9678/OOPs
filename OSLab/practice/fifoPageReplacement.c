# include <stdio.h>
# define n 8

int pageFault=0;
int input[n];
int page[5]={-1};

int rear=0;

int update_page(int *page, int element){

    pageFault++;
    printf("Rear = %d\n",rear);
    page[rear]=element;

    for(int i=0;i<5;i++){
        printf("%d\t",page[i]);
    }

    printf("\n");

    rear=(rear+1)%5;

}

int main(){

    int flag;
    int i,j;


    for (i=0;i<5;i++){
        page[i]=-1;
    }

    for (i=0;i<n;i++){
        scanf("%d",&input[i]);
    }

    for (i=0;i<n;i++){
        flag =0;
        for (j=0;j<5;j++){
            if (input[i]==page[j]){
                break;
            }
            else{
                flag=1;
            }
        }

        if (flag == 1){
            update_page(page,input[i]);
        }
    }

    printf("Page fault: %d",pageFault);
}
