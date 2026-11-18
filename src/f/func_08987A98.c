typedef unsigned char u8;
typedef int s32;

extern s32 func_08987414(s32, s32, s32);
extern s32 func_08988484(s32);

s32 func_08987A98(char *arg0, s32 arg1) {
    if (*(u8 *)(arg0 + 0x64) != 0) {
        func_08988484((s32) arg0);
    }
    func_08987414((s32) arg0, arg1, 0);
    return 0;
}
