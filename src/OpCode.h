#ifndef OP_CODE_H
#define OP_CODE_H

namespace luna
{
    enum OpType
    {
        OpType_LoadConst = 1,           // AB A: register B: const index
        OpType_Move,                    // AB A: register B: register    B -> A
    };

    struct Instruction
    {
        unsigned int opcode_;

        Instruction(OpType op, int a, int b) : opcode_(op)
        {
            opcode_ = (opcode_ << 24) | (a << 16) | b;
        }

        static Instruction ABCode(OpType op, int a, int b)
        {
            return Instruction(op, a, b);
        }
    };
} // namespace luna

#endif // OP_CODE_H
