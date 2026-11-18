#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
    u8 pad_08[8];
    s32 unk_10;
} Obj_088128F0;

void func_0880416C(Obj_088128F0 *);
void *func_088129AC(Obj_088128F0 *);
void func_088129A4(void *, s32 *);
Obj_088128F0 *func_088130B4(Obj_088128F0 *, s16);

Obj_088128F0 *func_088128F0(Obj_088128F0 *arg0, s16 arg1) {
    s32 *begin;
    s32 *end;

    if (arg0 != NULL) {
        begin = arg0->unk_00 + arg0->unk_10;
        end = begin + arg0->unk_04;
        while (begin < end) {
            func_088129A4(func_088129AC(arg0), --end);
        }
        arg0->unk_04 = 0;
        func_088130B4(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
