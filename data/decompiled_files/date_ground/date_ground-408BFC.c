#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_408BFC(_QWORD *a1, const char *a2, struct timespec *a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rax
  char *v7; // rax
  char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  const char *v15; // rax
  _BOOL4 v16; // eax
  bool v17; // al
  struct timespec *timer; // [rsp+18h] [rbp-3A8h]
  char v20; // [rsp+3Fh] [rbp-381h]
  bool v21; // [rsp+40h] [rbp-380h]
  bool v22; // [rsp+43h] [rbp-37Dh]
  int j; // [rsp+44h] [rbp-37Ch]
  time_t v24; // [rsp+58h] [rbp-368h]
  time_t v25; // [rsp+58h] [rbp-368h]
  char *ptr; // [rsp+60h] [rbp-360h]
  unsigned __int64 v27; // [rsp+68h] [rbp-358h]
  const char *i; // [rsp+70h] [rbp-350h]
  const char *v29; // [rsp+70h] [rbp-350h]
  char *v30; // [rsp+78h] [rbp-348h]
  __int64 v31; // [rsp+80h] [rbp-340h]
  struct tm *v32; // [rsp+88h] [rbp-338h]
  const char *v33; // [rsp+90h] [rbp-330h]
  char *value; // [rsp+98h] [rbp-328h]
  struct tm *v35; // [rsp+A0h] [rbp-320h]
  __int64 v36; // [rsp+A8h] [rbp-318h]
  signed __int64 v37; // [rsp+B0h] [rbp-310h]
  __int64 v38; // [rsp+D8h] [rbp-2E8h]
  __int64 v39; // [rsp+118h] [rbp-2A8h]
  struct timespec v40; // [rsp+130h] [rbp-290h] BYREF
  struct tm tp; // [rsp+140h] [rbp-280h] BYREF
  struct tm v42; // [rsp+180h] [rbp-240h] BYREF
  const char *v43; // [rsp+1C0h] [rbp-200h] BYREF
  __int64 v44; // [rsp+1C8h] [rbp-1F8h]
  int v45; // [rsp+1D0h] [rbp-1F0h]
  int v46; // [rsp+1D4h] [rbp-1ECh]
  __int64 v47; // [rsp+1D8h] [rbp-1E8h]
  int v48; // [rsp+1E0h] [rbp-1E0h]
  __int64 v49; // [rsp+1E8h] [rbp-1D8h]
  __int64 v50; // [rsp+1F0h] [rbp-1D0h]
  __int64 v51; // [rsp+1F8h] [rbp-1C8h]
  __int64 v52; // [rsp+200h] [rbp-1C0h]
  __int64 v53; // [rsp+208h] [rbp-1B8h]
  __int64 v54; // [rsp+210h] [rbp-1B0h]
  __int64 v55; // [rsp+218h] [rbp-1A8h]
  __int64 v56; // [rsp+220h] [rbp-1A0h]
  __int64 v57; // [rsp+228h] [rbp-198h]
  __int64 v58[7]; // [rsp+230h] [rbp-190h] BYREF
  char v59; // [rsp+268h] [rbp-158h]
  char v60; // [rsp+269h] [rbp-157h]
  __int64 v61; // [rsp+270h] [rbp-150h]
  __int64 v62; // [rsp+278h] [rbp-148h]
  __int64 v63; // [rsp+280h] [rbp-140h]
  __int64 v64; // [rsp+288h] [rbp-138h]
  __int64 v65; // [rsp+290h] [rbp-130h]
  __int64 v66; // [rsp+298h] [rbp-128h]
  char *v67; // [rsp+2A0h] [rbp-120h]
  int v68; // [rsp+2A8h] [rbp-118h]
  int v69; // [rsp+2ACh] [rbp-114h]
  char *s2; // [rsp+2B0h] [rbp-110h]
  int v71; // [rsp+2B8h] [rbp-108h]
  int v72; // [rsp+2BCh] [rbp-104h]
  __int64 v73; // [rsp+2C0h] [rbp-100h]
  char v74[112]; // [rsp+2D0h] [rbp-F0h] BYREF
  char s[104]; // [rsp+340h] [rbp-80h] BYREF
  unsigned __int64 v76; // [rsp+3A8h] [rbp-18h]

  timer = a3;
  v76 = __readfsqword(0x28u);
  v20 = 0;
  ptr = 0LL;
  v21 = 1;
  if ( !a3 )
  {
    sub_405AC6(&v40);
    timer = &v40;
  }
  v24 = timer->tv_sec;
  v31 = timer->tv_nsec;
  v32 = localtime(&timer->tv_sec);
  if ( !v32 )
    return 0LL;
  while ( (unsigned __int8)sub_40C9FB(*(unsigned __int8 *)a2) )
    ++a2;
  if ( !strncmp(a2, "TZ=\"", 4uLL) )
  {
    v33 = a2 + 4;
    v27 = 1LL;
    for ( i = a2 + 4; *i; ++i )
    {
      if ( *i == 92 )
      {
        if ( *++i != 92 && *i != 34 )
          break;
      }
      else if ( *i == 34 )
      {
        free(ptr);
        ptr = (char *)sub_408B8A(v74);
        if ( v27 <= 0x64 )
          v6 = s;
        else
          v6 = (char *)sub_40C4AB(v27);
        value = v6;
        v30 = v6;
        for ( i = v33; *i != 34; i = v29 + 1 )
        {
          v7 = v30++;
          v29 = &i[*i == 92];
          *v7 = *v29;
        }
        *v30 = 0;
        v22 = setenv("TZ", value, 1) == 0;
        if ( v27 > 0x64 )
          free(value);
        if ( !v22 )
          goto LABEL_79;
        v20 = 1;
        a2 = i + 1;
      }
      ++v27;
    }
  }
  if ( !*a2 )
    a2 = "0";
  v43 = a2;
  v50 = v32->tm_year;
  v50 += 1900LL;
  v51 = 0LL;
  v52 = v32->tm_mon + 1;
  v53 = v32->tm_mday;
  v54 = v32->tm_hour;
  v55 = v32->tm_min;
  v56 = v32->tm_sec;
  v57 = v31;
  tp.tm_isdst = v32->tm_isdst;
  v48 = 2;
  v8 = (char *)v58;
  v9 = 7LL;
  memset(v58, 0, sizeof(v58));
  v10 = 0LL;
  v59 = 0;
  v60 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v65 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v66 = 0LL;
  v67 = (char *)v32->tm_zone;
  v68 = 269;
  v69 = v32->tm_isdst;
  s2 = 0LL;
  for ( j = 1; j <= 3; ++j )
  {
    *(_QWORD *)&v42.tm_sec = 7776000 * j + v24;
    v35 = localtime((const time_t *)&v42.tm_sec);
    if ( v35 )
    {
      if ( v35->tm_zone )
      {
        v9 = (unsigned int)v35->tm_isdst;
        if ( (_DWORD)v9 != v69 )
        {
          s2 = (char *)v35->tm_zone;
          v71 = 269;
          v72 = v35->tm_isdst;
          v73 = 0LL;
          break;
        }
      }
    }
  }
  if ( v67 )
  {
    if ( s2 )
    {
      v8 = s2;
      if ( !strcmp(v67, s2) )
      {
        v69 = -1;
        s2 = 0LL;
      }
    }
  }
  if ( (unsigned int)sub_406060((__int64)&v43, (__int64)v8, v9, v10, v4, v5) )
    goto LABEL_79;
  if ( !v59 )
  {
    v14 = v64 | v62 | v61 | v65;
    if ( (v14 | (unsigned __int64)(v63 + v66)) <= 1 )
    {
      tp.tm_year = sub_408137((__int64)&v43, (__int64)v8, v63, v14, v11, v12, v49, v50, v51) - 1900;
      tp.tm_mon = v52 - 1;
      tp.tm_mday = v53;
      if ( !v65 && (!v60 || v61 || v62) )
      {
        tp.tm_sec = 0;
        tp.tm_min = 0;
        tp.tm_hour = 0;
        v57 = 0LL;
      }
      else
      {
        tp.tm_hour = sub_4080B0(v54, v48);
        if ( tp.tm_hour < 0 )
          goto LABEL_79;
        tp.tm_min = v55;
        tp.tm_sec = v56;
      }
      if ( v62 | v61 | v65 )
        tp.tm_isdst = -1;
      if ( v63 )
        tp.tm_isdst = v46;
      v42 = tp;
      v25 = mktime(&tp);
      if ( !sub_408ADD(&v42, &tp, v25) )
      {
        if ( !v66 )
          goto LABEL_79;
        v36 = v47;
        v37 = abs64(v47);
        if ( v20 != 1 )
          ptr = (char *)sub_408B8A(v74);
        v15 = v36 >= 0 ? "-" : "";
        sprintf(s, "XXX%s%ld:%02d", v15, v37 / 60, (unsigned int)(v37 % 60));
        if ( setenv("TZ", s, 1) )
          goto LABEL_79;
        v20 = 1;
        tp = v42;
        v25 = mktime(&tp);
        if ( !sub_408ADD(&v42, &tp, v25) )
          goto LABEL_79;
      }
      if ( v62 && !v61 )
      {
        v16 = v44 > 0 && tp.tm_wday != v45;
        tp.tm_mday += (v45 - tp.tm_wday + 7) % 7 + 7 * (v44 - v16);
        tp.tm_isdst = -1;
        v25 = mktime(&tp);
        if ( v25 == -1 )
          goto LABEL_79;
      }
      if ( v58[1] | v58[0] | v58[2] )
      {
        if ( (tp.tm_mon > tp.tm_mon + LODWORD(v58[1])) ^ (v58[1] < 0) | (v58[0] < 0) ^ (tp.tm_year > tp.tm_year + LODWORD(v58[0])) | (tp.tm_mday > tp.tm_mday + LODWORD(v58[2])) ^ (v58[2] < 0) )
          goto LABEL_79;
        tp.tm_year += LODWORD(v58[0]);
        tp.tm_mon += LODWORD(v58[1]);
        tp.tm_mday += LODWORD(v58[2]);
        tp.tm_hour = v42.tm_hour;
        *(_QWORD *)&tp.tm_sec = *(_QWORD *)&v42.tm_sec;
        tp.tm_isdst = v42.tm_isdst;
        v25 = mktime(&tp);
        if ( v25 == -1 )
          goto LABEL_79;
      }
      if ( v66 )
      {
        if ( v25 < v25 - (60 * v47 - tp.tm_gmtoff) != 60 * v47 - tp.tm_gmtoff < 0 )
          goto LABEL_79;
        v25 -= 60 * v47 - tp.tm_gmtoff;
      }
      v38 = ((v57 + v58[6]) % 1000000000 + 1000000000) % 1000000000;
      v39 = (v57 + v58[6] - v38) / 1000000000;
      if ( !((v25 + 3600 * v58[3] + 60 * v58[4] + v58[5] + v39 < v25 + 3600 * v58[3] + 60 * v58[4] + v58[5]) ^ (unsigned int)(v39 < 0) | (v25 + 3600 * v58[3] + 60 * v58[4] + v58[5] < v25 + 3600 * v58[3] + 60 * v58[4]) ^ (unsigned int)(v58[5] < 0) | (v25 + 3600 * v58[3] + 60 * v58[4] < v25 + 3600 * v58[3]) ^ (unsigned int)(60 * v58[4] < 0) | (v25 + 3600 * v58[3] < v25) ^ (unsigned int)(3600 * v58[3] < 0) | (60 * v58[4] / 60) ^ v58[4] | v58[3] ^ (3600 * v58[3] / 3600)) )
      {
        *a1 = v25 + 3600 * v58[3] + 60 * v58[4] + v58[5] + v39;
        a1[1] = v38;
        goto LABEL_80;
      }
    }
LABEL_79:
    v21 = 0;
    goto LABEL_80;
  }
  v13 = v57;
  *a1 = v56;
  a1[1] = v13;
LABEL_80:
  if ( v20 )
  {
    if ( ptr )
      v17 = setenv("TZ", ptr, 1) == 0;
    else
      v17 = unsetenv("TZ") == 0;
    v21 = v21 && v17;
  }
  if ( ptr != v74 )
    free(ptr);
  return v21;
}
