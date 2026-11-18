typedef int s32;

extern s32 func_089A95B0(s32, s32);

void func_089A9F6C(char *arg0) {
    if ((*(s32 *)(arg0 + 0x10) == 1) && (func_089A95B0((s32) (arg0 + 0x14), (s32) (arg0 + 0x18)) < 0)) {
        *(s32 *)(arg0 + 0x10) = 2;
    }
}
