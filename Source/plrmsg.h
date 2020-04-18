//HEADER_GOES_HERE
#ifndef __PLRMSG_H__
#define __PLRMSG_H__

DEVILUTION_BEGIN_NAMESPACE

extern _plrmsg plr_msgs[PMSG_COUNT];

void plrmsg_delay(BOOL delay);
char *ErrorPlrMsg(const char *pszMsg);
size_t EventPlrMsg(const char *pszFmt, ...);
void SendPlrMsg(int pnum, const char *pszStr);
void ClearPlrMsg();
void InitPlrMsg();
void DrawPlrMsg();
void PrintPlrMsg(DWORD x, DWORD y, DWORD width, const char *str, BYTE col);

/* rdata */

extern const char text_color_from_player_num[MAX_PLRS + 1];

DEVILUTION_END_NAMESPACE

#endif /* __PLRMSG_H__ */
