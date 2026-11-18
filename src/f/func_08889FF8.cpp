#include "common.h"

extern "C" {

struct A_08889FF8 {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct H_08889FF8 {
    s32 unk_00;
    A_08889FF8 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
};

typedef struct {
    u8 unk_00[4];
} C_08889FF8;

typedef struct {
    C_08889FF8 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    u32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} T_08889FF8;

typedef struct {
    u8 pad_00[0x628];
    u8 unk_628[0x74C];
    T_08889FF8 unk_D74;
} Obj_08889FF8;

s32 func_08991310(void *, void *);
void func_089913A0(H_08889FF8 *, void *, s32);
void func_088B2640(void *, H_08889FF8 *, void *);
void func_0886A45C(s32, s32);

void func_08889FF8(Obj_08889FF8 *arg0, void *arg1, T_08889FF8 *arg2) {
    H_08889FF8 h;
    u32 i;
    u8 *e;
    s32 idx;

    arg0->unk_D74 = *arg2;
    arg0->unk_D74.unk_10 = (s32)((u8 *)arg2 + arg0->unk_D74.unk_10);
    arg0->unk_D74.unk_1C = (s32)((u8 *)arg2 + arg0->unk_D74.unk_1C);
    for (i = 0; i < arg0->unk_D74.unk_14; i++) {
        e = (u8 *)arg0->unk_D74.unk_1C + arg0->unk_D74.unk_18 * i;
        idx = func_08991310(arg1, e);
        if (idx != -1) {
            func_089913A0(&h, arg1, idx);
            func_088B2640(arg0->unk_628, &h, e);
            if (h.unk_08 != 0) {
                *h.unk_0C -= 1;
                if (h.count() == 0) {
                    h.unk_04->v0C(h.unk_08, h.unk_0C, h.unk_00);
                    func_0886A45C(h.unk_08, h.unk_00);
                }
            }
        }
    }
}

}
