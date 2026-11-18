#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
} Elem_089B31A8;

typedef struct {
    Elem_089B31A8 *unk_00;
} Vec_089B31A8;

typedef struct {
    u8 pad_00[0x11F8];
    Vec_089B31A8 unk_11F8;
} Obj_089B31A8;

class T {
    u8 pad_00[0x58];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20(s32);
};

s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_089B1314(s32);
void *func_089B3620(Obj_089B31A8 *, s32);
void func_08878864(s32, s32, s32, f32, f32, f32);

void func_089B3240(Obj_089B31A8 *arg0, s32 arg1) {
    if (func_089B1314(((Elem_089B31A8 *)((u8 *)arg0->unk_11F8.unk_00 + arg1 * 0x10))->unk_08) != -1) {
        ((T *)func_089B3620(arg0, 3))->unk_20(1);
        func_08878864(func_089B53D8(func_088586E8()), 0, 2, 1.0f, 0.0f, 0.0f);
    }
}

}
