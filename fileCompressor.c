#include <stdio.h>
#include <stdlib.h>
//includes for reading files
#include <sys/types.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
    DIR *dir;
    /*struct to store information about a file and its contents*/
    struct dirent *sd;
    struct stat statbuf;
    char *subdir;

    //opening current directory using "."
    dir = opendir(".");
    if (dir == NULL) {
        /*TODO: elaborate err*/
        printf("Error: Unable to open directory");
        exit(1);
    }
        /* going through all the files in the current directory
         * and operating on them
         */
    while((sd = readdir(dir)) != NULL) {
        //sd->d_name stores name of the file
        //printf(">> %s\n", sd->d_name);
        if (statbuf)

    }

    closedir(dir);
    return 0;
}
