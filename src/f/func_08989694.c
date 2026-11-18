typedef unsigned char u8;
typedef int s32;
typedef struct { char b[16]; } E16;

s32 func_08989694(char *arg0) {
    s32 temp_v1_i;

    temp_v1_i =  * (s32 *)(arg0 + 0x50);
    if (*(u8 *) &((E16 *) (arg0 + 0x3C))[temp_v1_i] != 0) {
        return *(s32 *) &((E16 *) (arg0 + 0x30))[temp_v1_i];
    }
    return -1;
}
