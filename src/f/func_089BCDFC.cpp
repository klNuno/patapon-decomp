#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(f32, f32, s32, void *, u16 *);
    virtual void unk_18(s32);
};

typedef struct {
    u8 pad_00[0x78];
    s32 unk_78, unk_7C;
} E_08994A7C;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    u8 pad_10[0x920];
    T unk_930;
    u8 pad_934[0x6CC];
    T unk_1000;
    u8 pad_1004[0xC10];
    s32 *unk_1C14;
} S;

extern u8 *D_08AD1F14[];
extern char D_08A08F5C[];
extern u8 D_089F2580[];
void func_0882687C(u16 *, u16 *);
void func_088B3120(u8 *, s32, char *);
E_08994A7C *func_08947BA8(s32, s32);
s32 func_08998D18(s32, s32);
s32 func_089A8B5C(u8 *, s32, s32);

void func_089BCDFC(S *arg0) {
    u16 temp[0x400];
    u16 temp2[4];
    u8 temp3[8];
    u16 *p = temp2;
    s32 id = arg0->unk_1C14[arg0->unk_0C];

    if (id != -1) {
        u8 *r;
        E_08994A7C *q = func_08947BA8(func_08998D18(arg0->unk_04, arg0->unk_0C), id);
        r = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
        func_088B3120(temp3, 4, D_08A08F5C);
        func_0882687C(temp, (u16 *)func_089A8B5C(r + 0x2460, 0, q->unk_78));
        p = (u16 *)func_089A8B5C(r + 0x2460, 0, q->unk_7C);
    } else {
        temp2[0] = 0;
        temp[0] = 0;
    }
    arg0->unk_930.unk_14(0.0f, 0.0f, 0, D_089F2580, temp);
    arg0->unk_930.unk_18(0xA0);
    arg0->unk_1000.unk_14(0.0f, 0.0f, 0, D_089F2580, p);
    arg0->unk_1000.unk_18(0xA0);
}

}
