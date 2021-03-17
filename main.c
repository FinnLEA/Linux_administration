#include <sys/procfs.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char** argv, char** envp){

    pid_t subPid;
    int countProc;
    int countIter;
    int i, j;
    FILE* handle;

    if(argc < 4){
        perror("USAGE fork <message> <count processes> <count interation>\n");
        return 1;
    }

    countProc = atoi(argv[2]);
    countIter = atoi(argv[3]);
    
    handle = fopen("logfile.log", "a+");
    if(!handle){
        perror("Error open logfile\n");
        return 1;
    }

    for(i = 0; i < countProc; ++i){
        subPid = fork();
        if(subPid == 0){
            for(j = 0; j < countIter; ++j){
                sleep(countIter * j);
                lockf((int)handle, F_LOCK, 0);
                fprintf(handle, "%s, %d\n", argv[1], j * i);
            }
        }
    }

    if(subPid != 0){
        pid_t p;
        pid_t parentPid = getppid();
        int status;
        p = waitpid(-1, &status, 0);    
        while (p != -1){
            p = waitpid(-1, &status, 0);
        }
        fclose(handle);
        exit(0);
    }
    
    fclose(handle);
    return 0;
}