typedef unsigned char u8;

u8 func_08852B4C(char *arg0, u8 arg1) {
    u8 temp_v0;

    temp_v0 = *(u8 *)(arg0 + 0xC);
    *(u8 *)(arg0 + 0xC) = arg1;
    return temp_v0;
}
