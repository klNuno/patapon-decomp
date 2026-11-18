#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} X;

typedef struct {
    u8 pad_00[0x20];
    X unk_20;
    X unk_28;
    X unk_30;
    X unk_38;
    u16 unk_40;
    u16 unk_42;
} B;

typedef struct {
    u8 pad_00[0x684];
    B **unk_684;
    s32 unk_688;
    s32 unk_68C;
} A;

void func_08865708(void *, void *);
void func_088F2D24(B *, B *);
B *func_0893DFA0(s32, A *);

f32 func_088F2C68(A *arg0, B *arg1) {
    B *p;
    B **slot;

    p = func_0893DFA0(arg0->unk_68C, arg0);
    func_088F2D24(p, arg1);
    func_08865708(&p->unk_20, &arg1->unk_20);
    func_08865708(&p->unk_28, &arg1->unk_28);
    func_08865708(&p->unk_30, &arg1->unk_30);
    func_08865708(&p->unk_38, &arg1->unk_38);
    p->unk_40 = arg1->unk_40;
    p->unk_42 = arg1->unk_42;
    slot = &arg0->unk_684[arg0->unk_688];
    if (slot != NULL) {
        *slot = p;
    }
    arg0->unk_688++;
    return arg1->unk_28.unk_00;
}
