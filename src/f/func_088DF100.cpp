#include "common.h"

extern "C" {

class C_088DF100 {
public:
    u8 pad_00[0x80];
    virtual void v08();
    virtual void v0C(s32);
};

typedef struct S_088DF100 {
    u8 pad_00[0x30];
    u8 unk_30[0x20];
    s32 unk_50;
    u8 pad_54[0x1D7F70 - 0x54];
    C_088DF100 unk_1D7F70;
    u8 pad_1D7FF4[0x1D8000 - 0x1D7F74 - 0x80];
    u8 unk_1D8000;
    u8 pad_1D8001[3];
    u32 unk_1D8004;
} S_088DF100;

s32 func_08860820(void *, s32);
s32 func_08913AE0(void *);
extern void *D_08A8812C[];

void func_088DF100(S_088DF100 *arg0, s32 arg1) {
    bool b = !(bool)func_08860820(D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL, 0);

    if (b) {
        arg0->unk_1D8004 = 0;
    } else if (arg0->unk_50 == 0 && func_08913AE0(arg0->unk_30) != 0) {
        arg0->unk_1D8004 += arg1;
    }
    if (arg0->unk_1D8004 > 0x17700U) {
        arg0->unk_1D7F70.v0C(arg1);
        arg0->unk_1D8000 = 1;
    } else {
        arg0->unk_1D8000 = 0;
    }
}

}
