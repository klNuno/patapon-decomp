#include "common.h"

extern "C" {

class C {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

void func_08889A2C(void *, s32);
void func_088BBDF0(void *, s32);

class P1 {
public:
    s32 unk_00;
    C *unk_04;
    void *unk_08;
    s32 *unk_0C;

    void release() {
        if (unk_08 != NULL) {
            --*unk_0C;
            s32 *c = *(s32 *volatile *)&unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                unk_04->v1(unk_08, unk_0C, unk_00);
                func_08889A2C(unk_08, unk_00);
            }
        }
    }
};

class P2 {
public:
    s32 unk_00;
    C *unk_04;
    void *unk_08;
    s32 *unk_0C;

    void release() {
        if (unk_08 != NULL) {
            --*unk_0C;
            s32 *c = *(s32 *volatile *)&unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                unk_04->v1(unk_08, unk_0C, unk_00);
                func_088BBDF0(unk_08, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[4];
    s32 unk_1C;
} H;

typedef struct {
    u8 pad_00[8];
    H *unk_08;
    u8 unk_0C[0x3984];
    u8 unk_3990[0x28];
    u8 unk_39B8[0x418];
    u8 unk_3DD0[0x3DB0];
    s32 unk_7B80;
    s32 *unk_7B84;
    s32 unk_7B88;
    s32 *unk_7B8C;
    u8 unk_7B90[4];
} A;

void func_0888A168(void *, H *, P1 *, s32, s32);
void func_088BA51C(void *, A *, s32, s32, s32);
void func_088BBD4C(P2 *, void *, s32);
void func_088BD034(P1 *, P2 *);
void func_088D24B8(void *);
void func_088D2DCC(void *, H *);
void func_088D330C(void *, s32);

void func_088BCC78(A *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    P2 b;
    P1 a;
    H *h;
    s32 *q;

    func_088D24B8(arg0->unk_7B90);
    func_088BA51C(arg0->unk_0C, arg0, arg1, arg3, arg4);
    h = arg0->unk_08;
    q = (s32 *)((u8 *)h + h->unk_14);
    arg0->unk_7B80 = *q;
    arg0->unk_7B84 = q + 1;
    h = arg0->unk_08;
    q = (s32 *)((u8 *)h + h->unk_1C);
    arg0->unk_7B88 = *q;
    arg0->unk_7B8C = q + 1;
    func_088BBD4C(&b, arg0->unk_0C, 6);
    func_088BD034(&a, &b);
    func_0888A168(arg0->unk_3DD0, arg0->unk_08, &a, arg1, arg3);
    a.release();
    b.release();
    func_088D330C(arg0->unk_3990, arg2);
    func_088D2DCC(arg0->unk_39B8, arg0->unk_08);
}

}
