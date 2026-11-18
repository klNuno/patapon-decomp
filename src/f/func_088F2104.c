typedef short s16;
typedef int s32;

extern s32 func_0881F120(s32, s32, s32);
extern s32 func_088B35A0(s32);

void func_088F2104(s32 arg0, s32 arg1) {
    s32 sp1C;
    s32 sp18;
    s32 *var_v1;
    s32 temp_v0;
    s32 temp_v1;

    sp1C = 0;
    temp_v0 = func_088B35A0(arg1);
    sp18 = temp_v0;
    if (temp_v0 < sp1C) {
        var_v1 = &sp1C;
    } else {
        var_v1 = &sp18;
    }
    temp_v1 = *var_v1;
    sp1C = temp_v1;
    if (temp_v1 > 0) {
        func_0881F120(arg0 + 0x898, arg1, temp_v1 * 2);
    }
    ((s16 *)((char *)arg0 + 0x898))[sp1C] = 0;
}
