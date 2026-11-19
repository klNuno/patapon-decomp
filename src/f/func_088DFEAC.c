#include "common.h"

typedef struct {
    u8 pad_00[0x8110];
    u8 unk_8110;
    u8 pad_8111[0x1309F];
    u8 unk_1B1B0;
    u8 pad_1B1B1[0x447];
    u8 unk_1B5F8;
    u8 pad_1B5F9[0x10857];
    u8 unk_2BE50;
} Unk;

void func_088BC71C(Unk *);
void func_0898F9B0(void *);
void func_088F73F4(void *);
void func_088E3120(void *);
void func_088E0E74(void *);

void func_088DFEAC(Unk *arg0) {
    func_088BC71C(arg0);
    func_0898F9B0(&arg0->unk_2BE50);
    func_088F73F4(&arg0->unk_1B5F8);
    func_088E3120(&arg0->unk_1B1B0);
    func_088E0E74(&arg0->unk_8110);
}
