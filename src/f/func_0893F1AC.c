typedef int s32;

extern s32 func_0882C278(s32, s32);
extern s32 func_0882DECC(s32);

s32 func_0893F1AC(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_0882C278(*arg0, arg1);
    if (temp_v0 != 0) {
        return func_0882DECC(temp_v0) != 0;
    }
    return 0;
}
