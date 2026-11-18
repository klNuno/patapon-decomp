typedef int s32;

extern s32 func_08809C00(s32, s32, s32);
extern s32 func_08809C10(s32, s32, s32, s32);

void func_08809BB4(s32 arg0) {
    func_08809C10(arg0, 0, 0, 0);
    func_08809C00(arg0, 0, 0);
    *(s32 *)(arg0 + 0x34) = 0;
    *(s32 *)(arg0 + 0x30) = 0;
    *(s32 *)(arg0 + 0x2C) = 0;
}
