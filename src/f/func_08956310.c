typedef unsigned char u8;
typedef int s32;

extern s32 func_088797E0(s32, s32);

void func_08956310(s32 arg0, s32 *arg1) {
    if (*(u8 *)((char *)((*arg1 + arg0)) + 0x22178) == 0) {
        func_088797E0(arg0 + 0x205C, (s32) arg1);
    }
}
