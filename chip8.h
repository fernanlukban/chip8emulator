#define NUM_OF_REGISTERS 16
#define MEMORY_SIZE_KB 4096

class Chip8 {
  uint16_t opcode;
  uint8_t registers[NUM_OF_REGISTERS];
  uint8_t memory[MEMORY_SIZE_KB];
  uint16_t index;
  uint16_t pc;
};
