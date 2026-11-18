#include "common.h"

extern "C" {

typedef struct {
    s64 unk_00;
} E;

typedef struct {
    u8 pad_00[0x10C];
} M1;

typedef struct {
    u8 pad_00[0x20];
} M2;

typedef struct {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    s32 unk_10;
    s32 unk_14;
    E unk_18[0x69];
    s32 unk_360;
    M1 unk_364;
    s32 unk_470;
    M2 unk_474;
    s32 unk_494;
} Obj;

extern u8 D_08A448AC[];
extern u8 D_08A4638C[];
void func_088D91D4(M1 *, M1 *);
void func_088D90C0(M2 *, M2 *);

Obj *func_088D8FF4(Obj *arg0, Obj *arg1) {
    E *s;
    E *d;
    s32 n;

    arg0->unk_00 = D_08A448AC;
    arg0->unk_04 = arg1->unk_04;
    arg0->unk_08 = arg1->unk_08;
    arg0->unk_0C = arg1->unk_0C;
    arg0->unk_10 = arg1->unk_10;
    arg0->unk_14 = arg1->unk_14;
    s = arg1->unk_18;
    d = arg0->unk_18;
    n = 0x69;
    do {
        n--;
        *d = *s;
        s++;
        d++;
    } while (n > 0);
    arg0->unk_360 = arg1->unk_360;
    func_088D91D4(&arg0->unk_364, &arg1->unk_364);
    arg0->unk_470 = arg1->unk_470;
    func_088D90C0(&arg0->unk_474, &arg1->unk_474);
    arg0->unk_00 = D_08A4638C;
    arg0->unk_494 = arg1->unk_494;
    return arg0;
}

}
