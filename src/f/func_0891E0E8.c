#include "common.h"

typedef struct T088F23D0 T088F23D0;

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x7C];
    u8 unk_80[0x2804];
    u8 *unk_2884;
    s32 unk_2888;
    u8 pad_288C[0x4C];
    u8 unk_28D8[0x1C04];
    u8 *unk_44DC;
    s32 unk_44E0;
} Obj;

extern u8 D_08A46BD0[];
void func_088AEF1C(T088F23D0 *);
extern void func_0891E154(Obj *);

Obj *func_0891E0E8(Obj *arg0)
{
    func_088AEF1C((T088F23D0 *)arg0);
    arg0->unk_00 = D_08A46BD0;
    arg0->unk_2884 = (u8 *)(((u32)arg0->unk_80 & 3) + (u32)arg0 + 0x80);
    arg0->unk_2888 = 0;
    arg0->unk_44DC = (u8 *)(((u32)arg0->unk_28D8 & 3) + (u32)arg0 + 0x28D8);
    arg0->unk_44E0 = 0;
    func_0891E154(arg0);
    return arg0;
}
