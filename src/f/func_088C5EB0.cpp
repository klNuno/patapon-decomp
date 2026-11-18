#include "common.h"

extern "C" {

class C_088C5EB0 {
public:
    u8 pad_00[0x8100];
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

typedef struct {
    u8 pad_00[0x7FF8];
    u8 unk_7FF8[0x4];
} M118_088C5EB0;

typedef struct {
    u8 pad_00[0x118];
    M118_088C5EB0 unk_118;
    u8 pad_8114[0x1B1B0 - 0x8114];
    u8 unk_1B1B0[0x1B5F8 - 0x1B1B0];
    u8 unk_1B5F8[0x2BE50 - 0x1B5F8];
    u8 unk_2BE50[0x2FF04 - 0x2BE50];
    u8 unk_2FF04[0x4];
} Obj_088C5EB0;

void func_0880416C(void *);
void func_088BC5CC(void *, s32);
void func_088E07A8(void *, s32);
void func_088E2548(void *, s32);
void func_088F6C10(void *, s32);
void func_0893B9F8(void *, s32);
void func_0898F728(void *, s32);
extern u8 D_08A46458[];

Obj_088C5EB0 *func_088C5EB0(Obj_088C5EB0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)&arg0->pad_00[0x8100] = D_08A46458;
        ((C_088C5EB0 *)arg0)->vfunc_0C();
        func_0893B9F8(arg0->unk_2FF04, -1);
        func_0898F728(arg0->unk_2BE50, -1);
        func_088F6C10(arg0->unk_1B5F8, -1);
        func_088E2548(arg0->unk_1B1B0, -1);
        func_088E07A8(arg0->unk_118.unk_7FF8, -1);
        func_088BC5CC(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
