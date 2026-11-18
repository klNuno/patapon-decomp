typedef unsigned char u8;
typedef int s32;

extern s32 func_088DDC8C(s32);
extern s32 func_08916D38(s32);

void func_08916D00(char *arg0) {
    if (*(u8 *)(arg0 + 0x1521) != 0) {
        func_088DDC8C(*(s32 *)(arg0 + 0x1518));
        func_08916D38((s32) arg0);
    }
}
