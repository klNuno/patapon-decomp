typedef int s32;

extern s32 func_08810B50(s32);

s32 func_08810C40(s32 arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = func_08810B50(arg0);
    return temp_s0 == func_08810B50(arg1);
}
