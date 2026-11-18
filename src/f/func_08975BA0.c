typedef int s32;
typedef float f32;

extern s32 func_088CB0B0(s32, s32);

f32 func_08975BA0(char **arg0, s32 arg1) {
    return (f32) func_088CB0B0(*(s32 *)((char *)(*arg0) + 0x10), arg1) - 1.0f;
}
