typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

extern s32 func_0888B1AC(s32, s32, s32);

void func_0888B110(s32 arg0, char **arg1) {
    char *temp_a1;
    char *temp_v0;

    temp_a1 = *arg1;
    temp_v0 = temp_a1 + *(s32 *)(temp_a1 + 0x10);
    func_0888B1AC(arg0, (s32) temp_a1, (s32) ((u32) (((*(u8 *)(temp_v0 + 6) << 0x18) | ((*(u8 *)(temp_v0 + 5) << 0x10) | (*(u8 *)(temp_v0 + 3) | (*(u8 *)(temp_v0 + 4) << 8)))) - 0x28) >> 4));
    *(s32 *)(arg0) = 0;
}
