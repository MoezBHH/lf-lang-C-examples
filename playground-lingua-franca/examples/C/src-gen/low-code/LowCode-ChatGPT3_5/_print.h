#ifndef _PRINT_H
#define _PRINT_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_953025308_H
#define TOP_LEVEL_PREAMBLE_953025308_H
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int* value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _print_in_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    _print_in_t* _lf_in;
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    // width of -2 indicates that it is not a multiport.
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    int _lf_in_width;
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    // Default input (in case it does not get connected)
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    _print_in_t _lf_default__in;
    #line 171 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    reaction_t _lf__reaction_0;
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    trigger_t _lf__in;
    #line 169 "/home/moez/AccountableAI/LFGPT/playground-lingua-franca/examples/C/src/low-code/LowCode-ChatGPT3_5.lf"
    reaction_t* _lf__in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _print_self_t;
_print_self_t* new__print();
#endif // _PRINT_H
