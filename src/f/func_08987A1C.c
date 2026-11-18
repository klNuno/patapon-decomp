typedef unsigned char u8;
typedef int s32;

extern s32 func_08988484(s32);

s32 func_08987A1C(char *arg0) {
    if (*(u8 *)(arg0 + 0x64) != 0) {
        func_08988484((s32) arg0);
    }
    return 0;
}
