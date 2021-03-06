#ifndef _CLIENT_IMPL_H
#define _CLIENT_IMPL_H

#include <stdint.h>

#include "client.h"
#include "filter.h"

fRequestProcessor getRequestHandler(const char* const pc_host, 
                                    const uint16_t ui_port,
                                    const Filter** const pf_filters,
                                    const size_t s_filters);

#endif
