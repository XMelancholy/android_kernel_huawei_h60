#
# Makefile for RTC class/drivers.
#
-include $(BALONG_TOPDIR)/config/product/$(OBB_PRODUCT_NAME)/config/balong_product_config.mk

ifeq ($(strip $(CFG_CONFIG_HI6559_RTC)),YES)
obj-y 	+= rtc_hi6559.o
endif
obj-$(CONFIG_ENABLE_TEST_CODE) 	+= rtc_hi6559_test.o

