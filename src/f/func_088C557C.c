typedef unsigned short u16;
typedef int s32;

extern s32 func_088C0020(s32);

void func_088C557C(s32 arg0, s32 arg1) {
    char *temp_a0;

    if (func_088C0020(arg1) == 0) {
        temp_a0 = (char *) (*(s32 *)(arg1));
        *(u16 *)(temp_a0 + 0xE) = (u16) (*(u16 *)(temp_a0 + 0xE) | 0x200);
    }
}
