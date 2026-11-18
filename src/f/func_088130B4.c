#include "common.h"

typedef struct {
    s32 unk_00;
} Obj_088130B4;

void func_0880416C(Obj_088130B4 *);
s32 *func_08812048(Obj_088130B4 *);
void func_08810574(void *, s32, s32);
void *func_088129AC(Obj_088130B4 *);
void func_0881313C(Obj_088130B4 *);

Obj_088130B4 *func_088130B4(Obj_088130B4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_0881313C(arg0);
        if (arg0->unk_00 != 0) {
            func_08810574(func_088129AC(arg0), arg0->unk_00, *func_08812048(arg0));
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
