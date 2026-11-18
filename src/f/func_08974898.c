typedef unsigned char u8;
typedef int s32;

extern s32 func_08866058(s32, s32);

void func_08974898(char *arg0, s32 arg1) {
    if (*(u8 *)(arg0 + 0x18C) != 0) {
        func_08866058((s32) arg0, arg1);
    }
}
