typedef int s32;

extern "C" {

typedef struct V08_0 { virtual s32 *vfunc_08(s32, s32); } V08_0;
extern s32 func_08827AD4(void);

char *func_088DD454(char *arg0, s32 arg1, s32 arg2) {
    s32 *temp_v0;
    s32 temp_a0;

    *(s32 *)(arg0 + 0) = arg2;
    *(s32 *)(arg0 + 4) = func_08827AD4();
    *(s32 *)(arg0 + 8) = arg1;
    temp_a0 = *(s32 *)(arg0 + 4);
    temp_v0 = ((V08_0 *) (temp_a0))->vfunc_08(arg1, *(s32 *)(arg0 + 0));
    *(s32 **)(arg0 + 0xC) = temp_v0;
    *temp_v0 = 1;
    return arg0;
}

}
