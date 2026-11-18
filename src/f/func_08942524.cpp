typedef unsigned char u8;
typedef int s32;

extern "C" {

typedef struct V10_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual s32 vfunc_10(); } V10_0;

void func_08942524(char *arg0, s32 arg1) {
    char *temp_a0;

    temp_a0 = *(char **)(arg0 + 0x1AC);
    if (temp_a0 != 0) {
        if ((*(u8 *)(temp_a0 + 0x4B0) != 0) && (arg1 != 0) && !(((V10_0 *) (temp_a0))->vfunc_10() & 0xFF)) {
            *(u8 *)((char *)(*(char **)(arg0 + 0x1AC)) + 0x4B0) = 0U;
        }
        if (*(u8 *)((char *)(*(char **)(arg0 + 0x1AC)) + 0x4B0) == 0) {
            *(char **)(arg0 + 0x1AC) = 0;
        }
    }
}

}
