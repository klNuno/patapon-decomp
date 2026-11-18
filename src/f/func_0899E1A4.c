typedef int s32;
typedef struct { char b[544]; } E544;

s32 func_0899E1A4(char *arg0, char *arg1) {
    s32 var_v0;
    s32 temp_a1_i;

    temp_a1_i = (int) (arg1);
    var_v0 = 0;
    if ((*(s32 *) &((E544 *) (arg0 + 0xA0))[temp_a1_i] != -1) && (*(s32 *) &((E544 *) (arg0 + 0x220))[temp_a1_i] == 0)) {
        var_v0 = 1;
    }
    return var_v0;
}
