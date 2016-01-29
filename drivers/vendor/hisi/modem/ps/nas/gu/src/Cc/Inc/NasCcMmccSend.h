
#ifndef  NAS_CC_MMCC_SEND_H
#define  NAS_CC_MMCC_SEND_H

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "MmCcInterface.h"

/*****************************************************************************
  2 ��������
*****************************************************************************/
/*****************************************************************************
 �� �� ��  : NAS_CC_SendMmccAbortReq
 ��������  : ����MMCC_ABORT_REQԭ��
 �������  : ucTi - Transaction ID
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2008��1��17��
    ��    ��   : ���� 49431
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_VOID  NAS_CC_SendMmccAbortReq(
    VOS_UINT8                           ucTi
);


/*****************************************************************************
 �� �� ��  : NAS_CC_SendMmccRelReq
 ��������  : ����MMCC_REL_REQԭ��
 �������  : ucTi      - Transaction ID
             ulRelType - �ͷŵ�����(MMCC_RELEASE_ALL/MMCC_RELEASE_SPECIFIC)
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2008��1��17��
    ��    ��   : ���� 49431
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_VOID  NAS_CC_SendMmccRelReq(
    VOS_UINT8                           ucTi,
    VOS_UINT32                          ulRelType
);



VOS_VOID  NAS_CC_SendMmccEstReq(
    VOS_UINT8                           ucTi,
    VOS_UINT32                          ulCallType,
    VOS_UINT32                          ulCallMode,
    VOS_UINT32                          ulPriority
);


/*****************************************************************************
 �� �� ��  : NAS_CC_SendMmccDataReq
 ��������  : ����MMCC_DATA_REQԭ��
 �������  : ucTi        - Transaction ID
             pucCcMsg    - ԭ����Я����CC��Ϣ
             ulCcMsgSize - CC��Ϣ�ĳ���
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2008��1��17��
    ��    ��   : ���� 49431
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_VOID  NAS_CC_SendMmccDataReq(
    VOS_UINT8                           ucTi,
    VOS_UINT8                           *pucCcMsg,
    VOS_UINT32                          ulCcMsgSize
);


/*****************************************************************************
 �� �� ��  : NAS_CC_SendMmccPromptRej
 ��������  : ����MMCC_PROMPT_REJԭ��
 �������  : ulCause - �ܾ���ԭ��
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2008��1��17��
    ��    ��   : ���� 49431
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_VOID  NAS_CC_SendMmccPromptRej(
    VOS_UINT32                          ulCause
);


/*****************************************************************************
 �� �� ��  : NAS_CC_SendMmccReestReq
 ��������  : ����MMCC_REEST_REQԭ��
 �������  : ucTi - Transaction ID
 �� �� ֵ  : ��
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2008��1��17��
    ��    ��   : ���� 49431
    �޸�����   : �����ɺ���
*****************************************************************************/
VOS_VOID  NAS_CC_SendMmccReestReq(
    VOS_UINT8                           ucTi
);


VOS_VOID  NAS_CC_SendMmccStartCc(
    VOS_UINT8                           ucTi,
    VOS_UINT8                           *pucCcMsg,
    VOS_UINT32                          ulCcMsgSize
);

#if (FEATURE_ON == FEATURE_IMS)
VOS_VOID  NAS_CC_SendMmccSrvccCallInfoNtf(
    VOS_UINT8                           ucSyncTiNum,
    VOS_UINT8                          *pucSyncTi 
);
#endif

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* NAS_CC_MMCC_SEND_H */
