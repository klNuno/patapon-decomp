#include "common.h"

typedef struct {
    u8 pad_00[0x114];
    s32 unk_114;
    u8 pad_118[0x328];
    f32 unk_440[4];
} S1;

typedef struct {
    u8 pad_00[0x7D50];
    S1 unk_7D50;
} S2;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S3;

typedef struct {
    u8 pad_00[0x14];
    S3 *unk_14;
} S0;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08894EB0(char *arg0, char *arg1);
S2 *func_08899E18(s32, s32);
s32 func_088F5BA0(s32);

void func_088EDA38(S0 *arg0, void *arg1) {
    f32 temp[4];
    s32 *a;
    f32 *b;
    s32 x;
    S2 *p;
    S1 *r;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_14 != NULL) {
        x = *a;
        if (!(x != 0 && x != 1)) {
            temp[0] = *b;
            temp[1] = 0.0f;
            temp[2] = 0.0f;
            temp[3] = 0.0f;
            p = func_08899E18(arg0->unk_14->unk_36B10, *a);
            func_08894EB0((char *)p, (char *)temp);
            r = &p->unk_7D50;
            if (r != NULL && func_088F5BA0(r->unk_114) == 0) {
                r->unk_440[0] = temp[0];
                r->unk_440[1] = temp[1];
                r->unk_440[2] = temp[2];
                r->unk_440[3] = temp[3];
            }
        }
    }
    func_08852F00(arg1, 0);
}
