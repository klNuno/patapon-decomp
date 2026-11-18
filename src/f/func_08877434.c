typedef int s32;
typedef struct { char b[16]; } E16;

s32 func_08877434(s32 arg0, s32 arg1) {
    return *(s32 *)((E16 *)((char *)arg0 + 0x1468))[arg1].b;
}
