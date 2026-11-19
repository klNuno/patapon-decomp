#include "common.h"

typedef struct {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
} Obj_088F06D4;

Obj_088F06D4 *func_0892E80C(void *, s32);
s32 func_0892E940(void *);
extern void *D_08AD8DD8[];

typedef struct {
    u8 pad_00[0x500];
    s32 unk_500;
} T;

static inline void *func_088F987C_unk_00(void) {
    void *temp = D_08AD8DD8[0];
    return temp != NULL ? temp : NULL;
}

s32 func_088F987C(T *arg0) {
    if (arg0->unk_500 < 0) {
        Obj_088F06D4 *ptr;
        void *temp;
        arg0->unk_500 = func_0892E940(func_088F987C_unk_00());
        temp = func_088F987C_unk_00();
        ptr = func_0892E80C(temp, arg0->unk_500);
        ptr->unk_8D0 = 1;
    }
    return arg0->unk_500;
}
