#include "common.h"

typedef struct {
    u8 pad_00[0xA8];
} E;

typedef struct {
    E *unk_00;
    s32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x38];
    u8 *unk_38;
    u8 pad_3C[4];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    s32 unk_4C;
    u8 pad_50[0x30];
    u8 unk_80;
} E_08912AF8;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xFC4];
    V unk_FCC;
    u8 pad_FD4[4];
    E_08912AF8 unk_FD8;
    u8 pad_105C[0x38];
    s32 unk_1094;
    u8 pad_1098[0x1B8];
    u8 unk_1250;
    u8 unk_1251;
} Obj_0895395C;

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
} B;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P;

typedef struct {
    u8 pad_00[0x30];
} Q;

extern u32 D_08A04A18[];
extern u8 D_089EA668[];
extern u8 D_089EA970[];
extern u8 D_089EAA18[];
extern u8 D_089EAD40[];
extern u8 D_089EB068[];
extern Q D_08ADA298[];
extern Q D_08ADA2C8[];
extern Q D_08ADA358[];
extern Q D_08ADA538[];
extern Q D_08ADA718[];
extern Q D_08ADA8F8[];

void func_088D6314(Obj_0895395C *, Q *, void *, u8 *, void *, f32);
void *func_088D669C(void *, u8 *);
void func_088D68BC(E_08912AF8 *);
void func_08912D8C(Obj_0895395C *);

void func_089530CC(Obj_0895395C *arg0, u32 arg1) {
    B b0, b1, b2, b3, b4, b5;
    P p0, p1, p2, p3, p4, p5;
    E *p;
    V *v;
    s32 n;
    u32 x, y;

    arg1 = *(D_08A04A18[0] < arg1 ? D_08A04A18 : &arg1);
    x = arg1 % 10U;
    y = (arg1 / 10U) % 10U;
    arg0->unk_1250 = 0;
    if (arg0->unk_1251 != 0) {
        p = arg0->unk_FCC.unk_00;
        n = arg0->unk_FCC.unk_04;
        v = &arg0->unk_FCC;
        if ((u32)p != (u32)(p + n)) {
            do {
                p++;
            } while (p != v->unk_00 + n);
        }
        arg0->unk_FCC.unk_04 = 0;
        arg0->unk_1094 = 0;
        arg0->unk_04 = 0;
        b0.unk_00 = 0;
        func_088D6314(arg0, D_08ADA298, func_088D669C(&p0, &b0.unk_00), D_089EA970, NULL, 1.0f);
        b1.unk_00 = 0;
        func_088D6314(arg0, D_08ADA2C8, func_088D669C(&p1, &b1.unk_00), D_089EAA18, NULL, 1.0f);
        b2.unk_00 = 0;
        func_088D6314(arg0, &D_08ADA358[x], func_088D669C(&p2, &b2.unk_00), D_089EAD40, NULL, 1.0f);
        b3.unk_00 = 0;
        func_088D6314(arg0, &D_08ADA718[x], func_088D669C(&p3, &b3.unk_00), D_089EB068, NULL, 1.0f);
        if (y != 0) {
            b4.unk_00 = 0;
            func_088D6314(arg0, &D_08ADA538[y], func_088D669C(&p4, &b4.unk_00), D_089EAD40, NULL, 1.0f);
            b5.unk_00 = 0;
            func_088D6314(arg0, &D_08ADA8F8[y], func_088D669C(&p5, &b5.unk_00), D_089EB068, NULL, 1.0f);
        }
        goto end;
    } else {
        arg0->unk_1251 = 1;
        return;
    }
end:
    func_088D68BC(&arg0->unk_FD8);
    arg0->unk_FD8.unk_38 = D_089EA668;
    arg0->unk_FD8.unk_80 = 0;
    func_08912D8C(arg0);
    arg0->unk_FD8.unk_4C = 0;
    arg0->unk_FD8.unk_48 = 1.0f;
    arg0->unk_FD8.unk_40 = 126.0f;
    arg0->unk_FD8.unk_44 = 64.0f;
}
