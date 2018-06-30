#include "stdint.h"

#define UNINITIALIZED 0
#define WAITING_FOR_BLOCK 1

#define ERR_WRONG_STATE_TRANSITION 0x6013


typedef struct check_ctx_t {

    uint8_t current_block_hash[32];
    uint8_t current_merkle_root[32];
    uint16_t blocks_elapsed;
    uint16_t tx_in_block;
    uint16_t tx_parsed;
    uint8_t machine_state;
} check_ctx_t;

void init_check_ctx();

void parse_block_header(uint8_t *buffer);


