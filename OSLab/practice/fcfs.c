#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int id[n], at[n], bt[n], ct[n], tat[n], wt[n];
    int totalTAT = 0, totalWT = 0;
    int crt = 0;

    // Input
    for (int i = 0; i < n; i++) {
        id[i] = i + 1;
        printf("Enter arrival time for process P%d: ", id[i]);
        scanf("%d", &at[i]);
        printf("Enter burst time for process P%d: ", id[i]);
        scanf("%d", &bt[i]);
    }

    // Calculation
    for (int i = 0; i < n; i++) {
        if (crt < at[i]) {
            crt = at[i];
        }
        crt += bt[i];
        ct[i] = crt;
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        totalTAT += tat[i];
        totalWT += wt[i];
    }

    // Output
    printf("\n---------------------------------------------------------\n");
    printf("PID\tAT\tBT\tCT\tTAT\tWT\n");
    printf("---------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", id[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }
    printf("---------------------------------------------------------\n");

    printf("Average Turnaround Time: %.2f\n", (float)totalTAT / n);
    printf("Average Waiting Time: %.2f\n", (float)totalWT / n);

    return 0;
}