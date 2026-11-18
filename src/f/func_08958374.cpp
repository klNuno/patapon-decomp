#include "common.h"

extern "C" {

class C0 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
};

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} M;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} P;

typedef struct {
    u8 pad_00[0x10];
} Ptr;

typedef struct {
    u8 pad_00[0xA88];
    Ptr unk_A88;
} S1;

typedef struct {
    u8 pad_00[0xA88];
    u8 pad_A88[8];
    M *unk_A90;
    u8 pad_A94[8];
    s32 unk_A9C;
    P *unk_AA0;
    void *unk_AA4;
    u8 pad_AA8[0x1D50 - 0xAA8];
    u8 unk_1D50[0x1F30 - 0x1D50];
    s32 unk_1F30;
} S;

void func_08952700(void *, s32);
void func_0897C3F4(f32, void *, s32);
void func_0895835C(Ptr *);
void func_08958318(Ptr *, Ptr *);
void func_08955304(Ptr *, s32);

void func_08958374(S *arg0) {
    Ptr tmp;
    s32 k;

    if (arg0->unk_A90 == NULL) {
        return;
    }
    switch (arg0->unk_A90->unk_04) {
    case 0:
        break;
    case 1:
        if (arg0->unk_A9C != 0) {
            k = arg0->unk_AA0->unk_04;
            if (k == 1) {
                func_08952700(arg0->unk_1D50, k);
            }
            ((C0 *)arg0->unk_AA0)->v20();
        }
        arg0->unk_A9C = 0;
        arg0->unk_AA0 = NULL;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        func_0897C3F4(0.0f, arg0->unk_AA4, 0);
        arg0->unk_1F30 = 2;
        func_0895835C(&tmp);
        func_08958318(&tmp, &((S1 *)arg0)->unk_A88);
        func_08955304(&tmp, -1);
        break;
    }
}

}
