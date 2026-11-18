typedef unsigned int u32;

void func_088853BC(char *arg0) {
    u32 temp_a1;

    temp_a1 = *(u32 *)(arg0 + 0x104) + 1;
    *(u32 *)(arg0 + 0x104) = temp_a1;
    *(u32 *)(arg0 + 0x104) = (u32) (temp_a1 % 5U);
}
