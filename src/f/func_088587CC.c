typedef int s32;

extern s32 func_08827A70(s32, s32, s32);

void func_088587CC(char *arg0) {
    s32 temp_v0;

    temp_v0 = func_08827A70(4, *(s32 *)(arg0 + 4), 4);
    if (temp_v0 != 0) {
        *(s32 *)(temp_v0) = 0;
    }
}
