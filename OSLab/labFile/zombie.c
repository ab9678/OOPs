#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork(); // Create a child process

    if (pid < 0) {
        // If fork fails
        perror("Fork failed");
        return 1;
    }
    else if (pid == 0) {
        // Child process
        printf("Child process running (PID: %d)\n", getpid());
        printf("Child process exiting...\n");
        exit(0); // Child exits, becomes a zombie until parent reaps it
    }
    else {
        // Parent process
        printf("Parent process running (PID: %d)\n", getpid());
        printf("Parent is sleeping for 10 seconds...\n");
        sleep(10); // Delay gives time to observe zombie in `ps` or `top`
        printf("Parent process exiting...\n");
    }

    return 0;
}
