typedef unsigned char u8;
typedef int s32;
typedef struct { char b[280]; } E280;

u8 func_08852FB4(char *arg0) {
    return *(u8 *)((E280 *)(arg0 + 0x12C))[*(s32 *)(arg0 + 0x360)].b;
}
