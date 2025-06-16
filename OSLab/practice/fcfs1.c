#include <stdio.h>
#include <stdlib.h>

typedef struct Process {
  
    int at;  
    int bt;  
    int ct;  
    int tat; 
    int wt;  
} process;

void calctime(process pr[], int n) {
    int crt = 0;   
    int totalTAT = 0; 
    int totalWT = 0;  


    for (int i = 0; i < n; i++) {
        if(crt<pr[i].at){
          crt=pr[i].at;
          printf("ideal for %ds",pr[i].at-crt);
        }
        crt = crt + pr[i].bt;  
        pr[i].ct = crt;       
        pr[i].tat = pr[i].ct - pr[i].at; 
        pr[i].wt = pr[i].tat - pr[i].bt;

        totalTAT += pr[i].tat;
        totalWT += pr[i].wt;
    }

  
    printf("\nAverage Turnaround Time: %f\n", (float)totalTAT / n);
    printf("Average Waiting Time: %f\n", (float)totalWT / n);
}


void printProcessDetails(process pr[], int n) {
    printf("\n---------------------------------------------------------\n");
    printf("PID\t|AT\t|BT\t|CT\t|TAT\t|WT\t \n");
    printf("----------------------------------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d\t %d\t  %d\t %d\t  %d\t \n", 
                pr[i].at, pr[i].bt, pr[i].ct, pr[i].tat, pr[i].wt);
    }

    printf("----------------------------------------------------------\n");
}

int main() {
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);
    process pr[n];

   
    for (int i = 0; i < n; i++) {

        
        printf("Enter arrival time for process P%d: ", i + 1);
        scanf("%d", &pr[i].at); 

        printf("Enter burst time for process P%d: ", i + 1);
        scanf("%d", &pr[i].bt); 
    }

    
    calctime(pr, n);

    printProcessDetails(pr, n);

    return 0;
}
//new