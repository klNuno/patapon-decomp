#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} E;

typedef struct {
    E *unk_00;
} I;

typedef struct {
    E *unk_00;
    u32 unk_04;
} V;

u32 *func_088107AC(V *);
s32 func_08812854(V *, s32);
E *func_088113F4(V *);
E *func_0881284C(E *);
void func_088127E4(E *, E *, E *);
void func_088111FC(E *, E *);
s32 func_08812E24(V *, s32);
void func_088127A4(V *, s32, s32);
E *func_08812CF4(V *, E *, s32, s32, u32);

E *func_08812650(V *arg0, E *arg1, E *arg2) {
    I it;
    E *end;
    E *p;
    E *old;
    u32 cap;
    s32 idx;

    it.unk_00 = arg1;
    if (arg0->unk_04 < *func_088107AC(arg0) || func_08812854(arg0, 1) != 0) {
        end = func_088113F4(arg0);
        p = func_0881284C(arg2);
        if (it.unk_00 <= p && p < end) {
            p++;
        }
        arg0->unk_04++;
        func_088127E4(it.unk_00, end, end + 1);
        func_088111FC(it.unk_00, p);
    } else {
        old = arg0->unk_00;
        cap = *func_088107AC(arg0);
        idx = it.unk_00 - arg0->unk_00;
        func_088127A4(arg0, arg0->unk_04 + 1, func_08812E24(arg0, 1));
        func_088111FC(arg0->unk_00 + idx, arg2);
        it.unk_00 = func_08812CF4(arg0, old, idx, 1, cap);
    }
    return it.unk_00;
}
