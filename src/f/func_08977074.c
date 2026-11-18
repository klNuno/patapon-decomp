#include "common.h"

typedef struct E_08977074 {
    u8 pad_00[0x20];
} E_08977074;

typedef struct S_08977074 {
    u8 pad_00[0x10];
    u8 unk_10[0x10];
    E_08977074 unk_20[8];
    E_08977074 unk_120[8];
} S_08977074;

typedef struct T_08977074 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
    S_08977074 unk_10;
        u8 unk_230[0x28];
    u8 unk_258[0x28];
} T_08977074;

void func_0888D59C(void *);
void func_0888D820(void *);
void func_0897696C(void *, void *);
void func_089769C4(void *, void *);
void func_089769CC(void *);
void func_08976AEC(void *);

void func_08977074(T_08977074 *arg0) {
    s32 i;
    E_08977074 *temp;
    S_08977074 *s;

    arg0->unk_04 = 0;
    arg0->unk_00 = 0;
    func_0888D59C(arg0->unk_258);
    func_0888D59C(arg0->unk_230);
    func_08976AEC(arg0->unk_10.unk_10);
    func_089769CC(arg0->unk_230);
    func_089769CC(arg0->unk_258);
    for (i = 0, s = &arg0->unk_10; i < 8; i++) {
        temp = &s->unk_120[i];
        func_0888D820(temp);
        func_089769C4(temp, &s->unk_20[i]);
        func_0897696C(arg0->unk_258, temp);
    }
    func_0888D59C(arg0->unk_258);
}
