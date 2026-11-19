#include "common.h"
void func_0891046C(void *);
void func_0890B53C(void *);
void func_0890D374(void *);
void func_0890FEBC(void *);
void func_08926090(void *);

typedef struct {
    u8 pad_00[0xD90];
    u8 unk_D90[0xE90];
    u8 unk_1C20[0x1680];
    u8 unk_32A0[0x16D174];
    u8 unk_170414[1];
} T;

void func_08910E10(T *arg0) {
    func_0891046C(arg0);
    func_0890B53C(arg0->unk_32A0);
    func_0890D374(arg0->unk_D90);
    func_0890FEBC(arg0->unk_1C20);
    func_08926090(arg0->unk_170414);
}
