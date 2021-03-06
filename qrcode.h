#ifndef QR_CODE_H
#define QR_CODE_H


/***********************************************************************************
 * ***
 * ** 函数功能:						生成二维码图片
 * **
 * ** 输入参数 info:				二维码信息
 * ** 
 * ** 输出参数 filename:			二维码图片名称
 * **
 * ** 返回值   					成功(0),  失败 (<=0) 
 * ***
 * *********************************************************************************/
 
extern int CreateQrCode(char * filename,const char *info);

#endif