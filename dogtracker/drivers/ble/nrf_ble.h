#ifndef _BLE_H_INCLUDED
#define _BLE_H_INCLUDED

#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "nordic_common.h"
#include "nrf.h"
#include "app_error.h"
#include "ble.h"
#include "ble_hci.h"
#include "ble_srv_common.h"
#include "ble_advdata.h"
#include "ble_conn_params.h"
#include "app_timer.h"
#include "app_button.h"
#include "ble_lbs.h"
#include "bsp.h"
#include "ble_gap.h"

#include "nrf.h"
#include "nrf_delay.h"
#include "nrf_wdt.h"
#include "nrf_gpio.h"
#include "app_timer.h"


#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"


#ifdef __cplusplus
extern "C"
{
#endif

	uint32_t ble_init(void);


#ifdef __cplusplus
}
#endif


#endif /* _BLE_H_*/
