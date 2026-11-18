typedef int s32;

extern s32 func_0895F93C(s32);

void func_089603DC(char *arg0) {
    s32 temp_v1;
    char *temp_s0;

    temp_v1 = *(s32 *)(arg0 + 0x20);
    if (temp_v1 != 0) {
        temp_s0 = (char *) (temp_v1 + 0x24);
        if ((temp_s0 != arg0) && (func_0895F93C((s32) arg0) != 0)) {
            *(s32 *)(temp_s0 + 0x20) = (s32) (*(s32 *)(temp_s0 + 0x20) - 1);
        }
        *(s32 *)(arg0 + 0x20) = 0;
    }
}
