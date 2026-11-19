#include "common.h"

extern u8 D_08A44BA4[];

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    u8 *unk_14;
} Sub_0896CAB8;

void func_088696FC(Sub_0896CAB8 *);

Sub_0896CAB8 *func_088698B4(Sub_0896CAB8 *arg0) {
    arg0->unk_14 = D_08A44BA4;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    func_088696FC(arg0);
    arg0->unk_10 = 0;
    return arg0;
}
