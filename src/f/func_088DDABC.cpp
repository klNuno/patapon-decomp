typedef int s32;

extern "C" {

typedef struct V08_0 { virtual void vfunc_08(s32); } V08_0;

void func_088DDABC(char *arg0, char **arg1, s32 arg2) {
    char ***temp_v1;

    if (arg1 != 0) {
        if (arg2 != 0) {
            ((V08_0 *) (arg1))->vfunc_08(-1);
        }
        temp_v1 = (char ***) (*(s32 *)(arg0 + 0x4E0) + (*(s32 *)(arg0 + 0x4E4) * 4));
        if (temp_v1 != 0) {
            *temp_v1 = arg1;
        }
        *(s32 *)(arg0 + 0x4E4) = (s32) (*(s32 *)(arg0 + 0x4E4) + 1);
    }
}

}
