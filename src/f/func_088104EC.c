#include "common.h"

typedef struct {
    s32 unk_00;
} Obj_088104EC;

void func_0880416C(Obj_088104EC *);
s32 *func_0880F690(Obj_088104EC *);
void func_08810574(void *, s32, s32);
void *func_08810590(Obj_088104EC *);
void func_088105B4(Obj_088104EC *);

Obj_088104EC *func_088104EC(Obj_088104EC *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_088105B4(arg0);
        if (arg0->unk_00 != 0) {
            func_08810574(func_08810590(arg0), arg0->unk_00, *func_0880F690(arg0));
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
