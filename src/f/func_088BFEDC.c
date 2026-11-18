typedef unsigned char u8;
typedef int s32;

void func_088BFEDC(char *arg0, s32 arg1, s32 arg2) {
    s32 temp_a3;
    char *temp_v1;

    temp_a3 = *(s32 *)(arg0 + 4);
    if ((temp_a3 != 0) && (*(u8 *)(arg0 + 0x18) != 0)) {
        temp_v1 = (char *) (temp_a3 + (*(s32 *)(arg0 + 0xC) * 0x38));
        *(s32 *)(temp_v1 + 0xC) = arg1;
        *(s32 *)(temp_v1 + 0x10) = arg2;
    }
}
