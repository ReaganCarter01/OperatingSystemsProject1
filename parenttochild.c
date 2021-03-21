#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>

#define MSGSIZE 16

int main() {
    char inbuf[MSGSIZE];
    int p[2];
    pid_t pid;


    if (pipe(p) == -1) {
        perror("pipe call");
        exit(1);
    }

    switch(pid = fork()) {
        case -1:
            perror("fork call");
            exit(2);
        case 0:
            close(1);
            dup(p[1]);
            close(p[0]);
            close(p[1]);
            execv("./pre",(char *)0);
            perror("execl() failed!");
            return(EXIT_FAILURE);
        default:
            close(0);
            dup(p[0]);
            close(p[0]);
            close(p[1]);
            execv("./sort", (char *)0);
            return(EXIT_FAILURE);
    }

    return(EXIT_SUCCESS);
}
