typedef int s32;
typedef unsigned int u32;

extern s32 func_0885DE4C(s32);

void func_0899ED9C(char *arg0) {
    s32 var_s1;
    u32 var_s0;

    var_s1 = (int) (arg0);
    func_0885DE4C(var_s1 + 0xC);
    var_s0 = 0;
    do {
        func_0885DE4C(var_s1 + 0x34);
        var_s0 += 1;
        var_s1 += 0x28;
    } while (var_s0 < 0x12U);
}
