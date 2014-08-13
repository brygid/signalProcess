/************************************************************************/
/*						       ��ѧ����                                 */
/************************************************************************/
#ifndef __AFXEXT_H__
#include <afxext.h>
#endif
#include <math.h>


/************************************************************************/
/*							1.	FFT����								    */
/************************************************************************/

void FFT(float xin[], int N);

// void FastFourierTransform (double xin[],int N)

/************************************************************************/
/*							2.  ���ּ���                                */
/************************************************************************/

void Inte_cal(float xin[], int N, float f);

/************************************************************************/
/*							3.  A��Ȩ�˲�����������                     */
/************************************************************************/

float A_weight(float xin[],int N, int fs);

/************************************************************************/
/*							4.  ������������                            */
/************************************************************************/

float audioline(float xin[], int N, int fs);

/************************************************************************/
/*							5.  ��Ƶ�̷���                              */
/************************************************************************/
void octave_anal(float xin[],float yout[9], int N, int fs);

/************************************************************************/
/*							6.  1/3��Ƶ�̷���                           */
/************************************************************************/
void one_third_octave(float xin[], int N, int fs);

/************************************************************************/
/*							7.  ͳ��ֵ����                              */
/************************************************************************/
void statisticcal(float *xin, long counts,/*ƽ��ֵ*/ double ave, /*ƽ����*/float adev,
				  /*��׼��*/float sedv,/*����*/float var,/*���ֵ*/float dmax,
				  /*��Сֵ*/float dmin,/*�����Чֵ*/float absmax);

/************************************************************************/
/*							8.  ���鿽��                                */
/************************************************************************/
void array_cpy(float* array_target/*Ŀ������*/,float* array_sourece/*Դ����*/,int data_num/*����*/);