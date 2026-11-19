#include "common.h"

typedef struct {
    u8 pad_00[0x658];
} Sub;

typedef struct {
    u8 pad_00[0x1C];
    Sub unk_1C;
} S;

typedef struct T T;
typedef struct T089144C0 T089144C0;

void func_08914808(S *, s32, Sub *);
void func_08914B28(T *arg0);
void func_089146F0(char *arg0);
void func_0891470C(T *arg0);
void func_089147B4(S *);
void func_089144C0(T089144C0 *arg0);

void func_08914470(S *arg0, s32 arg1) {
    func_08914808(arg0, arg1, &arg0->unk_1C);
    func_08914B28((T *)arg0);
    func_089146F0((char *)arg0);
    func_0891470C((T *)arg0);
    func_089147B4(arg0);
    func_089144C0((T089144C0 *)arg0);
}
