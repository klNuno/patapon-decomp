typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern s32 func_0881F120(s32, s32, s32);
extern s32 func_08976028(s32);

void func_08975F58(s32 arg0, s32 arg1, u32 arg2) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = func_08976028(arg0);
    if (arg2 < (u32) var_v0) {
        var_v0 = arg2 - 1;
    }
    temp_s0 = var_v0 * 2;
    func_0881F120(arg1, arg0 + 0x80, temp_s0);
    *(u16 *)((arg1 + temp_s0)) = 0;
}
