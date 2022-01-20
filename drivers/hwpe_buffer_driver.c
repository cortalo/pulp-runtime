#include <hwpe_buffer_driver.h>
#include <stdint.h>
#include <stdio.h>

void set_buffer(uint32_t number)
{
  uint32_t volatile *ptarget = (uint32_t *) (HWPE_BUFFER_BASE_ADDR+HWPE_BUFFER_DATA_IN_REG_OFFSET);
  *ptarget = number;
}

void get_result(uint32_t *result)
{
  uint32_t volatile *ptarget = (uint32_t *) (HWPE_BUFFER_BASE_ADDR+HWPE_BUFFER_DATA_OUT_REG_OFFSET);
  *result = *ptarget;

}
