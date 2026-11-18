typedef signed char s8;
typedef int s32;
typedef struct { char b[280]; } E280;

void func_08852FD8(char *arg0, s8 arg1) {
    *(s8 *)((E280 *)(arg0 + 0x12C))[*(s32 *)(arg0 + 0x360)].b = arg1;
}
