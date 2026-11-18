typedef unsigned short u16;
typedef int s32;

extern s32 func_088C0020(s32);

void func_08923ECC(char *arg0) {
    char *temp_a0;

    if (arg0 != 0) {
        if (func_088C0020((int) (arg0 + 0x10)) == 0) {
            temp_a0 = *(char **)(arg0 + 0x10);
            *(u16 *)(temp_a0 + 0xE) = (u16) (*(u16 *)(temp_a0 + 0xE) | 0x200);
        }
        *(s32 *)(arg0 + 0) = -1;
    }
}
