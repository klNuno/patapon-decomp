#include "common.h"

extern "C" {

class V_089183C0 {
public:
    u8 pad_00[0x50];
    virtual void vf_08();
    virtual void vf_0C();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18();
    virtual void vf_1C();
    virtual void vf_20();
    virtual void vf_24();
    virtual void vf_28();
    virtual void vf_2C();
};

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} A_089183C0;

typedef struct {
    u8 pad_00[0x1490];
    A_089183C0 *unk_1490;
    u8 pad_1494[0x247C - 0x1494];
    s32 unk_247C;
} B_089183C0;

typedef struct {
    u8 pad_00[0x42820];
    B_089183C0 *unk_42820;
} G_089183C0;

typedef struct {
    V_089183C0 *unk_00;
    u8 pad_04[0x12220 - 4];
    u8 unk_12220[4];
} Obj_089183C0;

void func_089D2B04(u8 *);
s32 func_089D3B4C(u8 *);
void func_08918548(Obj_089183C0 *, s32);
extern G_089183C0 *D_08AD1E28[];

void func_089183C0(Obj_089183C0 *arg0) {
    G_089183C0 *p;
    B_089183C0 *b;

    func_089D2B04(arg0->unk_12220);
    if (func_089D3B4C(arg0->unk_12220) != 0) {
        p = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
        b = p->unk_42820;
        if (b->unk_1490->unk_14 != b->unk_247C) {
            func_08918548(arg0, 9);
            arg0->unk_00->vf_2C();
        } else {
            func_08918548(arg0, 0);
        }
    }
}

}
