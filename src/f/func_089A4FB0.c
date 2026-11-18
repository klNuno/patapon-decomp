typedef int s32;

extern s32 func_089C6964(s32, s32);

void func_089A4FB0(char *arg0, s32 arg1) {
    *(char **)(arg0 + 0x385D8) = 0;
    if (arg1 != 1) {
        func_089C6964((s32) (arg0 + 0x17148), 1);
        *(char **)(arg0 + 0x385D8) = (char *) (arg0 + 0x17148);
    }
}
