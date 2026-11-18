typedef int s32;

extern s32 func_08894FBC(s32, s32, s32);

s32 func_08899E2C(char *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = *(s32 *)((char *)((*(s32 *)(arg0 + 0x3D8) + (arg2 * 0x10))) + 8);
    if (temp_a0 == 0) {
        return 0;
    }
    temp_v0 = func_08894FBC(temp_a0, arg1, 0);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    return 0;
}
