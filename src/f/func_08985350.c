typedef signed char s8;
typedef int s32;

extern s32 func_0898D760(s32, s32, s32);

void func_08985350(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_0898D760(arg0 + 0x1B8, arg0, 1);
    }
    *(s32 *)(arg0 + 0x66C) = 0;
    *(s32 *)(arg0 + 0x670) = 0x3F000000;
    *(s8 *)(arg0 + 0x668) = 1;
}
