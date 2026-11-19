#include "common.h"

typedef struct {
    u8 pad_00[4];
    void *unk_04;
} S;

s32 func_088148F0(s32, s32);
void func_0881F120(void *, void *, s32);
s32 sceDisplayGetFrameBuf(void **, s32 *, s32 *, s32);
void sceKernelDcacheWritebackAll(void);

s32 func_08939FF4(S *arg0) {
    void *temp = NULL;
    s32 temp2 = 0;
    s32 temp3 = 0;

    func_088148F0(0, 0);
    if (sceDisplayGetFrameBuf(&temp, &temp2, &temp3, 0) == 0) {
        func_0881F120(arg0->unk_04, temp, 0x80000);
        sceKernelDcacheWritebackAll();
        return 0;
    }
    return 1;
}
