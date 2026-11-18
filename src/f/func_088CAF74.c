#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0xC];
    u32 unk_20;
} Obj_088CAF74;

u8 func_088CB950(s32, Obj_088CAF74 *, Obj_088CAF74 *);
u8 func_088CBB58(s32, Obj_088CAF74 *, Obj_088CAF74 *);
void func_088CBF40(void *, s32);
extern u8 D_089FB8B8[];

u8 func_088CAF74(Obj_088CAF74 *arg0, Obj_088CAF74 *arg1) {
    u32 hi;
    u32 lo;
    s32 d;
    u8 ret;

    if (arg0 == NULL || arg1 == NULL) {
        return 0;
    }
    hi = arg0->unk_20;
    lo = arg1->unk_20;
    if (hi < lo) {
        hi = arg1->unk_20;
        lo = arg0->unk_20;
    }
    d = hi - lo;
    if (D_089FB8B8[0] != 0) {
        func_088CBF40(&arg0->unk_10, d);
        return func_088CB950(arg0->unk_10, arg0, arg1);
    }
    ret = func_088CBB58(arg0->unk_10, arg0, arg1);
    func_088CBF40(&arg0->unk_10, d);
    return ret;
}
