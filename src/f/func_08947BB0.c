typedef int s32;

extern s32 func_08945908(s32, s32);
extern s32 func_08947BF0(s32, s32);

s32 func_08947BB0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_08947BF0(arg0, arg1);
    if (temp_v0 == -1) {
        return 0;
    }
    return func_08945908(arg0 + 4, temp_v0);
}
