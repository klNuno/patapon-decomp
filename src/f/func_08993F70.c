typedef int s32;
typedef struct { char b[28]; } E28;

s32 func_08993F70(s32 arg0, s32 arg1) {
    return *(s32 *)((E28 *)((char *)arg0 + 0x24))[arg1].b == 1;
}
