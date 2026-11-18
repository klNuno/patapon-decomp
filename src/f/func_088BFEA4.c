typedef unsigned char u8;
typedef int s32;
typedef float f32;
typedef struct { char b[56]; } E56;

void func_088BFEA4(char *arg0, f32 fparg0) {
    s32 temp_a1;

    temp_a1 = *(s32 *)(arg0 + 4);
    if ((temp_a1 != 0) && (*(u8 *)(arg0 + 0x18) != 0)) {
        *(f32 *)((E56 *)((char *)temp_a1 + 8))[*(s32 *)(arg0 + 0xC)].b = fparg0;
    }
}
