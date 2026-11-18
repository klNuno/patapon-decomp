#include "common.h"

extern "C" {

class A_0887572C {
public:
    virtual void v0(void);
    virtual void v1(void);
    virtual void v2(void *);
};

typedef struct {
    void *unk_00;
    A_0887572C *unk_04;
} P_0887572C;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
    u8 unk_18[0x7FE8];
} B_0887572C;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x148C];
    P_0887572C unk_1490;
    P_0887572C unk_1498;
    P_0887572C unk_14A0;
    u8 pad_14A8[0xFD4];
    s32 unk_247C;
} S_0887572C;

void func_0881F5C0(void *, s32, s32);
void *func_08827A50(s32, s32);
void func_088758CC(void *);
void func_08875C54(void *);
void func_08876408(void *);
void func_088768FC(void *);
void func_08876920(void *);
void func_08876C60(void *);

inline void reset(P_0887572C *p, void *v, s32 a) {
    if (p->unk_00 != v) {
        if (p->unk_00 != NULL) {
            p->unk_04->v2(p->unk_00);
        }
        p->unk_00 = v;
        p->unk_04 = (A_0887572C *)a;
    }
}

void func_0887572C(S_0887572C *arg0) {
    s32 a;
    u8 *v;
    B_0887572C *b;

    a = arg0->unk_00;
    reset(&arg0->unk_1490, func_08827A50(0x8000, a), a);
    a = arg0->unk_00;
    v = (u8 *)func_08827A50(0x322C8, a);
    if (v != NULL) {
        func_08876920(v + 8);
        func_088768FC(v + 0x1A0E4);
        func_08876408(v + 0x2FEF4);
        func_08875C54(v);
    }
    reset(&arg0->unk_1498, v, a);
    a = arg0->unk_00;
    v = (u8 *)func_08827A50(0x47C0, a);
    if (v != NULL) {
        func_08876408(v);
        func_08876408(v + 0x22D4);
        func_088758CC(v);
    }
    reset(&arg0->unk_14A0, v, a);
    b = (B_0887572C *)arg0->unk_1490.unk_00;
    if (b != NULL) {
        func_0881F5C0(b, 0, 0x10);
        b->unk_10 = 0;
        b->unk_14 = 0xE;
        func_0881F5C0(b->unk_18, 0, 0x7FE8);
    }
    arg0->unk_247C = 0xE;
    func_08876C60(arg0);
}

}
