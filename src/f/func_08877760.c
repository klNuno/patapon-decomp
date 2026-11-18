#include "common.h"

typedef struct {
    f32 unk_00[4];
} V4;

typedef struct {
    V4 unk_00[4];
} M;

typedef struct {
    s8 unk_00;
    u8 pad_01[3];
} E;

void func_08866B8C(M *, M *, M *);
void func_08877904(M *, f32 *, char *);
char *func_08877A64(char *, E *);
f32 *func_08877A80(f32 *, f32, f32, f32, f32, E *);

M *func_08877760(M *arg0, const f32 *arg1, const V4 *arg2) {
    struct { u8 pad_00[8]; E unk_08[6]; } e;
    M m0, m1, m2, m3;
    V4 t0, t1, t2, t3, t4, t5;
    M m4;
    f32 *p;

    arg0->unk_00[0].unk_00[3] = 0.0f;
    arg0->unk_00[1].unk_00[3] = 0.0f;
    arg0->unk_00[2].unk_00[3] = 0.0f;
    arg0->unk_00[3].unk_00[0] = arg2->unk_00[0];
    arg0->unk_00[3].unk_00[1] = arg2->unk_00[1];
    arg0->unk_00[3].unk_00[2] = arg2->unk_00[2];
    arg0->unk_00[3].unk_00[3] = arg2->unk_00[3];

    e.unk_08[5].unk_00 = 0;
    p = func_08877A80(t0.unk_00, 1.0f, 0.0f, 0.0f, arg1[0], &e.unk_08[5]);
    e.unk_08[4].unk_00 = 0;
    func_08877904(&m0, p, func_08877A64((char *)&t1, &e.unk_08[4]));
    e.unk_08[3].unk_00 = 0;
    p = func_08877A80(t2.unk_00, 0.0f, 1.0f, 0.0f, arg1[1], &e.unk_08[3]);
    e.unk_08[2].unk_00 = 0;
    func_08877904(&m1, p, func_08877A64((char *)&t3, &e.unk_08[2]));
    e.unk_08[1].unk_00 = 0;
    p = func_08877A80(t4.unk_00, 0.0f, 0.0f, 1.0f, arg1[2], &e.unk_08[1]);
    e.unk_08[0].unk_00 = 0;
    func_08877904(&m2, p, func_08877A64((char *)&t5, &e.unk_08[0]));
    func_08866B8C(&m4, &m2, &m1);
    func_08866B8C(&m3, &m4, &m0);
    arg0->unk_00[0].unk_00[0] = m3.unk_00[0].unk_00[0];
    arg0->unk_00[0].unk_00[1] = m3.unk_00[0].unk_00[1];
    arg0->unk_00[0].unk_00[2] = m3.unk_00[0].unk_00[2];
    arg0->unk_00[1].unk_00[0] = m3.unk_00[1].unk_00[0];
    arg0->unk_00[1].unk_00[1] = m3.unk_00[1].unk_00[1];
    arg0->unk_00[1].unk_00[2] = m3.unk_00[1].unk_00[2];
    arg0->unk_00[2].unk_00[0] = m3.unk_00[2].unk_00[0];
    arg0->unk_00[2].unk_00[1] = m3.unk_00[2].unk_00[1];
    arg0->unk_00[2].unk_00[2] = m3.unk_00[2].unk_00[2];
    return arg0;
}
