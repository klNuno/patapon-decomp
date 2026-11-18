#include "common.h"

extern "C" {

class C_089114C4 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
};

typedef struct {
    f32 unk_00[2];
} S2_089114C4;

typedef struct {
    S2_089114C4 unk_00;
    S2_089114C4 unk_08;
    S2_089114C4 unk_10;
    S2_089114C4 unk_18;
} S3_089114C4;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V_089114C4;

typedef struct {
    f32 unk_00[3];
    f32 unk_0C;
    f32 unk_10[3];
    f32 unk_1C;
    f32 unk_20[3];
    f32 unk_2C;
    f32 unk_30[4];
} M_089114C4;

typedef struct {
    u8 pad_00[0xD90];
    u8 unk_D90[0x1C20 - 0xD90];
    C_089114C4 unk_1C20;
    u8 pad_1C24[0x32A0 - 0x1C24];
    u8 unk_32A0[0x170400 - 0x32A0];
    u8 pad_170400[0xD];
    u8 unk_17040D;
    u8 pad_17040E[2];
    s32 unk_170410;
    u8 unk_170414[4];
} S_089114C4;

extern S2_089114C4 D_08A001D0[];
extern S2_089114C4 D_08A001D8[];
extern u8 D_08AD8650[];

void func_08910484(void);
void func_0890C2AC(void *);
void func_0890D438(void *);
void func_0886575C(s32, s32, s32);
s32 func_08814C0C(s32);
void func_08866B54(M_089114C4 *, s32, V_089114C4 *);
void func_08911624(V_089114C4 *, s32, M_089114C4 *);
void *func_0890D058(s32);
void func_088651A4(void *, M_089114C4 *, S3_089114C4 *, s32, s32);
extern s32 func_08865870(void);
void func_08926200(void *, u8 *, s32);

void func_089114C4(S_089114C4 *arg0) {
    S3_089114C4 a;
    M_089114C4 m;
    V_089114C4 d;
    V_089114C4 c;

    if (arg0->unk_170410 != 0) {
        arg0->unk_170410--;
        return;
    }
    if (arg0->unk_17040D == 0) {
        return;
    }
    func_08910484();
    func_0890C2AC(arg0->unk_32A0);
    func_0890D438(arg0->unk_D90);
    arg0->unk_1C20.v14();
    a.unk_00 = D_08A001D0[0];
    a.unk_08 = D_08A001D8[0];
    func_0886575C(0, 1, 1);
    func_08814C0C(9);
    c.unk_00 = 0.0f;
    c.unk_04 = 248.0f;
    c.unk_08 = 0.0f;
    c.unk_0C = 1.0f;
    d.unk_00 = 0.0f;
    d.unk_04 = 0.0f;
    d.unk_08 = 0.0f;
    d.unk_0C = 1.0f;
    m.unk_0C = 0.0f;
    m.unk_1C = 0.0f;
    m.unk_2C = 0.0f;
    func_08866B54(&m, 3, &c);
    func_08911624(&d, 0, &m);
    func_088651A4(func_0890D058(0x13), &m, &a, 0, 1);
    func_08865870();
    func_08926200(arg0->unk_170414, D_08AD8650, 0);
}

}
