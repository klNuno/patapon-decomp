#include "common.h"

extern u8 D_08A477CC[];
extern u8 D_08A47820[];
void func_0888AA58(void *);

typedef struct {
    void *volatile unk_00;
    u8 pad_04[4];
    u8 unk_08[0x18];
    s32 unk_20;
    s32 unk_24;
    u8 pad_28[0x54];
    s32 unk_7C;
    u8 pad_80[1];
    u8 unk_81;
    u8 unk_82;
} T;

T *func_0894DB88(T *arg0) {
    arg0->unk_00 = D_08A477CC;
    arg0->unk_00 = D_08A47820;
    func_0888AA58(arg0->unk_08);
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    arg0->unk_7C = 0;
    arg0->unk_81 = 0;
    arg0->unk_82 = 0;
    return arg0;
}
