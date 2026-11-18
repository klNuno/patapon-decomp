typedef int s32;

extern s32 func_088F6BD8(s32, void *);
extern s32 func_088F80EC(void *, s32, s32);

s32 func_088F806C(char **arg0, char *arg1, s32 arg2) {
    s32 sp1C;
    char *temp_v0;

    func_088F6BD8((s32) &sp1C, arg1 + 0x10610);
    func_088F80EC(arg1 + 0x10610, sp1C, arg2);
    temp_v0 = arg1 + 0x10610;
    *arg0 = temp_v0;
    *arg0 = *(char **)(temp_v0 + 4);
    return 0;
}
