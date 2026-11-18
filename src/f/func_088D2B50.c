typedef unsigned char u8;
typedef int s32;

extern s32 func_088D1C7C(s32, s32, s32);
extern s32 func_088D1EF0(s32);

s32 func_088D2B50(s32 arg0, s32 arg1, s32 arg2) {
    func_088D1C7C(arg0, arg1, arg2);
    if (*(u8 *)(arg0 + 4) == 1) {
        func_088D1EF0(arg1);
    }
    return 0;
}
