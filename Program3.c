#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include<sys/wait.h>

#define MSGSIZE 16
int main(int argc, char* argv[]){
  char inbuf[MSGSIZE];
  int p[2];
  pid_t pid;
if(pipe(p)==-1){
  perror("Pipe Call");
  exit(1);
}
switch(pid = fork()){
  case -1:
  perror("fork call");
  exit(2);
  case 0:
  close(p[0]);
  printf("Command %s\n",argv[1]);
  printf("result....\n");
  system(argv[1]);
  return (EXIT_FAILURE);
  break;
  default:
  close(p[1]);
  sleep(2);
  wait((int*)0);
  printf("Child's pid %d and parent id is %d\n",getpid(),getppid());
  return (EXIT_FAILURE);
}
exit(EXIT_SUCCESS);
}
