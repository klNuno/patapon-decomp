typedef int s32;

extern s32 func_0881F280(s32, s32, s32);

s32 func_0880FC7C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    temp_s0 = arg1 - arg0;
    func_0881F280(arg2, arg0, temp_s0);
    return arg2 + temp_s0;
}
