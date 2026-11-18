#include "common.h"

typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
    u8 unk_104;
    u8 pad_105[0x7];
    u8 unk_10C;
    u8 unk_10D[0x7];
    u8 *unk_114;
} Obj_08885980;

void func_08858F88(void *, s32, s32, void *);
void func_08885A1C(Obj_08885980 *, s32, s32);
void func_08885B30(Obj_08885980 *, s32, s32);

void func_08885980(Obj_08885980 *arg0, s32 arg1, s32 arg2, void *arg3) {
    func_08858F88(arg0, arg1, arg2, arg3);
    func_08858F88(arg0, arg1, arg2 + 2, (*(u32 *)&arg0->unk_10C & 1) ? arg0->unk_114 : arg0->unk_10D);
    func_08885A1C(arg0, 5, 5);
    if (arg0->unk_104 != 0) {
        func_08885B30(arg0, arg1 + 0xC, arg2 + 0x14);
    }
    arg0->unk_100 = 0xFFFFFF;
}
