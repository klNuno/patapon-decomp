typedef signed char s8;
typedef int s32;

void func_088DF474(char *arg0, s32 arg1) {
    s32 *temp_v1;

    *(s8 *)((char *)(*(char **)(arg0 + 4)) + 0xB21B0) = 0;
    *(s32 *)(arg0 + 8) = arg1;
    temp_v1 = *(s32 **)(arg0 + 0xC);
    if (temp_v1 != 0) {
        *temp_v1 = arg1;
    }
}
