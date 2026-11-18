typedef int s32;
typedef float f32;

extern char *func_08899E18(s32, s32);

f32 func_0896FD68(char **arg0) {
    return *(f32 *)((char *)(func_08899E18(*(s32 *)((char *)(*arg0) + 0x36B10), 0)) + 0x9300);
}
