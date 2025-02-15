#include <stdio.h>

typedef struct {
    int pid,burst,completion;
}process;

int n;

void sortPerburst(process *processList){

    int i,j;
    process temp;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (processList[i].burst > processList[j].burst) {
                temp = processList[i];
                processList[i] = processList[j];
                processList[j] = temp;
            }
        }
    }
}

int main() {
    // Your code here
    int i;
    printf("\nNumber of process->> ");
    scanf("%d",&n);
    // size done
    process processList[n];

    for(i=0;i<n;i++){
        printf("\nEnter burtst time: ");
        scanf("%d",&processList[i].burst);
        processList[i].pid = i+1;
    }
    //created list of processes here

    sortPerburst(processList);

    int time=0;

    for (i=0;i<n;i++){
        processList[i].completion = time + processList[i].burst;
        time = processList[i].completion;
    }

    printf("\nThe completion times are: \n");
    for (i=0;i<n;i++){
        
        printf("P%d->%d\n",processList[i].pid,processList[i].completion);

    }


    return 0;
}