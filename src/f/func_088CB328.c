typedef int s32;
typedef struct { char b[8]; } E8;

s32 func_088CB328(char *arg0, s32 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    return *(s32 *)((E8 *)((char *)(*(s32 *)(arg0 + 0x18)) + 4))[arg1].b;
}
