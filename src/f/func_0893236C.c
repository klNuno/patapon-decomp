#include "common.h"

typedef struct L_0893236C {
    struct L_0893236C *unk_00;
    struct L_0893236C *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    void *unk_24;
} L_0893236C;

typedef struct {
    u8 pad_00[0x118];
    s32 unk_118;
    L_0893236C unk_11C;
    L_0893236C unk_144;
    void *unk_16C;
} S_0893236C;

extern u8 D_08A47060[];
extern u8 D_08A45350[];
void func_088804B4(s32 *, L_0893236C *);
void func_088804AC(s32 *, L_0893236C *);
s32 func_0888027C(s32 *, s32 *);
void func_08880484(s32 *, s32 *, s32);
void func_088802D0(s32 *, L_0893236C *, s32);
void func_0888065C(L_0893236C *);
void func_088804C0(L_0893236C *, s32);
u8 *func_08932364(S_0893236C *);
u8 *func_089322E8(S_0893236C *);
void func_08932304(u8 *, s32);
void func_08932544(S_0893236C *);
void func_0880416C(S_0893236C *);

S_0893236C *func_0893236C(S_0893236C *arg0, s16 arg1) {
    s32 it;
    s32 end;
    s32 r;
    s32 tmp;
    s32 it2;
    s32 end2;
    s32 r2;
    s32 tmp2;
    u8 *p;

    if (arg0 != NULL) {
        arg0->unk_16C = D_08A47060;
        func_088804B4(&it, &arg0->unk_11C);
        func_088804AC(&end, &arg0->unk_11C);
        while (func_0888027C(&it, &end)) {
            func_08880484(&tmp, &it, 0);
            func_088802D0(&r, &arg0->unk_11C, tmp);
        }
        arg0->unk_11C.unk_20 = 0;
        arg0->unk_11C.unk_04 = &arg0->unk_11C;
        arg0->unk_11C.unk_00 = &arg0->unk_11C;
        func_088804B4(&it2, &arg0->unk_144);
        func_088804AC(&end2, &arg0->unk_144);
        while (func_0888027C(&it2, &end2)) {
            func_08880484(&tmp2, &it2, 0);
            func_088802D0(&r2, &arg0->unk_144, tmp2);
        }
        arg0->unk_144.unk_20 = 0;
        arg0->unk_144.unk_04 = &arg0->unk_144;
        arg0->unk_144.unk_00 = &arg0->unk_144;
        for (p = func_08932364(arg0); p != func_089322E8(arg0); p += 0x44) {
            func_08932304(p, -1);
        }
        arg0->unk_118 = 0;
        if (&arg0->unk_144 != NULL) {
            arg0->unk_144.unk_24 = D_08A45350;
            func_0888065C(&arg0->unk_144);
            func_088804C0(&arg0->unk_144, -1);
        }
        if (&arg0->unk_11C != NULL) {
            arg0->unk_11C.unk_24 = D_08A45350;
            func_0888065C(&arg0->unk_11C);
            func_088804C0(&arg0->unk_11C, -1);
        }
        if (arg0 != NULL) {
            func_08932544(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
