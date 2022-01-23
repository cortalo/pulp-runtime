#include <hwpe_buffer_driver.h>
#include <stdint.h>
#include <stdio.h>

void set_buffer_n(void)
{
    uint32_t volatile *ptarget = (uint32_t *)
        (HWPE_BUFFER_BASE_ADDR + HWPE_BUFFER_DATA_IN_0_REG_OFFSET);
    uint32_t i;
    for (i = 0; i < 32; i++)
        ptarget[i] = 14;
}

void set_buffer_mem(void)
{
  uint32_t volatile *test_mem_1 = (uint32_t *) 0x1c010010;
  uint32_t volatile *test_mem_2 = test_mem_1 + 1;
  uint32_t volatile *test_mem_3 = test_mem_2 + 1;

  uint32_t a = 14;
  uint32_t b = 15;
  uint32_t c = 16;

  test_mem_1[0] = a;
  test_mem_2[0] = b;
  test_mem_3[0] = c;
  test_mem_1[0] = a;
  test_mem_2[0] = b;
  test_mem_3[0] = c;
  test_mem_1[0] = a;
  test_mem_2[0] = b;
  test_mem_3[0] = c;
  test_mem_1[0] = a;
  test_mem_2[0] = b;
  test_mem_3[0] = c;
  test_mem_1[0] = a;
  test_mem_2[0] = b;
  test_mem_3[0] = c;
  test_mem_1[0] = a;
  test_mem_2[0] = b;
  test_mem_3[0] = c;
  test_mem_1[0] = a;
  test_mem_2[0] = b;
  test_mem_3[0] = c;
  test_mem_1[0] = a;
  test_mem_2[0] = b;
  test_mem_3[0] = c;


  uint32_t volatile *ptarget = (uint32_t *)
    (HWPE_BUFFER_BASE_ADDR + HWPE_BUFFER_DATA_IN_0_REG_OFFSET);

  ptarget[0] = a;
  ptarget[0] = b;
  ptarget[0] = a;
  ptarget[0] = b;
  ptarget[0] = a;
  ptarget[0] = b;
  ptarget[0] = a;
  ptarget[0] = a;
  ptarget[0] = b;
  ptarget[0] = a;
  ptarget[0] = b;
  ptarget[0] = a;
  ptarget[0] = b;
  ptarget[0] = a;
  ptarget[0] = b;
  ptarget[0] = b;

  return;
}

void set_buffer(void)
{
  uint32_t volatile *ptarget = (uint32_t *)
      (HWPE_BUFFER_BASE_ADDR + HWPE_BUFFER_DATA_IN_0_REG_OFFSET);
  uint32_t i;
  *(ptarget++) = 0x01;
  *(ptarget++) = 0x02;
  *(ptarget++) = 0x03;
  *(ptarget++) = 0x04;
  *(ptarget++) = 0x05;
  *(ptarget++) = 0x06;
  *(ptarget++) = 0x07;
  *(ptarget++) = 0x08;
  *(ptarget++) = 0x09;
  *(ptarget++) = 0x0a;
  *(ptarget++) = 0x0b;
  *(ptarget++) = 0x0c;
  *(ptarget++) = 0x0d;
  *(ptarget++) = 0x0e;
  *(ptarget++) = 0x0f;
  *(ptarget++) = 0x10;
  *(ptarget++) = 0x11;
  *(ptarget++) = 0x12;
  *(ptarget++) = 0x13;
  *(ptarget++) = 0x14;
  *(ptarget++) = 0x15;
  *(ptarget++) = 0x16;
  *(ptarget++) = 0x17;
  *(ptarget++) = 0x18;
  *(ptarget++) = 0x19;
  *(ptarget++) = 0x1a;
  *(ptarget++) = 0x1b;
  *(ptarget++) = 0x1c;
  *(ptarget++) = 0x1d;
  *(ptarget++) = 0x1e;
  *(ptarget++) = 0x1f;
  *(ptarget++) = 0x20;
}

void get_result(void)
{
  uint32_t volatile *ptarget = (uint32_t *)
      (HWPE_BUFFER_BASE_ADDR+HWPE_BUFFER_DATA_OUT_0_REG_OFFSET);
  uint32_t i;
  for (i = 0; i < 32; i++)
    printf("%d\n", *(ptarget++));



}
