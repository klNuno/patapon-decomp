typedef int s32;

extern s32 func_08882414(s32);
extern s32 func_08882F6C(s32, s32);

s32 func_08880C8C(char *arg0) {
    s32 temp_v0;

    temp_v0 = func_08882414(*(s32 *)(arg0 + 0x70));
    if (temp_v0 != 0) {
        *(char **)(temp_v0 + 0x3C) = arg0;
        func_08882F6C(temp_v0, 1);
    }
    return temp_v0;
}
