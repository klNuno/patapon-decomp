#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} E088129EC;

typedef struct {
    E088129EC *unk_00;
    s32 unk_04;
} T088129EC;

s32 func_08810698(s32 *);
void func_08810658(s32, s32, s32);
E088129EC *func_08812AAC(E088129EC *, E088129EC *, E088129EC *);

E088129EC *func_088129EC(T088129EC *arg0, E088129EC *arg1, s32 arg2, s32 arg3, s32 arg4) {
    E088129EC *end;

    if (arg1 != NULL) {
        end = arg1 + arg2;
        func_08812AAC(end, arg1 + arg0->unk_04, func_08812AAC(arg1, end, arg0->unk_00) + arg3);
        func_08810658(func_08810698((s32 *)arg0), (s32)arg1, arg4);
    }
    arg0->unk_04 += arg3;
    return arg0->unk_00 + arg2;
}
