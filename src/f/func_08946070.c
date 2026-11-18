typedef signed char s8;
typedef int s32;
typedef struct { char b[4]; } E4;

s8 func_08946070(s32 *arg0, s32 arg1) {
    return *(s8 *)((E4 *)((char *)(*arg0) + 4))[arg1].b;
}
