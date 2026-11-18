typedef int s32;

extern int func_088CE1EC(s32, char *);
extern int func_088CE494(s32, char *);

void func_088CE5A4(char *arg0, s32 arg1) {
    s32 temp_s0;

    *(s32 *)(arg0 + 0x24) = arg1;
    temp_s0 = *(s32 *)(arg0 + 0);
    if (temp_s0 != 0) {
        func_088CE494(temp_s0, arg0);
        func_088CE1EC(temp_s0, arg0);
    }
}
