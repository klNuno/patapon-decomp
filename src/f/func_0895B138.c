#include "common.h"

extern char D_08A04CC8[];
void func_0895B198(char *arg0);
s32 sceKernelCreateMsgPipe(const char *, s32, s32, s32, void *);

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} T;

void func_0895B138(T *arg0, s32 arg1) {
    s32 temp = arg1;
    if (temp != 0) {
        func_0895B198((char *)arg0);
        arg0->unk_00 = sceKernelCreateMsgPipe(D_08A04CC8, 2, 0, temp, NULL);
        arg0->unk_04 = temp;
        arg0->unk_08 = 0;
    }
}
