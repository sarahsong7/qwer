//test semaphore

#include <pthread.h>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <semaphore.h>

using namespace std;

int x;
bool y;
sem_t sem;
pthread_t child, child2;
pthread_mutex_t mutex, mutex2;
pthread_cond_t cond, cond2;

void setup() {
    pthread_mutex_init(&mutex, NULL);
    pthread_mutex_init(&mutex2, NULL);
    pthread_cond_init(&cond, NULL);
    pthread_cond_init(&cond2, NULL);
    sem_init(&sem, 0, 0);
}

void teardown() {
    pthread_mutex_destroy(&mutex);
    pthread_mutex_destroy(&mutex2);
    pthread_cond_destroy(&cond);
    pthread_cond_destroy(&cond2);
}

void * routine(void * arg) {
    pthread_mutex_lock(&mutex);
    pthread_mutex_unlock(&mutex);
}


int main(int argc, char *argv[]) {
    setup();
    pthread_create(&child, NULL, routine, NULL);
    sem_wait(&sem);
    pthread_join(child, NULL);
    teardown();
}

