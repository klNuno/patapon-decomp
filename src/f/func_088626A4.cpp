#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

typedef struct Node_088626A4 {
    struct Node_088626A4 *unk_00;
    struct Node_088626A4 *unk_04;
    s32 unk_08;
} Node_088626A4;

typedef struct {
    Node_088626A4 *unk_00;
    Node_088626A4 *unk_04;
} Head_088626A4;

typedef struct {
    u8 pad_00[0x84];
    s32 *unk_84;
    s32 unk_88;
} Src_088626A4;

typedef struct {
    u8 pad_00[0xE8];
    Src_088626A4 *unk_E8;
    u8 pad_EC[0x700 - 0xEC];
    Head_088626A4 unk_700;
    Node_088626A4 *unk_708;
    s32 unk_70C;
} Obj_088626A4;

void func_088626A4(Obj_088626A4 *arg0) {
    Node_088626A4 *pos;
    s32 *p;
    s32 *end;
    Node_088626A4 *node;
    Node_088626A4 *prev;

    pos = arg0->unk_700.unk_00;
    pos = pos == (Node_088626A4 *)&arg0->unk_700 ? pos : pos->unk_00;
    p = arg0->unk_E8->unk_84;
    end = p + arg0->unk_E8->unk_88;
    if (p != end) {
        for (; p != end; p++) {
            node = arg0->unk_708->unk_00;
            if (node != arg0->unk_708) {
                if (node->unk_00 != NULL) {
                    node->unk_00->unk_04 = node->unk_04;
                }
                if (node->unk_04 != NULL) {
                    node->unk_04->unk_00 = node->unk_00;
                }
                node->unk_00 = NULL;
                node->unk_04 = NULL;
            } else {
                node = NULL;
            }
            prev = pos->unk_04;
            arg0->unk_70C++;
            prev->unk_00 = node;
            pos->unk_04 = node;
            node->unk_00 = pos;
            node->unk_04 = prev;
            new (&node->unk_08) s32(*p);
        }
    }
    arg0->unk_E8 = NULL;
}

}
