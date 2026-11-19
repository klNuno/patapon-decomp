#include "common.h"

extern "C" {

void func_0895B988(void *);
s32 sceKernelExitThread(s32);

class T {
public:
    u8 pad_00[4];
    u8 unk_04[0x10];
    virtual void unk_08();
    virtual u32 unk_0C();
};

s32 func_0895BAC8(s32 arg0, T **arg1) {
    T *temp = *arg1;
    if (temp == NULL) {
        return 0;
    } else {
        u32 unk_00 = (u8)temp->unk_0C();
        s32 unk_04;
        func_0895B988(temp->unk_04);
        unk_04 = 0;
        if (unk_00 == 0) {
            unk_04 = 1;
        }
        sceKernelExitThread(0);
        return unk_04;
    }
}

}
