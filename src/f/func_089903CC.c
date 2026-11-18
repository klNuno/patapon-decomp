typedef int s32;
typedef unsigned int u32;

extern s32 func_08975FC8(s32);
extern s32 func_08976028(s32);

s32 func_089903CC(s32 arg0) {
    s32 var_s0;

    var_s0 = func_08975FC8(arg0);
    if ((var_s0 == 0) && (func_08976028(arg0) < (u32) *(u32 *)(arg0 + 0x888))) {
        var_s0 = 3;
    }
    return var_s0;
}
