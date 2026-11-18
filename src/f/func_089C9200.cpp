#include "common.h"

extern "C" {

class S2 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(s32);
};

typedef struct {
    u8 pad_00[0x2E3C0];
    char unk_2E3C0[1];
} S1;

typedef struct {
    S1 *unk_00;
    u8 pad_04[0x15C];
    s32 unk_160;
} S0;

s32 func_08958954(char *arg0);
extern s32 func_08985828(s32, s32);
void func_0898AD00(s32);
void func_0898ABB8(s32, f32, s32, s32);

void func_089C9200(S0 *arg0, s32 arg1) {
    S2 *p;

    p = (S2 *)func_08958954(arg0->unk_00->unk_2E3C0);
    if (arg1 == 1) {
        arg0->unk_160 = 1;
    } else if (arg1 == 0) {
        p->unk_1C(arg1);
        for (arg1 = 0; arg1 < 12; ++arg1) {
            func_0898AD00(func_08985828((s32)arg0, arg1));
        }
        func_0898ABB8(func_08985828((s32)arg0, 0), 0.0f, 3, 1);
        func_0898ABB8(func_08985828((s32)arg0, 11), 0.0f, 2, 1);
        arg0->unk_160 = 2;
    } else if (arg1 == 2) {
        arg0->unk_160 = 3;
    }
}

}
