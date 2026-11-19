#include "common.h"

typedef struct {
    void *volatile unk_00;
    u8 pad_04[0x494];
    s32 unk_498;
    s32 unk_49C;
    u8 unk_4A0[0x10];
    u8 unk_4B0;
    u8 unk_4B1;
    u8 unk_4B2;
} S;

extern u8 D_08A46568[];
extern u8 D_08A46410[];
void func_088D8FF4(S *, const S *);
void func_088D8FAC(void *, const void *);

S *func_088D8ED0(S *arg0, const S *arg1) {
    func_088D8FF4(arg0, arg1);
    arg0->unk_00 = D_08A46568;
    arg0->unk_498 = arg1->unk_498;
    arg0->unk_49C = arg1->unk_49C;
    func_088D8FAC(arg0->unk_4A0, arg1->unk_4A0);
    arg0->unk_4B0 = arg1->unk_4B0;
    arg0->unk_4B1 = arg1->unk_4B1;
    arg0->unk_4B2 = arg1->unk_4B2;
    arg0->unk_00 = D_08A46410;
    return arg0;
}
