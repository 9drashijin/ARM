#include "unity.h"
#include "malloc.h"
#include "Registers.h"
#include "Rcc.h"
#include "Host.h"

#define rcc           ((RccType *)RCC_BASE_ADDRESS)

void setUp(void)
{
  HostRcc = malloc(sizeof(RccType));
  HostGpioG = malloc(sizeof(GpioType));
}

void tearDown(void)
{
  free(HostRcc);
  free(GpioType);
  HostRcc = NULL;
  HostGpioG = NULL;
}

void test_module_generator_needs_to_be_implemented(void)
{
	//rcc-->RCC_AHB1ENR = 0;
  //rcc-->RCC_AHB1RSTR = 0xffffffff;
  
  TEST_ASSERT_EQUAL(1,rcc->RCC_AHB1ENR & 1);
}
