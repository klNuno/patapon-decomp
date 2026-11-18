typedef unsigned short u16;

char *func_088111FC(char *arg0, char *arg1) {
    *(u16 *)(arg0 + 0) = (u16) *(u16 *)(arg1 + 0);
    *(u16 *)(arg0 + 4) = (u16) *(u16 *)(arg1 + 4);
    *(u16 *)(arg0 + 8) = (u16) *(u16 *)(arg1 + 8);
    *(u16 *)(arg0 + 0xC) = (u16) *(u16 *)(arg1 + 0xC);
    return arg0;
}
