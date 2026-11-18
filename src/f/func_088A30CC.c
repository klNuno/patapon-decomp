typedef int s32;

extern s32 func_088A3154(s32, s32);

void func_088A30CC(s32 arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = arg1 + 0x20;
loop_1:
    func_088A3154(arg0, var_s0);
    if (*(s32 *)(var_s0 + 0) != 0) {
        var_s0 += *(s32 *)(var_s0 + 4) + 8;
        goto loop_1;
    }
}
