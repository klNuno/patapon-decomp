typedef unsigned char u8;
typedef int s32;

extern int sceKernelSetEventFlag(s32, s32);

void func_0895D1C4(s32 arg0, char *arg1) {
    if (arg0 == 0xF) {
        if (*(u8 *)(arg1 + 0x6C) != 0) {
            sceKernelSetEventFlag(*(s32 *)(arg1 + 4), 2);
        } else {
            sceKernelSetEventFlag(*(s32 *)(arg1 + 4), 3);
        }
    }
}
