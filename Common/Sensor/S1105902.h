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

#ifndef  S1105902_INCLUDED
#define  S1105902_INCLUDED

#if defined __cplusplus
extern "C" {
#endif

/****************************************************************************/
/***        Include Files                                                 ***/
/****************************************************************************/

/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/
#define S1105902_IDX_R 0
#define S1105902_IDX_G 1
#define S1105902_IDX_B 2
#define S1105902_IDX_I 3

#define S1105902_IDX_BEGIN 0
#define S1105902_IDX_END (S1105902_IDX_I+1) // should be (last idx + 1)

/****************************************************************************/
/***        Type Definitions                                              ***/
/****************************************************************************/
typedef struct {
	// protected
	bool_t bBusy;			// should block going into sleep

	// data
	uint16 au16Result[4];	//	Red, Green, Blue, Infrared

	// working
	uint8 u8TickCount, u8TickWait;
} tsObjData_S1105902;

/****************************************************************************/
/***        Exported Functions (state machine)                            ***/
/****************************************************************************/

/****************************************************************************/
/***        Exported Functions (primitive funcs)                          ***/
/****************************************************************************/
void vS1105902_Init(tsObjData_S1105902 *pData, tsSnsObj *pSnsObj );
void vS1105902_Final(tsObjData_S1105902 *pData, tsSnsObj *pSnsObj);

PUBLIC bool_t bS1105902reset();
PUBLIC bool_t bS1105902startRead();
PUBLIC uint16 u16S1105902readResult( uint8 u8comp );

/****************************************************************************/
/***        Exported Variables                                            ***/
/****************************************************************************/

#if defined __cplusplus
}
#endif

#endif  /* S1105902_INCLUDED */

/****************************************************************************/
/***        END OF FILE                                                   ***/
/****************************************************************************/

