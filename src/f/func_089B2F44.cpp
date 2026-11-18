#include "common.h"

extern "C" {
typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} T;

class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(f32, f32, s32, T *, const void *);
    virtual void unk_18(s32);
};

typedef struct {
    V unk_00;
    u8 pad_04[0x6CC];
} U;

typedef struct {
    u8 pad_00[0x70];
    U unk_70;
    U unk_740;
    U unk_E10;
} S;

typedef struct {
    u8 pad_00[0x1A0EC];
    u32 unk_1A0EC;
} H;

typedef struct {
    u8 pad_00[0x1498];
    H *unk_1498;
    u8 pad_149C[0xFC4];
    u8 unk_2460[1];
} G;

typedef struct {
    u8 pad_00[0x42820];
    G *unk_42820;
} F;

extern void *D_08AD1E28[];
extern f32 D_08A08660[];
extern f32 D_08A08668[];
extern char D_08A08670[];
void func_088226BC(char *, char *, ...);
void func_088B3120(u8 *, s32, char *);
s32 func_089A8B5C(u8 *, s32, s32);

void func_089B2F44(S *arg0) {
    char temp[0x20];
    u8 temp2[0x80];
    T temp3;
    F *temp4;
    G *temp5;
    u8 *temp6;
    u32 temp7;

    if (D_08AD1E28[0] != NULL) {
        temp4 = (F *)D_08AD1E28[0];
    } else {
        temp4 = NULL;
    }
    temp5 = temp4->unk_42820;
    temp6 = temp5->unk_2460;
    temp7 = temp5->unk_1498->unk_1A0EC;
    if (temp7 > 99999U) {
        temp7 = 99999U;
    }
    func_088226BC(temp, D_08A08670, temp7);
    func_088B3120(temp2, 0x40, temp);
    temp3.unk_00 = D_08A08660[0];
    temp3.unk_04 = D_08A08660[1];
    temp3.unk_08 = D_08A08668[0];
    temp3.unk_0C = D_08A08668[1];
    arg0->unk_70.unk_00.unk_14(0.0f, 0.0f, 0, &temp3, temp2);
    arg0->unk_70.unk_00.unk_18(0xA0);
    arg0->unk_740.unk_00.unk_14(0.0f, 0.0f, 0, &temp3, (void *)func_089A8B5C(temp6, 2, 2));
    arg0->unk_740.unk_00.unk_18(0xA0);
    arg0->unk_E10.unk_00.unk_14(0.0f, 0.0f, 0, &temp3, (void *)func_089A8B5C(temp6, 2, 3));
    arg0->unk_E10.unk_00.unk_18(0xA0);
}
}
