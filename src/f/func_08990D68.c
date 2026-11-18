typedef short s16;
typedef int s32;

extern int func_0880416C(s32);
extern int func_08990DC4(s32);

s32 func_08990D68(s32 arg0, s16 arg1) {
    s32 temp_a0;

    if (arg0 != 0) {
        temp_a0 = arg0 + 4;
        if (temp_a0 != 0) {
            func_08990DC4(temp_a0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
