/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

******************************************************************************
 �� �� ��   : rfd_om_def.h
 �� �� ��   : ����
 ��    ��   : wangxu
 ��������   : 2011��4��25��
 ����޸�   :
 ��������   : RFD OM ��ͷ�ļ�
 �����б�   :
 �޸���ʷ   :
 1.��    ��   : 2012��1��9��
   ��    ��   : shijiahong
   �޸�����   : �����ļ�
 --------------------------------------------------------------------------------
 ******************************************************************************/

#ifndef __RFD_OM_DEF_H__
#define __RFD_OM_DEF_H__


#ifdef __cplusplus
extern "C"{
#endif /* __cplusplus */


typedef enum
{
    LPHY_RFD_FREQ_SWITCH_OM_REQ  = OM_CMD_ID(LPHY_RFD_MID, OM_TYPE_REQ, 0x0),/*��Ƶ�ϱ�����*/
    LPHY_RFD_AGC_DC_OM_REQ                                                     /*AGC/DC�����ϱ�����*/
}LPHY_RFD_OM_REQ_ENUM;

typedef enum
{
    RFD_FREQ_SWITCH_OM_OFF = 0x0,
    RFD_FREQ_SWITCH_OM_ON,
    RFD_FREQ_SWITCH_OM_RD
}RFD_FREQ_SWITCH_OM_SWITCH_ENUM;

typedef enum
{
    RFD_AGC_DC_CFG_OM_OFF = 0x0,
    RFD_AGC_DC_CFG_OM_ON
}RFD_AGC_DC_CFG_OM_SWITCH_ENUM;


typedef struct
{
    UINT16 usBand;
    UINT16 usBw;
    UINT32 ulFreq;
}RFD_BAND_INFO_STRU;

typedef struct
{
    RFD_FREQ_SWITCH_OM_SWITCH_ENUM  enRptSwitch;
    UINT32                          ulRfSsiCmd[10];  /*��Ƶ��ɺ������ssiָ��*/
    RFD_BAND_INFO_STRU              stDestBandInfo;  /*Ŀ��band��Ϣ*/
    RFD_BAND_INFO_STRU              stCurrBandInfo;  /*��ǰband��Ϣ*/
}RFD_FREQ_SWITCH_OM_STRU;

typedef struct
{
    RFD_AGC_DC_CFG_OM_SWITCH_ENUM   enAgcDcCfgRpt;
    UINT16                          usAnt0RfGainCode; /*����0��aagc code*/
    UINT16                          usAnt0RfDCCode;   /*����0��dc code*/
    UINT16                          usAnt1RfGainCode; /*����1��aagc code*/
    UINT16                          usAnt1RfDCCode;   /*����1��dc code*/
}RFD_AGC_DC_CFG_OM_STRU;



#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* __RFD_OM_DEF_H__ */
