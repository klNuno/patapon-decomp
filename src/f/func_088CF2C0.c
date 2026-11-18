typedef int s32;

extern s32 func_088CF04C(s32, s32);
extern s32 func_088CF308(s32, s32, s32);

void func_088CF2C0(s32 arg0, s32 arg1) {
    s32 sp1C;

    func_088CF04C((s32) &sp1C, arg0 + 0x314);
    func_088CF308(arg0 + 0x314, sp1C, arg1);
}
