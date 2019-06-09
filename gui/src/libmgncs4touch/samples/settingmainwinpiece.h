
#ifndef _SETTING_MAINWIN_PIECE_H_
#define _SETTING_MAINWIN_PIECE_H_

#ifdef __cplusplus
extern "C" {
#endif
typedef enum{
    TYPE_CLOCK,
    TYPE_ALL,
    TYPE_INVALID,
}MY_RELOAD_TYPE;
typedef struct _mSettingMainWinPieceClass mSettingMainWinPieceClass;
typedef struct _mSettingMainWinPiece mSettingMainWinPiece;

#define mSettingMainWinPieceHeader(clss) \
    mTableViewPieceHeader(clss) \
    char (*cur_data)[SETTING_STR_MAX_LEN];\
    char* act;\
    char** data;

#define mSettingMainWinPieceClassHeader(clss, superCls) \
    mTableViewPieceClassHeader(clss, superCls) \
    void (*myreloadData)(clss *self,MY_RELOAD_TYPE type); 

struct _mSettingMainWinPiece
{   
    mSettingMainWinPieceHeader(mSettingMainWinPiece)
};

struct _mSettingMainWinPieceClass
{   
    mSettingMainWinPieceClassHeader(mSettingMainWinPiece, mTableViewPiece)
};

MGNCS_EXPORT extern mSettingMainWinPieceClass g_stmSettingMainWinPieceCls;

#ifdef __cplusplus
}
#endif
#endif /*_SETTING_MAINWIN_PIECE_H_*/
