#include "common.h"

void func_0880416C(void *);
s32 func_08806D24(void *);
void func_088070B4(void *, s32);
void func_088072B0(void *, s32);
void func_088073C4(void *);
void func_088074C4(void *);
void func_08809124(void *);
extern s32 D_08A49148[];
extern u8 D_08A49150[];
extern u8 D_08A491A4[];
extern u8 D_08A491F4[];
extern u8 D_08A49244[];

void *func_088072F0(void *arg0, s16 arg1) {
    struct { s32 unk_00; s32 unk_04; } sp18;

    if (arg0 != NULL) {
        func_088072B0(&sp18, func_08806D24(arg0));
        if (--D_08A49148[0] == 0) {
            func_08809124(D_08A491A4);
            func_08809124(D_08A49244);
            func_08809124(D_08A491F4);
            func_088074C4(D_08A49150);
            func_088073C4(D_08A491A4);
            func_088073C4(D_08A49244);
            func_088073C4(D_08A491F4);
        }
        func_088070B4(&sp18, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
