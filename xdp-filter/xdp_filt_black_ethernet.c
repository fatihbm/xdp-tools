/* SPDX-License-Identifier: GPL-2.0 */

#define FILT_MODE_BLACKLIST
#define FILT_MODE_ETHERNET
#undef FILT_MODE_IPV4
#undef FILT_MODE_IPV6
#undef FILT_MODE_UDP
#undef FILT_MODE_TCP
#define FUNCNAME xdp_filt_black_ethernet
#include "xdp_filt_prog.h"