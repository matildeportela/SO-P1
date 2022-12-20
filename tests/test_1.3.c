#include "../fs/operations.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>

int main(int argc, char* argv[]) {
    pthread_t p1, p2, p3;
    pthread_mutex_init(&mutex, NULL);

    if (pthread_create(&p1, NULL, &routine, NULL) != 0) {
        return 1;
    }

    if (pthread_create(&p2, NULL, &routine, NULL) != 0) {
        return 2;
    }

    if (pthread_create(&p3, NULL, &routine, NULL) != 0) {
        return 3;
    }

    if(pthread_join(p1, NULL) != 0){
        return 1;
    }

    if(pthread_join(p1, NULL) != 0){
        return 1;
    }

    if(pthread_join(p1, NULL) != 0){
        return 1;
    }

}


