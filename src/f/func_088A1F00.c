typedef unsigned short u16;
typedef int s32;
typedef struct { char b[12]; } E12;

void func_088A1F00(char *arg0, s32 arg1, s32 arg2) {
    s32 var_t1;
    u16 temp_a3;
    char *temp_t0;
    char *var_a0;

    temp_t0 = *(char **)(arg0 + 0x2C);
    if ((temp_t0 != 0) && (temp_a3 = *(u16 *)(temp_t0 + 2), var_t1 = 0, ((s32) temp_a3 > 0))) {
        var_a0 = *(char **)(arg0 + 0x28);
loop_3:
        if (*(s32 *)(var_a0 + 4) == arg1) {
            *(s32 *)((E12 *)(temp_t0 + 4))[var_t1].b = arg2;
        } else {
            var_t1 += 1;
            var_a0 += 0xC;
            if (var_t1 >= (s32) temp_a3) {

            } else {
                goto loop_3;
            }
        }
    }
}
