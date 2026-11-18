typedef unsigned char u8;
typedef int s32;

void func_0888FBF0(char *arg0) {
    char *temp_a0;

    if (*(u8 *)(arg0 + 0x690) != 0) {
        temp_a0 = *(char **)(arg0 + 0xDA0);
        if (temp_a0 != 0) {
            *(s32 *)(temp_a0 + 0x64) = (s32) (*(s32 *)(temp_a0 + 0x64) + 1);
        }
    }
}
