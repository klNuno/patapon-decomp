typedef signed char s8;
typedef int s32;
typedef unsigned int u32;

extern s32 func_0881F120(s32, s32, s32);
extern s32 func_08822BC4(s32);

void func_089154BC(s32 arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = func_08822BC4(arg1);
    if ((u32) var_s0 >= 0x80U) {
        var_s0 = 0x80;
    }
    func_0881F120(arg0 + 0x89D, arg1, var_s0);
    *(s8 *)((char *)((var_s0 + arg0)) + 0x89D) = 0;
}
