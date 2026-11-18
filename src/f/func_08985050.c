typedef int s32;
typedef float f32;

extern s32 func_08985828(s32, s32);

void func_08985050(s32 arg0) {
    s32 var_v1;
    char *temp_v0;

    temp_v0 = (char *) (func_08985828(arg0, 0));
    var_v1 = 1;
    if (!(*(f32 *)(temp_v0 + 0x5C) <= *(f32 *)(temp_v0 + 0x54))) {
        var_v1 = 0;
    }
    if ((var_v1 & 0xFF) == 1) {
        *(s32 *)(arg0 + 0x160) = 3;
    }
}
