typedef int s32;

void func_0895C9EC(char *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if (var_a1 == -1) {
        var_a1 = *(s32 *)(arg0 + 0x30) + 0x1053;
    }
    *(s32 *)(arg0 + 0x30) = var_a1;
    *(s32 *)((*(s32 *)(arg0 + 0xD4) + (*(s32 *)(arg0 + 0x28) * 4))) = var_a1;
}
