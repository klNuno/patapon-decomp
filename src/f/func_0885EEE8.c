#include "common.h"

typedef struct {
    u8 unk_00[0x110];
} E110;

typedef struct {
    u8 unk_00[0x20];
} E20;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x10];
    E110 unk_20[0x80];
    E20 unk_8820[0x80];
    u8 unk_9820[0x28];
    u8 unk_9848[0x58];
    s32 unk_98A0;
    void *unk_98A4;
} Obj;

void func_0885E330(void *, void *);
void func_0885E388(void *, void *);
void func_0885E390(void *);
void func_0885E724(void *);
void func_0885E844(void *);
s32 func_0885E854(void *);

void func_0885EEE8(Obj *arg0) {
    s32 i;
    E20 *e;

    arg0->unk_98A0 = 1;
    func_0885E854(arg0->unk_9848);
    func_0885E854(arg0->unk_9820);
    func_0885E844(arg0->unk_10);
    func_0885E724(arg0->unk_9820);
    func_0885E724(arg0->unk_9848);
    for (i = 0; i < 0x80; i++) {
        e = &arg0->unk_8820[i];
        func_0885E390(e);
        func_0885E388(e, &arg0->unk_20[i]);
        func_0885E330(arg0->unk_9848, e);
    }
    func_0885E854(arg0->unk_9848);
}
