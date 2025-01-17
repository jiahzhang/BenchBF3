#pragma once

#include "common_cross.h"

#define LOG_SQ_RING_DEPTH 7 /* 2^7 entries, max is 2^15 */
#define LOG_RQ_RING_DEPTH 7 /* 2^7 entries, max is 2^15 */
#define LOG_CQ_RING_DEPTH 7 /* 2^7 entries, max is 2^15 */

#define LOG_WQ_DATA_ENTRY_BSIZE 10 /* WQ buffer logarithmic size */

__attribute__((unused)) static struct ether_addr DST_ADDR = { {0xA0, 0x88, 0xC2, 0x32, 0x04, 0x30} };

// bf2 mac addr
__attribute__((unused)) static struct ether_addr SRC_ADDR = { {0x02, 0x01, 0x01, 0x01, 0x01, 0x01} };

__attribute__((unused)) static struct ether_addr DST_DPA_ADDR = { {0x01, 0x01, 0x01, 0x01, 0x01, 0x01} };
