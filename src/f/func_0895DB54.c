#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    volatile s32 unk_1C;
} Obj_0895DB54;

void func_0895E730(Obj_0895DB54 *, s32);
void func_0895E80C(Obj_0895DB54 *);
void func_0895EA7C(Obj_0895DB54 *);

void func_0895DB54(Obj_0895DB54 *arg0) {
    s32 prev;

    do {
        prev = arg0->unk_1C;
        switch (arg0->unk_1C) {
        case 0:
            break;
        case 1:
            func_0895E730(arg0, 0);
            break;
        case 2:
            func_0895E730(arg0, 1);
            break;
        case 3:
            func_0895E80C(arg0);
            break;
        case 4:
            func_0895EA7C(arg0);
            break;
        }
    } while (arg0->unk_1C != prev);
}
