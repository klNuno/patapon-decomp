#include "common.h"

extern "C" {

class V_0888E370 {
public:
    u8 pad_00[0x90];
    virtual void unk_08();
    virtual void unk_0C();
};

typedef struct {
    u8 pad_00[0x78];
    s32 unk_78;
    s32 unk_7C;
} O_0888E370;

typedef struct {
    u8 pad_00[0x118];
    s32 unk_118;
    u8 pad_11C[0x25C];
    u8 unk_378[1];
} A_0888E370;

typedef struct {
    u8 pad_00[0x92E4];
    s32 unk_92E4;
} B_0888E370;

enum E_0888E370 { E_0888E370_0 };

extern const s32 D_089DE4F4[];
extern const s32 D_089DE558[];

O_0888E370 *func_08965A10(s32, s32);
s32 func_0893D3C4(void *);
void func_08882530(s32, O_0888E370 *);
void func_088812A4(O_0888E370 *, s32);
s32 func_08891570(s32);

inline s32 func_0888E370_zero() {
    return 0;
}

s32 func_0888E370(A_0888E370 *arg0, B_0888E370 *arg1) {
    E_0888E370 x;
    s32 i;
    s32 k;
    O_0888E370 *o;

    x = (E_0888E370)0;
    for (i = x; i < 3; i++) {
        switch (arg1->unk_92E4) {
        case 0:
            k = x;
            break;
        case 1:
            k = x + 7;
            break;
        default:
            k = 14;
            break;
        }
        o = func_08965A10(arg0->unk_118, x);
        if (o != NULL) {
            ((V_0888E370 *)o)->unk_0C();
            func_08882530(func_0893D3C4(arg0->unk_378), o);
            func_088812A4(o, 1);
            o->unk_78 = D_089DE4F4[k];
            o->unk_7C = D_089DE558[k];
        }
        x = (E_0888E370)func_08891570(x);
    }
    return 1;
}

}
