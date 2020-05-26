/****************************************************************************
 * (C) Mono Wireless Inc. - 2016 all rights reserved.
 *
 * Condition to use: (refer to detailed conditions in Japanese)
 *   - The full or part of source code is limited to use for TWE (The
 *     Wireless Engine) as compiled and flash programmed.
 *   - The full or part of source code is prohibited to distribute without
 *     permission from Mono Wireless.
 *
 * 利用条件:
 *   - 本ソースコードは、別途ソースコードライセンス記述が無い限りモノワイヤレスが著作権を
 *     保有しています。
 *   - 本ソースコードは、無保証・無サポートです。本ソースコードや生成物を用いたいかなる損害
 *     についてもモノワイヤレスは保証致しません。不具合等の報告は歓迎いたします。
 *   - 本ソースコードは、モノワイヤレスが販売する TWE シリーズ上で実行する前提で公開
 *     しています。他のマイコン等への移植・流用は一部であっても出来ません。
 *
 ****************************************************************************/

#ifndef  BME280_INCLUDED
#define  BME280_INCLUDED

#if defined __cplusplus
extern "C" {
#endif

/****************************************************************************/
/***        Include Files                                                 ***/
/****************************************************************************/
#include "appsave.h"

/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/
#define BME280_IDX_X 0
#define BME280_IDX_Y 1
#define BME280_IDX_Z 2

#define BME280_IDX_BEGIN 0
#define BME280_IDX_END (BME280_IDX_Z+1) // should be (last idx + 1)
/****************************************************************************/
/***        Type Definitions                                              ***/
/****************************************************************************/
typedef struct {
	// protected
	bool_t	bBusy;			// should block going into sleep

	// data
	int16	i16Temp;
	uint16	u16Hum;
	uint16	u16Pres;

	// working
	uint8	u8TickCount, u8TickWait;
} tsObjData_BME280;

/****************************************************************************/
/***        Exported Functions (state machine)                            ***/
/****************************************************************************/

/****************************************************************************/
/***        Exported Functions (primitive funcs)                          ***/
/****************************************************************************/
void vBME280_Init(tsObjData_BME280 *pData, tsSnsObj *pSnsObj );
bool_t bBME280_Setting();
void vBME280_Final(tsObjData_BME280 *pData, tsSnsObj *pSnsObj);

PUBLIC bool_t bBME280Reset();
PUBLIC bool_t bBME280StartRead();
PUBLIC int16 i16BME280ReadResult( int16* Temp, uint16* Pres, uint16* Hum );

/****************************************************************************/
/***        Exported Variables                                            ***/
/****************************************************************************/
#if defined __cplusplus
}
#endif

#endif  /* BME280_INCLUDED */

/****************************************************************************/
/***        END OF FILE                                                   ***/
/****************************************************************************/
