#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define MAX_THREADS 3 
#define TOTAL_THREADS 5

sem_t counting_semaphore;

void* thread_function(void* arg) {
    int thread_id = (int)(long)arg;  // Safely retrieve the thread ID
    printf("Thread %d is trying to enter the critical section...\n", thread_id);

    sem_wait(&counting_semaphore);
    printf("Thread %d has entered the critical section.\n", thread_id);
    sleep(2);  // Simulate work in the critical section
    printf("Thread %d is leaving the critical section.\n", thread_id);
    sem_post(&counting_semaphore);

    printf("Thread %d has exited the critical section.\n", thread_id);
    return NULL;
}

int main() {
    pthread_t threads[TOTAL_THREADS];
    int thread_ids[TOTAL_THREADS];

    sem_init(&counting_semaphore, 0, MAX_THREADS);  // Initialize counting semaphore

    for (int i = 0; i < TOTAL_THREADS; i++) {
        thread_ids[i] = i + 1;
        pthread_create(&threads[i], NULL, thread_function, (void*)(long)thread_ids[i]);
        sleep(1);  // Optional: stagger thread start for better output visibility
    }

    for (int i = 0; i < TOTAL_THREADS; i++) {
        pthread_join(threads[i], NULL);  // Wait for all threads to finish
    }

    sem_destroy(&counting_semaphore);  // Clean up semaphore
    return 0;
}
