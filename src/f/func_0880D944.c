typedef unsigned char u8;
typedef short s16;
typedef int s32;

extern int func_0880D9A0(char *);
extern int func_0880D9A8(s32);

char *func_0880D944(char *arg0, s16 arg1) {
    if (arg0 != 0) {
        if (*(u8 *)(arg0 + 4) != 0) {
            func_0880D9A8(*(s32 *)(arg0 + 0));
        }
        if (arg1 > 0) {
            func_0880D9A0(arg0);
        }
    }
    return arg0;
}
