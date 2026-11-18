typedef int s32;

void func_088B7708(char *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = arg1 & 0xFF;
    *(s32 *)(arg0 + 0x80) = temp_v1;
    *(s32 *)(arg0 + 0x110) = temp_v1;
}
