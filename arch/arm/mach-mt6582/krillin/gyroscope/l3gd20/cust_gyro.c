#include <linux/types.h>
#include <mach/mt_pm_ldo.h>
#include <cust_gyro.h>

/*---------------------------------------------------------------------------*/
static struct gyro_hw cust_gyro_hw = {
    .i2c_num = 0,
    .direction = 7,
    .power_id = MT65XX_POWER_NONE,  /*!< LDO is not used */
    .power_vol= VOL_DEFAULT,        /*!< LDO is not used */
    .firlen = 16,                   /*!< don't enable low pass fileter */
};
/*---------------------------------------------------------------------------*/

struct gyro_hw* get_cust_gyro_hw(void) 
{
    return &cust_gyro_hw;
}
