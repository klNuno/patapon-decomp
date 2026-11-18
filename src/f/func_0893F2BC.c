typedef int s32;
typedef unsigned int u32;

s32 func_0893F2BC(u32 *arg0, u32 arg1) {
    if ((u32) *arg0 < arg1) {
        return -1;
    }
    return ((s32 *)((char *)arg0 + 4))[arg1];
}
