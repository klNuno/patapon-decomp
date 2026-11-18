#include "common.h"

typedef struct {
    f32 unk_00[3];
} Unk1;

typedef struct {
    u8 *unk_00;
    Unk1 unk_04;
    s32 *unk_10;
} U;

typedef struct {
    U *unk_00;
    s32 unk_04;
    u8 unk_08[0x14];
} W;

typedef struct {
    s16 unk_00;
    s16 unk_02;
} V;

typedef struct {
    s32 unk_00;
    V unk_04[128];
    V unk_204[128];
    W unk_404;
    u8 *unk_420;
} T;

typedef struct {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    s32 *unk_0C;
} S_088D9DD4;

typedef struct {
    V unk_00[32];
} R_088D9DD4;

typedef struct {
    u8 pad_00[0x8484];
    s32 unk_8484;
    s32 unk_8488;
    S_088D9DD4 unk_848C;
    R_088D9DD4 unk_849C;
    s32 unk_851C;
    u8 unk_8520[0x8484];
    s32 unk_109A4;
    s32 unk_109A8;
    u8 *unk_109AC;
} T_088D9DD4;

extern u8 D_08A4506C[];
void *func_08807190(s32, void *);
s32 func_088DA000(char *arg0);
T *func_088DA034(T *arg0, T *arg1);
s32 func_088DA178(char *arg0);
s32 func_088DA188(char *arg0);
s32 func_088DA198(s32 arg0);

T_088D9DD4 *func_088D9DD4(T_088D9DD4 *arg0, T_088D9DD4 *arg1) {
    T *q;
    T *p;
    T *t;
    S_088D9DD4 *s;

    arg0->unk_109AC = D_08A4506C;
    arg0->unk_8484 = func_088DA198((s32)arg0);
    arg0->unk_8488 = arg1->unk_8488;
    q = (T *)func_088DA188((char *)arg1);
    p = (T *)func_088DA178((char *)arg0);
    if (p != (T *)func_088DA000((char *)arg0)) {
        do {
            t = (T *)func_08807190(sizeof(T), p);
            if (t != NULL) {
                func_088DA034(t, q++);
            }
            p++;
        } while (p != (T *)func_088DA000((char *)arg0));
    }

    s = &arg0->unk_848C;
    s->unk_00 = arg1->unk_848C.unk_00;
    s->unk_04 = arg1->unk_848C.unk_04;
    s->unk_08 = arg1->unk_848C.unk_08;
    s->unk_0C = arg1->unk_848C.unk_0C;
    if (s->unk_08 != NULL) {
        ++*s->unk_0C;
    }
    arg0->unk_849C = arg1->unk_849C;
    arg0->unk_851C = arg1->unk_851C;
    arg0->unk_109A4 = func_088DA198((s32)arg0->unk_8520);
    arg0->unk_109A8 = arg1->unk_109A8;
    q = (T *)func_088DA188((char *)arg1->unk_8520);
    p = (T *)func_088DA178((char *)arg0->unk_8520);
    if (p != (T *)func_088DA000((char *)arg0->unk_8520)) {
        do {
            t = (T *)func_08807190(sizeof(T), p);
            if (t != NULL) {
                func_088DA034(t, q++);
            }
            p++;
        } while (p != (T *)func_088DA000((char *)arg0->unk_8520));
    }
    return arg0;
}
