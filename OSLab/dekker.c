#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
// Shared variables
int turn = 0; // Indicates whose turn it is
int flag[2] = {0, 0}; // Flags to indicate if process wants to enter critical section
// Function for Process 0
void *process0(void *arg) {
for (int i = 0; i < 5; i++) { // Repeat process multiple times
flag[0] = 1; // Process 0 wants to enter
while (flag[1]) { // If Process 1 is also interested
if (turn != 0) { // If it's not Process 0's turn
flag[0] = 0; // Release interest
while (turn != 0); // Wait for turn
flag[0] = 1; // Reattempt to enter
}
}
// Critical Section
printf("Process 0 is in critical section\n");
sleep(1);
// Exit Section
turn = 1; // Give turn to Process 1
flag[0] = 0; // Indicate not interested
}
return NULL;
}
// Function for Process 1
void *process1(void *arg) {
for (int i = 0; i < 5; i++) { // Repeat process multiple times
flag[1] = 1; // Process 1 wants to enter
while (flag[0]) { // If Process 0 is also interested
if (turn != 1) { // If it's not Process 1's turn
flag[1] = 0; // Release interest
while (turn != 1); // Wait for turn
flag[1] = 1; // Reattempt to enter
}
}
// Critical Section
printf("Process 1 is in critical section\n");
sleep(1);
// Exit Section
turn = 0; // Give turn to Process 0
flag[1] = 0; // Indicate not interested
}
return NULL;
}
int main() {
pthread_t t0, t1;
// Create threads for Process 0 and Process 1
pthread_create(&t0, NULL, process0, NULL);
pthread_create(&t1, NULL, process1, NULL);
// Wait for both threads to finish
pthread_join(t0, NULL);
pthread_join(t1, NULL);
printf("Execution completed.\n");
return 0;
}