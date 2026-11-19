#include "common.h"

extern "C" {

extern s32 func_08918548(s32, s32);
extern void func_08977BD8(void *);
extern s32 func_0897812C(void *);

struct T {
    u8 pad_00[0x1080];
    u8 unk_1080;
};

void func_08918250(T *arg0) {
    func_08977BD8(&arg0->unk_1080);
    if (func_0897812C(&arg0->unk_1080) != 0) {
        func_08918548((s32)arg0, 7);
    }
}

}
