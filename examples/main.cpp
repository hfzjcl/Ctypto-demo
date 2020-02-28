#include <cstdio>
#include <cstdint>

#include "../src/hash/sha256.h"

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
        printf("%02x",(char*)out[i]);
    }
    printf("\n");

    for (int i=0;i<32;i++){
        sprintf(&format[2*i],"%02x",(char*)out[i]);
    }

    printf("%s",format);






    return 0;

}
