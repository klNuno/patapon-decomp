#include "common.h"

typedef struct E0 {
    u8 pad_00[0x4B4];
} E0;

typedef struct T0 {
    u8 pad_00[0x4C4];
    E0 *unk_4C4;
    s32 unk_4C8;
    u8 unk_4CC[0x14];
    u8 *unk_4E0;
    s32 unk_4E4;
    void *unk_4E8;
} T0;

extern u8 D_08A463C0[];

E0 *func_088DAB80(T0 *);
E0 *func_088DAB78(T0 *);
E0 *func_088DAB5C(T0 *);
void *func_08807190(s32, void *);
void func_088D8ED0(void *, s32);
void func_088DA93C(void *);
s32 func_088DA8F4(T0 *, s32);
void func_088DA90C(void *, s32 *);

T0 *func_088DAA80(T0 *arg0, s32 arg1) {
    s32 tmp;
    E0 *p;
    void *q;

    arg0->unk_4E8 = D_08A463C0;
    arg0->unk_4C4 = func_088DAB80(arg0);
    arg0->unk_4C8 = 1;
    for (p = func_088DAB78(arg0); p != func_088DAB5C(arg0); p++) {
        if ((q = func_08807190(0x4B4, p)) != NULL) {
            func_088D8ED0(q, arg1);
        }
    }
    arg0->unk_4E0 = (u8 *)(((u32)arg0->unk_4CC & 0xF) + (u32)arg0 + 0x4CC);
    arg0->unk_4E4 = 0;
    func_088DA93C(arg0->unk_4CC);
    tmp = func_088DA8F4(arg0, 0);
    func_088DA90C(arg0->unk_4CC, &tmp);
    return arg0;
}
