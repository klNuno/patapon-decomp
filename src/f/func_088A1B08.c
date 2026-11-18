#include "common.h"

typedef struct {
    f32 unk_00[4];
} V;

typedef struct {
    V unk_00[4];
} M;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    u8 pad_1C[4];
    V unk_20;
} S;

void func_08857B68(V *);
void func_08857C14(void *);
void func_0885807C(void);
void func_088580F8(void);
void func_08858150(M *);
extern s32 func_088581B0(s32);
void func_088A1598(s32, S *, s32, s32);

void func_088A1B08(s32 arg0, S *arg1) {
    M temp;
    M m;
    u32 i;

    m.unk_00[0].unk_00[1] = 0.0f;
    m.unk_00[0].unk_00[2] = 0.0f;
    m.unk_00[0].unk_00[3] = 0.0f;
    m.unk_00[1].unk_00[0] = 0.0f;
    m.unk_00[1].unk_00[2] = 0.0f;
    m.unk_00[1].unk_00[3] = 0.0f;
    m.unk_00[2].unk_00[0] = 0.0f;
    m.unk_00[2].unk_00[1] = 0.0f;
    m.unk_00[2].unk_00[3] = 0.0f;
    m.unk_00[3].unk_00[0] = 0.0f;
    m.unk_00[3].unk_00[1] = 0.0f;
    m.unk_00[3].unk_00[2] = 0.0f;
    m.unk_00[0].unk_00[0] = 1.0f;
    m.unk_00[1].unk_00[1] = 1.0f;
    m.unk_00[2].unk_00[2] = 1.0f;
    m.unk_00[3].unk_00[3] = 1.0f;
    m.unk_00[0].unk_00[0] = arg1->unk_0C;
    m.unk_00[0].unk_00[1] = arg1->unk_10;
    m.unk_00[1].unk_00[0] = arg1->unk_14;
    m.unk_00[1].unk_00[1] = arg1->unk_18;
    m.unk_00[3] = arg1->unk_20;
    m.unk_00[3].unk_00[3] = 1.0f;
    func_088581B0((s32)&temp);
    func_0885807C();
    func_08858150(&temp);
    func_08857B68(&m.unk_00[3]);
    func_08857C14(&m);
    func_088581B0((s32)&m);
    func_088A1598(arg0, arg1, arg1->unk_08, 1);
    i = 0;
    do {
        func_088580F8();
    } while (++i == 0);
}
