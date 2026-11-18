#include "common.h"

extern "C" {

class V {
public:
    u8 pad_00[0x28];
    virtual void f0(s32);
};

typedef struct {
    u8 pad_00[0x100];
    V *unk_100;
    u8 pad_104[4];
    s32 unk_108;
} S0;

void func_0881F5C0(void *, s32, s32);
void func_088F98E4(s32);
V *func_08938FFC(void *, s32, s32, s32, s32);

void func_0890A680(S0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *m;

    if (arg0->unk_100 != NULL) {
        arg0->unk_100->f0(-1);
        arg0->unk_100 = NULL;
        func_088F98E4(arg0->unk_108);
        func_0881F5C0(arg0, 0, 0x100);
    }
    m = (u8 *)arg0 + ((u32)arg0 & 0xF);
    if (m != NULL) {
        m = func_08938FFC(m, arg0->unk_108, arg1, arg2, arg3);
    }
    arg0->unk_100 = (V *)m;
}

}
