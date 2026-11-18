typedef int s32;

extern s32 func_0882C278(s32, s32);
extern s32 func_0882DE88(s32, s32);

void func_0893F148(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v0;
    char *temp_v1;

    temp_v0 = func_0882C278(*arg0, arg1);
    if (temp_v0 != 0) {
        temp_s0 = -(arg2 & 0xFF);
        func_0882DE88(temp_v0, temp_s0);
        *(s32 *)(temp_v0 + 0x40) = temp_s0;
        temp_v1 = *(char **)(temp_v0 + 0x10);
        if (temp_v1 != 0) {
            *(s32 *)(temp_v1 + 0x40) = temp_s0;
        }
    }
}
