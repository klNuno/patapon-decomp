#include "common.h"

extern "C" {

typedef struct T T;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0x144];
    u8 unk_150[0x3868];
    u8 unk_39B8[0x418];
    u8 unk_3DD0[0x3DC0];
    u8 unk_7B90[1];
} U;

void func_088BA438(void *);
void func_08990EC0(void *);
void func_088D2CE8(void *);
void func_08889FA4(void *);
void func_088D22C0(T *);

void func_088BC71C(U *arg0) {
    func_088BA438(arg0->unk_0C);
    func_08990EC0(arg0->unk_150);
    func_088D2CE8(arg0->unk_39B8);
    func_08889FA4(arg0->unk_3DD0);
    func_088D22C0((T *)arg0->unk_7B90);
}

}
