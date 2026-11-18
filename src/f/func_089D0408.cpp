typedef int s32;

extern "C" {

typedef struct V10_0 { virtual void vfunc_08(); virtual void vfunc_0C(); virtual void vfunc_10(s32); } V10_0;

void func_089D0408(char *arg0) {
    s32 temp_a1;
    char **temp_a0;

    temp_a1 = *(s32 *)(arg0 + 0x11558);
    if (temp_a1 != 0) {
        temp_a0 = *(char ***)(arg0 + 4);
        ((V10_0 *) (temp_a0))->vfunc_10(temp_a1);
    }
    *(s32 *)(arg0 + 0x11554) = 0;
    *(s32 *)(arg0 + 0x11558) = 0;
    *(s32 *)(arg0 + 0x1155C) = 0;
}

}
