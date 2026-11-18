typedef signed char s8;
typedef int s32;

void func_088B8F64(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x468) = arg1;
    *(s32 *)(arg0 + 0x46C) = arg1;
    *(s8 *)(arg0 + 0x470) = 0;
}
