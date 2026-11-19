#include "common.h"

typedef struct {
    u8 pad_00[0x1510];
    u8 unk_1510;
    u8 pad_1511[0x7];
    f32 unk_1518;
    u8 pad_151C[0x4];
    s32 unk_1520;
    u8 pad_1524[0x8];
    s32 unk_152C;
    s32 unk_1530;
    s32 unk_1534;
    u8 pad_1538[0x14];
    u8 unk_154C;
    u8 unk_154D;
    u8 unk_154E;
    u8 pad_154F[0x1];
    char unk_1550[4];
    u8 pad_1554[0x3C];
    u8 unk_1590[8];
    u8 unk_1598[4];
    u8 pad_159C[0x20];
    u32 unk_15BC;
    u8 pad_15C0[0xA7C];
    u8 unk_203C[4];
    u8 pad_2040[0x3890];
    s32 unk_58D0;
    u8 pad_58D4[0x1DDD0];
    s32 unk_236A4;
    s32 unk_236A8;
    s32 unk_236AC;
    u8 pad_236B0[0xFE0];
    u8 unk_24690[4];
} O;

typedef struct { f32 unk_00, unk_04; } V;
typedef struct { f32 unk_00, unk_04, unk_08, unk_0C; } Q;
typedef struct {
    f32 unk_00[4][4];
} M;
typedef struct {
    s8 unk_00;
    u8 pad_01[0xFF];
    u32 unk_100;
} T;

extern V D_089F9920[];
extern V D_089F9928[];
extern V D_089F9930[];
extern V D_089F9938[];
extern V D_089F9940[];
extern V D_089F9948[];
extern char D_089F9950[];
extern char D_089F996C[];
extern char D_089F9974[];
extern char D_089F9998[];
extern char D_089F99B4[];
extern char D_089F99B8[];
extern char D_089F99D4[];
extern char D_089F99F0[];
extern char D_089F99F4[];
extern char D_089F99F8[];
extern char D_089F9A14[];
extern char D_089F9A1C[];
extern char D_089F9A24[];
extern char D_089F9A30[];
extern char D_089F9A38[];
extern char D_089F9A3C[];
extern char *D_089F98A4[];
extern char *D_089F9874[];
extern s32 D_089DDC38[];

s32 func_08814C0C(s32);
void func_0881F5C0(void *, s32, s32);
void func_08858F88(T *, s32, s32, const char *, ...);
void func_088651A4(void *, M *, void *, s32, s32);
void func_0886575C(s32, s32, s32);
extern s32 func_08865870(void);
void func_08866B54(M *, s32, void *);
f32 func_0887ADC8(void *);
void func_0887B3A4(void *, s32, s32, const char *);
void func_0887D8C8(Q *arg0, s32 arg1, M *arg2);
extern void func_088CE14C(char *);
void func_0895686C(void *);
char *func_08958E20(void *, s32);
void func_0896D32C(void *);
u64 func_089AB994(f32);

void func_0887D470(O *arg0) {
    V a[4];
    T b;
    struct { V unk_00[2]; u8 pad_10[0xC]; } c;
    M d;
    Q e;
    Q f;
    char *temp;
    s32 value;
    u64 t0;
    u64 t1;
    f32 x;
    f32 y;
    char *p;
    void *ptr;

    if (arg0->unk_1510 == 0) {
        return;
    }
    func_0896D32C(arg0->unk_24690);
    func_088CE14C(arg0->unk_1550);
    value = arg0->unk_1520;
    ptr = arg0->unk_203C;
    temp = NULL;
    if (value != 0) {
        temp = func_08958E20(ptr, value - 1);
    }
    c.unk_00[0] = D_089F9920[0];
    c.unk_00[1] = D_089F9928[0];
    a[0] = D_089F9930[0];
    a[1] = D_089F9938[0];
    a[2] = D_089F9940[0];
    a[3] = D_089F9948[0];
    func_0886575C(0, 1, 1);
    func_08814C0C(9);

    y = 272.0f - a[1].unk_04;
    f.unk_0C = 1.0f;
    e.unk_0C = 1.0f;
    f.unk_04 = y;
    f.unk_00 = 0.0f;
    f.unk_08 = 0.0f;
    e.unk_00 = 0.0f;
    e.unk_04 = 0.0f;
    e.unk_08 = 0.0f;
    d.unk_00[0][3] = 0.0f;
    d.unk_00[1][3] = 0.0f;
    d.unk_00[2][3] = 0.0f;
    func_08866B54(&d, 3, &f);
    func_0887D8C8(&e, 0, &d);
    func_088651A4(a, &d, c.unk_00, 0, 1);
    func_08865870();
    func_0895686C(arg0->unk_1590);
    if (arg0->unk_154E == 0) {
        return;
    }

    func_0881F5C0(&b, 0, 0x100);
    b.unk_100 = 0xFFFFFF;
    p = temp != NULL ? temp : D_089F996C;
    func_08858F88(&b, 2, 1, D_089F9950, p);
    x = arg0->unk_1518;
    t0 = func_089AB994(x);
    t1 = func_089AB994(x * (f32)arg0->unk_15BC);
    func_08858F88(&b, 2, 2, D_089F9974, t0, t1);
    p = arg0->unk_1534 >= -1 ? D_089F98A4[arg0->unk_1534] : D_089F99B4;
    func_08858F88(&b, 2, 3, D_089F9998, p);
    p = arg0->unk_1530 >= -1 ? D_089F9874[arg0->unk_1530] : D_089F99B4;
    func_08858F88(&b, 2, 4, D_089F99B8, p);
    p = arg0->unk_154C != 0 ? D_089F99F0 : D_089F99F4;
    func_08858F88(&b, 2, 5, D_089F99D4, p);
    p = arg0->unk_154D != 0 ? D_089F9A14 : D_089F9A1C;
    func_08858F88(&b, 2, 6, D_089F99F8, p);
    func_0887B3A4(arg0->unk_1598, 2, 7, D_089F9A24);
    value = arg0->unk_58D0;
    y = func_0887ADC8(arg0->unk_1598);
    t0 = func_089AB994(y - (f32)(value / 2));
    func_08858F88(&b, 0x17, 0xF, D_089F9A30, t0);
    func_08858F88(&b, 0x17, 0x10, D_089F9A38, arg0->unk_236A4);
    func_08858F88(&b, 0x17, 0x11, D_089F9A38, arg0->unk_236A8);
    func_08858F88(&b, 0x17, 0x12, D_089F9A38, arg0->unk_236AC);
    func_08858F88(&b, 1, D_089DDC38[arg0->unk_152C], D_089F9A3C);
}
