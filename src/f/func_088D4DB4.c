typedef unsigned char u8;
typedef int s32;

extern s32 func_088D5264(s32);

void func_088D4DB4(char *arg0) {
    if (*(u8 *)(arg0 + 0x8EC) != 0) {
        func_088D5264((s32) arg0);
    }
}
