#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t fork_sem[5];

void *philosopher(void *arg) {
    int id = *(int *)arg;

    printf("Philosopher %d is thinking\n", id);
    sleep(1);

    printf("Philosopher %d wants to eat\n", id);

    // Pick up forks
    printf("Philosopher %d tries to pick left fork\n", id);
    sem_wait(&fork_sem[id]);
    printf("Philosopher %d picks the left fork\n", id);

    printf("Philosopher %d tries to pick right fork\n", id);
    sem_wait(&fork_sem[(id + 1) % 5]);
    printf("Philosopher %d picks the right fork\n", id);

    // Eat
    printf("Philosopher %d begins to eat\n", id);
    sleep(2);
    printf("Philosopher %d has finished eating\n", id);

    // Put down forks
    sem_post(&fork_sem[(id + 1) % 5]);
    printf("Philosopher %d leaves the right fork\n", id);

    sem_post(&fork_sem[id]);
    printf("Philosopher %d leaves the left fork\n", id);

    printf("Philosopher %d is thinking again\n", id);

    return NULL;
}

int main() {
    pthread_t threads[5];
    int ids[5];

    for (int i = 0; i < 5; i++)
        sem_init(&fork_sem[i], 0, 1);

    for (int i = 0; i < 5; i++) {
        ids[i] = i;
        pthread_create(&threads[i], NULL, philosopher, &ids[i]);
    }

    for (int i = 0; i < 5; i++)
        pthread_join(threads[i], NULL);

    return 0;
}
