#include "start_check.h"
#include "register.h"
#include "os.h"

extern check_ctx_t check_ctx;


void init_check_ctx()
{

    os_memset(check_ctx,0,sizeof(check_ctx));

    os_memcpy(check_ctx.current_block_hash, N_storage.first_block_hash, 32);

    check_ctx.blocks_elapsed = 0;
    check_ctx.machine_state = WAITING_FOR_BLOCK;

}


void parse_block_header(uint8_t *buffer)
{
    
    
}