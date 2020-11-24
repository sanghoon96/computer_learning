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

/*
파일내용해석 :
stat — stat() 결과 해석하기

tat.ST_MODE
아이 노드(inode) 보호 모드.

stat.ST_INO
아이 노드(inode) 번호.

stat.ST_UID
소유자의 사용자 id.

stat.ST_SIZE
일반 파일의 크기(바이트); 일부 특수 파일에서는 대기중인 데이터의 양.

stat.ST_ATIME
마지막 액세스 시간.

stat.ST_MTIME
마지막 수정 시간.

stat.ST_CTIME
운영 체제에서 보고한 《ctime》. (유닉스와 같은) 일부 시스템에서는 마지막 메타 데이터 변경 시간이고, (윈도우와 같은) 다른 시스템에서는 생성 시간입니다 (자세한 내용은 플랫폼 설명서를 참조하십시오).

《파일 크기》의 해석은 파일 유형에 따라 달라집니다. 일반 파일에서는 바이트로 표현한 파일의 크기입니다. 대부분의 유닉스(특히 리눅스를 포함하는)의 FIFO와 소켓에서, 《크기》는 os.stat(), os.fstat() 또는 os.lstat()를 호출한 시점에 읽기 대기 중인 바이트 수입니다; 이것은 때때로, 특히 비 블로킹으로 연 후에 이러한 특수 파일 중 하나를 폴링할 때 유용할 수 있습니다. 다른 문자와 블록 장치에서 크기 필드의 의미는 하부 시스템 호출의 구현에 따라 더 다양합니다.

아래의 변수는 ST_MODE 필드에서 사용되는 플래그를 정의합니다.

첫 번째 플래그 집합을 사용하는 것보다 위의 함수를 사용하는 것이 더 이식성 있습니다:
*/