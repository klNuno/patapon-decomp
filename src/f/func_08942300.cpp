#include "common.h"

extern "C" {

struct V {
    virtual void unk_08();
    virtual V *unk_0C(void *, s32, s32, s32, s32);
    virtual void unk_10(s32);
    u8 pad_04[0x498];
    s32 unk_49C;
};

struct W {
    virtual void unk_08();
    virtual V *unk_0C(void *, s32, s32, s32, s32);
};

struct T {
    u8 pad_00[4];
    W *unk_04;
    u8 pad_08[0x1A4];
    V *unk_1AC;
    u8 unk_1B0[1];
};

struct R {
    union {
        struct {
            void *unk_00;
            s32 unk_04;
            s32 unk_08;
            s32 unk_0C;
        } unk_00;
        struct { f32 unk_00[4]; } unk_10;
    } unk_00;
    union {
        struct {
            s32 unk_00;
            u8 unk_04, unk_05, unk_06, unk_07;
        } unk_00;
        struct { f32 unk_00[2]; } unk_08;
    } unk_10;
};

extern s32 func_08852BA8(void *);
s32 func_088539E8(V *);
void func_088E63DC(s32);
void func_088E6540(V *, s32, s32, s32, s32);
void func_088E66A0(V *, s32, s32);
void func_0894200C(T *, V *);
s32 func_089425E4(R *, s32);
void func_0894262C(void *);

V *func_08942300(T *arg0, const R *arg1) {
    R r;
    V *p;
    s32 n;
    s32 temp;

    r.unk_00.unk_10 = arg1->unk_00.unk_10;
    r.unk_10.unk_08 = arg1->unk_10.unk_08;

    if (arg0->unk_04 == NULL) {
        return NULL;
    }
    func_0894262C(arg0->unk_1B0);
    if (r.unk_00.unk_00.unk_00 == NULL) {
        return NULL;
    }
    if (r.unk_10.unk_00.unk_06 != 0) {
        p = arg0->unk_1AC;
    } else {
        temp = r.unk_10.unk_00.unk_04 != 0;
        if (temp != 0) {
            temp = (r.unk_10.unk_00.unk_05 != 0) ^ 1;
        }
        p = arg0->unk_04->unk_0C(r.unk_00.unk_00.unk_00, 0, temp, 0, -1);
        if (p == NULL) {
            return NULL;
        }
        func_0894200C(arg0, p);
        func_088E66A0(p, r.unk_00.unk_00.unk_0C, 0);
        func_088E66A0(p, r.unk_10.unk_00.unk_00, 1);
        p->unk_10(1);
    }
    if (p == NULL) {
        return NULL;
    }
    n = func_089425E4(&r, *(s32 *)((u8 *)p + 0x49C));
    if (n >= 0) {
        func_088E66A0(p, r.unk_00.unk_00.unk_0C, 0);
        func_088E66A0(p, r.unk_10.unk_00.unk_00, 1);
        func_088E6540(p, n, 1, func_08852BA8(p), r.unk_00.unk_00.unk_0C);
        if (r.unk_10.unk_00.unk_06 == 0 && func_088539E8(p) == 0) {
            func_088E63DC((s32)p);
            return NULL;
        }
    }
    if (r.unk_10.unk_00.unk_05 != 0) {
        func_088E63DC((s32)p);
        return NULL;
    }
    return p;
}

}
