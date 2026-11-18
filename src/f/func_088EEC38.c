#include "common.h"

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
} Obj2_089991B0;

typedef Obj2_089991B0 O_08909BEC;

typedef struct {
    u8 pad_00[0x14];
    Obj2_089991B0 *unk_14;
} UnkObject;

extern void *D_08AD8DD8[];
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
O_08909BEC *func_0892E80C(void *, s32);
void func_088D46FC(Obj2_089991B0 *, f32, f32, f32, f32);
void func_0892DFB4(Obj2_089991B0 *, s32);

void func_088EEC38(UnkObject *arg0, void *arg1)
{
    s32 temp = *func_0885356C(arg1, 0, 1, 4);
    Obj2_089991B0 *temp2;
    if (temp >= 0) {
        temp2 = func_0892E80C(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL, temp);
        arg0->unk_14 = temp2;
        temp2->unk_8D0 = 1;
        func_088D46FC(arg0->unk_14, 0.25f, 0.25f, 0.25f, 1.0f);
        func_0892DFB4(arg0->unk_14, 0);
    }
    func_08852F00(arg1, 0);
}
