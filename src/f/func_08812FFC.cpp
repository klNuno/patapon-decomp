#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
} Obj_088130B4;

struct Unk {};

s32 *func_08812048(Obj_088130B4 *);
void func_088128A4(void);
void *func_088129AC(Obj_088130B4 *);
s32 func_088129D0(void *, u32, s32);
u32 func_0881306C(Obj_088130B4 *);

static inline u32 func_1(Obj_088130B4 *arg0, const Unk &)
{
    return func_0881306C(arg0);
}

void func_08812FFC(Obj_088130B4 *arg0, u32 arg1)
{
    if (func_1(arg0, Unk()) < arg1) {
        func_088128A4();
    }
    arg0->unk_00 = func_088129D0(func_088129AC(arg0), arg1, 0);
    *func_08812048(arg0) = arg1;
}

}
