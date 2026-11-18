#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} E10_088CD948;

typedef struct {
    u8 pad_00[0x20];
} E20_088CD948;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x10];
    E10_088CD948 unk_20[128];
    E20_088CD948 unk_820[128];
} T_088CD948;

typedef struct {
    u8 pad_00[0x1450];
    T_088CD948 unk_1450;
    u8 unk_2C70[0x28];
    u8 unk_2C98[0x10];
} S_088CD948;

void func_088CD1AC(void *, void *);
void func_088CD204(void *, void *);
void func_088CD20C(void *);
void func_088CD328(void *);
void func_088CD408(void *);
void func_088CD418(void *);

void func_088CD948(S_088CD948 *arg0) {
    s32 i;
    E20_088CD948 *e;
    T_088CD948 *t;

    func_088CD418(arg0->unk_2C98);
    func_088CD418(arg0->unk_2C70);
    func_088CD408(arg0->unk_1450.unk_10);
    func_088CD328(arg0->unk_2C70);
    func_088CD328(arg0->unk_2C98);
    t = &arg0->unk_1450;
    for (i = 0; i < 128; i++) {
        e = &t->unk_820[i];
        func_088CD20C(e);
        func_088CD204(e, &t->unk_20[i]);
        func_088CD1AC(arg0->unk_2C98, e);
    }
    func_088CD418(arg0->unk_2C98);
}
