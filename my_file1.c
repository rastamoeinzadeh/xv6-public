//
// Created by rasta on 1/14/16.
//

#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"

int main(void){
    printf(1,"start save\n");
    int* process = (int*)malloc(sizeof(int));
    int fd = open("process", O_CREATE | O_RDWR);
    
    ProcRead(getpid(),(int)process);
    SaveProc(*process,fd);
    
    printf(1,"save done\n");
    exit();
}
