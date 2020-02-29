
//#define CKB_VM

#include <cstdio>
#include <cstdint>


#include "sha256.h"


# ifdef CKB_VM
#include "ckb_syscalls.h"

#endif




int main(int argc, char* argv[]) {
    if (argc < 2) {
        // printf("Usage: sha256 <string>\n");
        return 0;
    }

    char* msg = argv[1];
    uint8_t  out[32];



    sha256(msg,out);

    char format[64];

    for (int i=0;i<32;i++){
        sprintf(&format[2*i],"%02x",(char*)out[i]);
    }

    // 本地跑、ckb跑

    # ifndef CKB_VM

    printf("%s",format);

    # else

    ckb_debug(format);

    #   endif





    return 0;

}
