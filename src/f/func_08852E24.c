typedef int s32;
typedef struct { char b[280]; } E280;

s32 func_08852E24(char *arg0) {
    return *(s32 *)((E280 *)(arg0 + 0x90))[*(s32 *)(arg0 + 0x360)].b;
}
