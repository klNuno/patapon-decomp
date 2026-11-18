#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} E088123FC;

typedef struct {
    E088123FC *unk_00;
    u32 unk_04;
} T088123FC;

u32 *func_08810674(T088123FC *);
s32 func_08812600(T088123FC *, s32);
E088123FC *func_08810CC0(T088123FC *);
E088123FC *func_088125F8(E088123FC *);
void func_08812590(E088123FC *, E088123FC *, E088123FC *);
void func_08810AC8(E088123FC *, E088123FC *);
u32 func_08812B1C(T088123FC *, u32);
void func_08812550(T088123FC *, u32, u32);
E088123FC *func_088129EC(T088123FC *, E088123FC *, s32, s32, u32);

E088123FC *func_088123FC(T088123FC *arg0, E088123FC *arg1, E088123FC *arg2) {
    E088123FC *end;
    E088123FC *p;
    E088123FC *data;
    u32 cap;
    s32 idx;
    struct { s32 unk_00; } h;

    if (arg0->unk_04 < *func_08810674(arg0) || func_08812600(arg0, 1) != 0) {
        h.unk_00 = (s32)(func_08810CC0(arg0));
        end = (E088123FC *)h.unk_00;
        p = func_088125F8(arg2);
        if (arg1 <= p) {
            if (p < end) {
                p++;
            }
        }
        arg0->unk_04++;
        func_08812590(arg1, end, end + 1);
        func_08810AC8(arg1, p);
    } else {
        data = arg0->unk_00;
        cap = *func_08810674(arg0);
        idx = arg1 - arg0->unk_00;
        func_08812550(arg0, arg0->unk_04 + 1, func_08812B1C(arg0, 1));
        func_08810AC8(arg0->unk_00 + idx, arg2);
        arg1 = func_088129EC(arg0, data, idx, 1, cap);
    }
    return arg1;
}
