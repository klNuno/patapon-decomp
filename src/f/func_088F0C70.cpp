#include "common.h"

extern "C" {

class B_088F0C70 {
public:
    u8 pad_00[0x91C];
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

typedef struct T088F0C70 {
    u8 pad_00[0x91C];
    void *unk_91C;
    u8 pad_920[0x44];
    s32 unk_964;
    u8 pad_968[0x4];
    void *unk_96C;
    u8 pad_970[0x64];
    u8 *unk_9D4;
    s32 unk_9D8;
    u8 unk_9DC;
    u8 pad_9DD[0x3];
    s32 unk_9E0;
    s32 unk_9E4;
    u8 unk_9E8;
    u8 unk_9E9;
    u8 pad_9EA[0x2];
    s32 unk_9EC;
    s32 unk_9F0;
    s32 unk_9F4;
    u8 unk_9F8;
    u8 unk_9F9;
    u8 unk_9FA;
    u8 unk_9FB;
} T088F0C70;

extern u8 D_08A46624[];
extern u8 D_08A44C14[];
extern u8 D_08A450E8[];
void func_088F1BA4(T088F0C70 *);

T088F0C70 *func_088F0C70(T088F0C70 *arg0, s32 arg1) {
    u32 m;

    func_088F1BA4(arg0);
    arg0->unk_91C = D_08A46624;
    arg0->unk_964 = arg1;
    arg0->unk_96C = D_08A44C14;
    m = (u32)&arg0->unk_96C;
    arg0->unk_96C = D_08A450E8;
    arg0->unk_9D4 = (u8 *)(((m + 4) & 3) + m + 4);
    arg0->unk_9D8 = 0;
    arg0->unk_9DC = 1;
    arg0->unk_9E0 = 0;
    arg0->unk_9E4 = 0;
    arg0->unk_9E8 = 1;
    arg0->unk_9E9 = 1;
    arg0->unk_9EC = 0;
    arg0->unk_9F0 = 0;
    arg0->unk_9F4 = -1;
    arg0->unk_9F8 = 0;
    arg0->unk_9F9 = 1;
    arg0->unk_9FA = 0;
    arg0->unk_9FB = 1;
    ((B_088F0C70 *)arg0)->vfunc_0C();
    return arg0;
}

}
