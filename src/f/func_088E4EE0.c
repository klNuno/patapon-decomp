typedef int s32;
typedef float f32;

extern s32 func_088E5034(s32);

f32 func_088E4EE0(s32 arg0) {
    return *(f32 *)((char *)(((char **)((char *)arg0 + 0x2A0))[func_088E5034(arg0)]) + 0x124);
}
