typedef unsigned char u8;
typedef int s32;

extern int func_089D6714(char *);

s32 func_089D6E3C(char *arg0) {
    if (*(u8 *)(arg0 + 0x1510) == 1) {
        return 1;
    }
    *(u8 *)(arg0 + 0x1510) = 1U;
    func_089D6714(arg0 + 0x1514);
    return 1;
}
