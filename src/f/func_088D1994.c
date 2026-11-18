typedef int s32;
typedef float f32;
typedef struct { char b[48]; } E48;

f32 func_088D1994(s32 *arg0, s32 arg1) {
    return *(f32 *)((E48 *)((char *)(*arg0) + 0x18))[arg1].b;
}
