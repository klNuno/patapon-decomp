#include "common.h"

typedef struct Elem_0896A02C {
    s32 unk_00;
    s32 unk_04;
} Elem_0896A02C;

typedef struct Obj_0896A02C {
    u8 pad_00[0x1008];
    Elem_0896A02C *unk_1008;
    s32 unk_100C;
} Obj_0896A02C;

void func_0880416C(void *);

Obj_0896A02C *func_0896A02C(Obj_0896A02C *arg0, s16 arg1) {
    Elem_0896A02C **data;
    Elem_0896A02C *temp;

    if (arg0 != NULL) {
        if ((u8 *)arg0 + 4 != NULL) {
            if ((u8 *)arg0 + 4 != NULL) {
                temp = arg0->unk_1008;
                data = &arg0->unk_1008;
                if ((u32)temp != (u32)(temp + arg0->unk_100C)) {
                    do {
                        temp++;
                    } while (temp != *data + arg0->unk_100C);
                }
                arg0->unk_100C = 0;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
