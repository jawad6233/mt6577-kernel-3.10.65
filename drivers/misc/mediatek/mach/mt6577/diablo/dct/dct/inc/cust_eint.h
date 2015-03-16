/*
 * Generated by MTK SP Drv_CodeGen Version 03.13.6  for MT6575_NP. Copyright MediaTek Inc. (C) 2013.
 * Fri Feb 27 11:20:41 2015
 * Do Not Modify the File.
 */

#ifndef __CUST_EINTH
#define __CUST_EINTH

#ifdef __cplusplus
extern "C" {
#endif

#define CUST_EINT_POLARITY_LOW              0
#define CUST_EINT_POLARITY_HIGH             1
#define CUST_EINT_DEBOUNCE_DISABLE          0
#define CUST_EINT_DEBOUNCE_ENABLE           1
#define CUST_EINT_EDGE_SENSITIVE            0
#define CUST_EINT_LEVEL_SENSITIVE           1

//////////////////////////////////////////////////////////////////////////////


#define CUST_EINTF_TRIGGER_RISING						 1
#define CUST_EINTF_TRIGGER_FALLING                      2
#define CUST_EINTF_TRIGGER_HIGH                         4
#define CUST_EINTF_TRIGGER_LOW                          8



#define CUST_EINT_HDMI_HPD_NUM              1
#define CUST_EINT_HDMI_HPD_DEBOUNCE_CN      0
#define CUST_EINT_HDMI_HPD_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_HDMI_HPD_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_HDMI_HPD_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_HDMI_HPD_TYPE			CUST_EINTF_TRIGGER_LOW

#define CUST_EINT_ALS_NUM              2
#define CUST_EINT_ALS_DEBOUNCE_CN      0
#define CUST_EINT_ALS_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_ALS_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_ALS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_ALS_TYPE			CUST_EINTF_TRIGGER_LOW

#define CUST_EINT_SIM1_DET_NUM              3
#define CUST_EINT_SIM1_DET_DEBOUNCE_CN      0
#define CUST_EINT_SIM1_DET_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_SIM1_DET_SENSITIVE        CUST_EINT_EDGE_SENSITIVE
#define CUST_EINT_SIM1_DET_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_SIM1_DET_TYPE			CUST_EINTF_TRIGGER_FALLING

#define CUST_EINT_SIM2_DET_NUM              4
#define CUST_EINT_SIM2_DET_DEBOUNCE_CN      0
#define CUST_EINT_SIM2_DET_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_SIM2_DET_SENSITIVE        CUST_EINT_EDGE_SENSITIVE
#define CUST_EINT_SIM2_DET_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_SIM2_DET_TYPE			CUST_EINTF_TRIGGER_FALLING

#define CUST_EINT_MSE_NUM              5
#define CUST_EINT_MSE_DEBOUNCE_CN      0
#define CUST_EINT_MSE_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_MSE_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_MSE_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_MSE_TYPE			CUST_EINTF_TRIGGER_LOW

#define CUST_EINT_TOUCH_PANEL_NUM              6
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_CN      0
#define CUST_EINT_TOUCH_PANEL_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_TOUCH_PANEL_SENSITIVE        CUST_EINT_EDGE_SENSITIVE
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_TOUCH_PANEL_TYPE			CUST_EINTF_TRIGGER_FALLING

#define CUST_EINT_ACCDET_NUM              8
#define CUST_EINT_ACCDET_DEBOUNCE_CN      0
#define CUST_EINT_ACCDET_POLARITY         CUST_EINT_POLARITY_HIGH
#define CUST_EINT_ACCDET_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_ACCDET_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_ACCDET_TYPE			CUST_EINTF_TRIGGER_HIGH

#define CUST_EINT_MT6329_PMIC_NUM              9
#define CUST_EINT_MT6329_PMIC_DEBOUNCE_CN      1
#define CUST_EINT_MT6329_PMIC_POLARITY         CUST_EINT_POLARITY_HIGH
#define CUST_EINT_MT6329_PMIC_SENSITIVE        CUST_EINT_EDGE_SENSITIVE
#define CUST_EINT_MT6329_PMIC_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE
#define CUST_EINT_MT6329_PMIC_TYPE			CUST_EINTF_TRIGGER_RISING

#define CUST_EINT_COMBO_BGF_NUM              14
#define CUST_EINT_COMBO_BGF_DEBOUNCE_CN      0
#define CUST_EINT_COMBO_BGF_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_COMBO_BGF_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_COMBO_BGF_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_COMBO_BGF_TYPE			CUST_EINTF_TRIGGER_LOW

#define CUST_EINT_COMBO_ALL_NUM              17
#define CUST_EINT_COMBO_ALL_DEBOUNCE_CN      0
#define CUST_EINT_COMBO_ALL_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_COMBO_ALL_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_COMBO_ALL_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_COMBO_ALL_TYPE			CUST_EINTF_TRIGGER_LOW

#define CUST_EINT_WIFI_NUM              18
#define CUST_EINT_WIFI_DEBOUNCE_CN      0
#define CUST_EINT_WIFI_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_WIFI_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_WIFI_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_WIFI_TYPE			CUST_EINTF_TRIGGER_LOW



//////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}

#endif
#endif //_CUST_EINT_H

