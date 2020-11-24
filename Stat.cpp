#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
#include <sys/stat.h>

using namespace std;

int main(int argc, char *argv[])
{
    struct stat statbuf;
    if (stat(argv[1], &statbuf) == 0)
    {
        cout << "stat.st_ino : " << statbuf.st_ino << endl;
        cout << "stat.st_mode : " << statbuf.st_mode << endl;
        cout << "stat.st_uid : " << statbuf.st_uid << endl;
        cout << "stat.st_size : " << statbuf.st_size << endl;
        cout << "stat.st_blksize : " << statbuf.st_blksize << endl;
        cout << "stat.st_blocks : " << statbuf.st_blocks << endl;
        cout << "stat.st_atime : " << statbuf.st_atime << endl;
        cout << "stat.st_mtime : " << statbuf.st_mtime << endl;
        cout << "stat.st_ctime : " << statbuf.st_ctime << endl;
    }
    return (0);
}