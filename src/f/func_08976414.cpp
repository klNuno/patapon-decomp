#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00[4];
} V;

typedef struct {
    V unk_00[16];
} B;

typedef struct {
    B *unk_00;
    B unk_04;
    s32 unk_104;
} T;

void func_08977494(s32, B *, B *);

void func_08976414(T *arg0) {
    B *p = arg0->unk_00;
    if (p != NULL && arg0->unk_104 != 0) {
        arg0->unk_04.unk_00[0] = p->unk_00[0];
        arg0->unk_04.unk_00[1] = p->unk_00[1];
        arg0->unk_04.unk_00[2] = p->unk_00[2];
        arg0->unk_04.unk_00[3] = p->unk_00[3];
        arg0->unk_04.unk_00[4] = p->unk_00[4];
        arg0->unk_04.unk_00[5] = p->unk_00[5];
        arg0->unk_04.unk_00[6] = p->unk_00[6];
        arg0->unk_04.unk_00[7] = p->unk_00[7];
        arg0->unk_04.unk_00[8] = p->unk_00[8];
        arg0->unk_04.unk_00[9] = p->unk_00[9];
        arg0->unk_04.unk_00[10] = p->unk_00[10];
        arg0->unk_04.unk_00[11] = p->unk_00[11];
        arg0->unk_04.unk_00[12] = p->unk_00[12];
        arg0->unk_04.unk_00[13] = p->unk_00[13];
        arg0->unk_04.unk_00[14] = p->unk_00[14];
        arg0->unk_04.unk_00[15] = p->unk_00[15];
        func_08977494(arg0->unk_104, &arg0->unk_04, p);
    }
}

}
