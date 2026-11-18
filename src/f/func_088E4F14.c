typedef int s32;
typedef struct { char b[44]; } E44;

extern s32 func_088E5034(s32);

s32 func_088E4F14(s32 arg0) {
    return *(s32 *)((E44 *)((char *)(*(s32 *)(arg0 + 0xDC)) + 0x68))[func_088E5034(arg0)].b;
}
