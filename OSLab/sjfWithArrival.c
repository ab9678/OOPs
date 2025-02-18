#include <stdio.h>

typedef struct {
    int pid,arrival,burst,completion,completionFlag,arrivalFlag;
}process;

int n,readyQIterator=0,front=0,timeListIterator=0;


void sortReadyqueue(process *readyQ){
    int i,j;
    process temp;
    if(readyQIterator==0){
        return;
    }
    for (i=front;i<readyQIterator;i++){
        for (j=i;j<readyQIterator;j++){
            if(readyQ[j].burst<readyQ[i].burst){
                temp = readyQ[i];
                readyQ[i]=readyQ[j];    // swap the processes
                readyQ[j]=temp;
            }   
        }
    }   
}

// update the ready queue according to the arrival time
void updateQ(process *readyQ, int time,int *timeList, process *processList){
    int i,idleFlag=0;
    for (i=0;i<n;i++){
        if (time >= processList[i].arrival && processList[i].arrivalFlag==0){
            
            
            readyQ[readyQIterator] = processList[i];
            readyQIterator++;
            
            idleFlag = 1;
            processList[i].arrivalFlag=1;
        }
        
    }
    return;

    // if(idleFlag == 0){
    //     for (i=0;i<readyQIterator;i++){
    //         if (readyQ[i].completionFlag == 0)
    //         {
    //             return;
    //         }
    //     }

    //     timeListIterator++;
    //     timeList[timeListIterator] = -1;    // indicating idle cpu
    // }

}


int main() {

    printf("\nNumber of process->> ");
    scanf("%d",&n);
    process readyQ[n];
    int timelist[n];
    int i;
    int processID;

    // size done
    process processList[n];

    for(i=0;i<n;i++){
        printf("\nEnter arrival time: ");
        scanf("%d",&processList[i].arrival);
        printf("\nEnter burtst time: ");
        scanf("%d",&processList[i].burst);
        processList[i].pid = i;
        processList[i].completionFlag=0;    //set every process to incomplete
        processList[i].arrivalFlag=0;
    }
    int time=0;

    for (i=0;i<n;i++){

        

        if(readyQIterator<n){
            updateQ(readyQ,time,timelist,processList);
            sortReadyqueue(readyQ);
        }
        
        if (time<readyQ[front].arrival){
            timelist[timeListIterator]=-1;
            timeListIterator++;
            time = readyQ[front].arrival;
            
        }

        processID = readyQ[front].pid;
        time += processList[processID].burst;
        processList[processID].completion = time;
        processList[processID].completionFlag = 1;
        
        timelist[timeListIterator]=time;
        timeListIterator++;
        front++;    // dequeue the process
        
    }

    printf("\nPID\tAT\tBR\tCT\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\n", processList[i].pid, processList[i].arrival, processList[i].burst, processList[i].completion);
    }

    for(i=0;i<n;i++){
        printf("%d|",timelist[i]);
    }

}