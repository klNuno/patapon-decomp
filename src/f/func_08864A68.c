#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
} Obj;

extern char D_08A44B24[];
void func_088142AC(s32);
void func_0880416C(void *);

Obj *func_08864A68(Obj *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A44B24;
        func_088142AC(arg0->unk_04);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
