typedef signed char s8;
typedef int s32;
typedef struct { char b[4]; } E4;

void func_08947C8C(s32 *arg0, s32 arg1) {
    *(s8 *)((E4 *)((char *)(*arg0) + 5))[arg1].b = 0;
}
