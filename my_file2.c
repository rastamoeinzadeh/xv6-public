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
    int fd = open("process", O_CREATE | O_RDWR);

    ProcAlloc((int)process);
    LoadProc((int)process,fd);

    printf(1,"load done\n");
    exit();
}
