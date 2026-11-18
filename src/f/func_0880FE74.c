typedef int s32;
typedef unsigned int u32;

extern int func_0880DECC(s32);
extern u32 func_0880FEA0(s32);

s32 func_0880FE74(s32 arg0) {
    return (func_0880FEA0(func_0880DECC(arg0)) >> 1) - 1;
}
