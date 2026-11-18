typedef int s32;

extern s32 func_08809784(s32);
extern s32 func_0881CA0C(s32);

void func_08807C94(s32 arg0) {
    if (func_08809784(arg0) >= 0) {
        func_0881CA0C(*(s32 *)(arg0 + 0x50));
    }
}
