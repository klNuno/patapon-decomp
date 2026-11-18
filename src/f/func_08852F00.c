typedef int s32;
typedef struct { char b[280]; } E280;

void func_08852F00(char *arg0, s32 arg1) {
    *(s32 *)((E280 *)(arg0 + 0x120))[*(s32 *)(arg0 + 0x360)].b = arg1;
}
