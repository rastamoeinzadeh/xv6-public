//
// Created by rasta on 1/16/16.
//
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"

int main(void){
    printf(1,"start load\n");
    int* process = (int*)malloc(sizeof(int));
    int fd = open("process", O_RDONLY);
    int fd2 = open("process_page", O_RDONLY);

    ProcAlloc((int)process);
    LoadProc((int)process,fd,fd2);

    printf(1,"load done\n");
    exit();
}
