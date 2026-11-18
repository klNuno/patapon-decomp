typedef int s32;
typedef unsigned int u32;
typedef struct { char b[8]; } E8;

s32 func_0885AB08(char *arg0, u32 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    if (arg1 < (u32) *(u32 *)(arg0 + 0x10)) {
        return *(s32 *)((E8 *)(arg0 + 0x20))[arg1].b;
    }
    return -1;
}
