#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    void *unk_0C;
} Obj;

void func_0880416C(void *);
void func_08913D24(void *, s16);
extern u8 D_08A46A1C[];

Obj *func_08915668(Obj *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_0C = D_08A46A1C;
        func_08913D24(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
