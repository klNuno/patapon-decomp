#include "common.h"

typedef struct {
    u8 pad_00[0x6D0];
    void *unk_6D0;
    u8 pad_6D4[0xC];
    u8 unk_6E0[4];
} S_0891AB5C;

typedef struct {
    u8 pad_00[0x78];
    s32 unk_78;
} E_0891AB5C;

extern u8 D_08A46B5C[];
extern u8 *D_08AD1F14[];
void func_0891A95C(S_0891AB5C *);
void func_088F232C(void *, s32);
void func_0891AA50(S_0891AB5C *, void *);
void func_0891AAAC(S_0891AB5C *, void *, s32, s32, s32);
s32 func_0891AB50(S_0891AB5C *);
E_0891AB5C *func_08945908(s32, s32);
s32 func_089A8B5C(u8 *, s32, s32);

S_0891AB5C *func_0891AB5C(S_0891AB5C *arg0, s32 arg1, s32 arg2) {
    u8 *p;
    E_0891AB5C *e;
    s32 v;

    func_0891A95C(arg0);
    arg0->unk_6D0 = D_08A46B5C;
    func_088F232C(arg0->unk_6E0, 1);
    p = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL) + 0x2460;
    if (arg1 != -1) {
        e = func_08945908(arg2, arg1);
        func_0891AA50(arg0, arg0->unk_6E0);
        v = func_089A8B5C(p, 0, e->unk_78);
        func_0891AAAC(arg0, arg0->unk_6E0, v, func_0891AB50(arg0), 0x10);
    } else {
        func_0891AA50(arg0, arg0->unk_6E0);
        v = func_089A8B5C(p, 2, 0x10);
        func_0891AAAC(arg0, arg0->unk_6E0, v, func_0891AB50(arg0), 0x10);
    }
    return arg0;
}
