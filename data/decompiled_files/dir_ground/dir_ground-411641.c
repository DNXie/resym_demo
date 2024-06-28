#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_411641(unsigned __int8 a1, char *a2, __int64 a3, char *a4, const struct tm *a5, int a6, int a7)
{
  __int64 result; // rax
  int v8; // eax
  int v9; // eax
  char *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  size_t v13; // rax
  _BOOL4 v14; // eax
  char v15; // al
  unsigned __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  char v23; // al
  unsigned __int64 v24; // rax
  int v25; // eax
  _BOOL4 v26; // eax
  _BOOL4 v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  bool v36; // [rsp+32h] [rbp-6CEh]
  char v37; // [rsp+33h] [rbp-6CDh]
  char v38; // [rsp+34h] [rbp-6CCh]
  unsigned __int8 v39; // [rsp+35h] [rbp-6CBh]
  char v40; // [rsp+36h] [rbp-6CAh]
  char v41; // [rsp+37h] [rbp-6C9h]
  int v42; // [rsp+38h] [rbp-6C8h]
  int v43; // [rsp+3Ch] [rbp-6C4h]
  int v44; // [rsp+40h] [rbp-6C0h]
  int v45; // [rsp+44h] [rbp-6BCh]
  int v46; // [rsp+48h] [rbp-6B8h]
  unsigned int v47; // [rsp+4Ch] [rbp-6B4h]
  int v48; // [rsp+50h] [rbp-6B0h]
  int v49; // [rsp+54h] [rbp-6ACh]
  int v50; // [rsp+58h] [rbp-6A8h]
  int j; // [rsp+5Ch] [rbp-6A4h]
  int v52; // [rsp+60h] [rbp-6A0h]
  int v53; // [rsp+64h] [rbp-69Ch]
  int v54; // [rsp+68h] [rbp-698h]
  int i; // [rsp+6Ch] [rbp-694h]
  int v56; // [rsp+70h] [rbp-690h]
  int v57; // [rsp+74h] [rbp-68Ch]
  int v58; // [rsp+78h] [rbp-688h]
  int v59; // [rsp+7Ch] [rbp-684h]
  int v60; // [rsp+80h] [rbp-680h]
  int v61; // [rsp+84h] [rbp-67Ch]
  int v62; // [rsp+88h] [rbp-678h]
  int v63; // [rsp+8Ch] [rbp-674h]
  int v64; // [rsp+90h] [rbp-670h]
  int v65; // [rsp+94h] [rbp-66Ch]
  char *v66; // [rsp+98h] [rbp-668h]
  __int64 v67; // [rsp+A0h] [rbp-660h]
  const char *v70; // [rsp+B8h] [rbp-648h]
  __int64 src; // [rsp+C0h] [rbp-640h]
  __int64 k; // [rsp+C8h] [rbp-638h]
  char *v73; // [rsp+D0h] [rbp-630h]
  time_t v74; // [rsp+D8h] [rbp-628h]
  unsigned __int64 v75; // [rsp+108h] [rbp-5F8h]
  unsigned __int64 v76; // [rsp+110h] [rbp-5F0h]
  __int64 v77; // [rsp+118h] [rbp-5E8h]
  unsigned __int64 v78; // [rsp+128h] [rbp-5D8h]
  unsigned __int64 v79; // [rsp+130h] [rbp-5D0h]
  __int64 v80; // [rsp+138h] [rbp-5C8h]
  unsigned __int64 v81; // [rsp+148h] [rbp-5B8h]
  unsigned __int64 v82; // [rsp+150h] [rbp-5B0h]
  unsigned __int64 v83; // [rsp+158h] [rbp-5A8h]
  size_t v84; // [rsp+160h] [rbp-5A0h]
  unsigned __int64 v85; // [rsp+170h] [rbp-590h]
  unsigned __int64 v86; // [rsp+178h] [rbp-588h]
  __int64 v87; // [rsp+180h] [rbp-580h]
  unsigned __int64 v88; // [rsp+188h] [rbp-578h]
  unsigned __int64 v89; // [rsp+190h] [rbp-570h]
  unsigned __int64 v90; // [rsp+198h] [rbp-568h]
  size_t v91; // [rsp+1A0h] [rbp-560h]
  unsigned __int64 v92; // [rsp+1B0h] [rbp-550h]
  unsigned __int64 v93; // [rsp+1B8h] [rbp-548h]
  __int64 v94; // [rsp+1C0h] [rbp-540h]
  unsigned __int64 v95; // [rsp+1D0h] [rbp-530h]
  unsigned __int64 v96; // [rsp+1D8h] [rbp-528h]
  __int64 v97; // [rsp+1E0h] [rbp-520h]
  unsigned __int64 v98; // [rsp+1F0h] [rbp-510h]
  unsigned __int64 v99; // [rsp+1F8h] [rbp-508h]
  __int64 v100; // [rsp+200h] [rbp-500h]
  unsigned __int64 v101; // [rsp+210h] [rbp-4F0h]
  unsigned __int64 v102; // [rsp+218h] [rbp-4E8h]
  __int64 v103; // [rsp+220h] [rbp-4E0h]
  unsigned __int64 v104; // [rsp+228h] [rbp-4D8h]
  unsigned __int64 v105; // [rsp+230h] [rbp-4D0h]
  unsigned __int64 v106; // [rsp+238h] [rbp-4C8h]
  size_t v107; // [rsp+240h] [rbp-4C0h]
  size_t v108; // [rsp+248h] [rbp-4B8h]
  unsigned __int64 v109; // [rsp+250h] [rbp-4B0h]
  unsigned __int64 v110; // [rsp+258h] [rbp-4A8h]
  size_t v111; // [rsp+260h] [rbp-4A0h]
  size_t v112; // [rsp+268h] [rbp-498h]
  unsigned __int64 v113; // [rsp+278h] [rbp-488h]
  unsigned __int64 v114; // [rsp+280h] [rbp-480h]
  __int64 v115; // [rsp+288h] [rbp-478h]
  struct tm v116; // [rsp+290h] [rbp-470h] BYREF
  char format[2]; // [rsp+2D0h] [rbp-430h] BYREF
  char v118; // [rsp+2D2h] [rbp-42Eh] BYREF
  _BYTE v119[5]; // [rsp+2D3h] [rbp-42Dh] BYREF
  char v120; // [rsp+2E0h] [rbp-420h] BYREF
  _BYTE v121[22]; // [rsp+2E1h] [rbp-41Fh] BYREF
  _BYTE v122[1033]; // [rsp+2F7h] [rbp-409h] BYREF
  __int64 savedregs; // [rsp+700h] [rbp+0h] BYREF

  *(_QWORD *)&v122[1009] = __readfsqword(0x28u);
  v42 = a5->tm_hour;
  v67 = 0LL;
  v66 = (char *)a5->tm_zone;
  if ( v42 <= 12 )
  {
    if ( !v42 )
      v42 = 12;
  }
  else
  {
    v42 -= 12;
  }
  while ( 2 )
  {
    if ( !*a4 )
    {
      if ( a2 )
      {
        if ( a3 )
          *a2 = 0;
      }
      return v67;
    }
    v43 = 0;
    v45 = 0;
    v49 = -1;
    v38 = 0;
    v39 = a1;
    v40 = 0;
    if ( *a4 != 37 )
    {
      if ( (unsigned __int64)(a3 - v67) <= 1 )
        return 0LL;
      if ( a2 )
        *a2++ = *a4;
      ++v67;
      goto LABEL_477;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = *++a4;
        if ( v8 == 48 )
          goto LABEL_19;
        if ( v8 > 48 )
          break;
        if ( v8 == 35 )
        {
          v40 = 1;
        }
        else
        {
          if ( v8 != 45 )
            goto LABEL_22;
LABEL_19:
          v43 = *a4;
        }
      }
      if ( v8 != 94 )
        break;
      v39 = 1;
    }
    if ( v8 == 95 )
      goto LABEL_19;
LABEL_22:
    if ( (unsigned int)(*a4 - 48) <= 9 )
    {
      v49 = 0;
      do
      {
        if ( v49 > 214748364 || v49 == 214748364 && *a4 - 48 > 7 )
          v49 = 0x7FFFFFFF;
        else
          v49 = *a4 - 48 + 10 * v49;
        ++a4;
      }
      while ( (unsigned int)(*a4 - 48) <= 9 );
    }
    v9 = *a4;
    if ( v9 == 69 || v9 == 79 )
    {
      v10 = a4++;
      v44 = *v10;
    }
    else
    {
      v44 = 0;
    }
    v50 = *a4;
    if ( v50 == 89 )
    {
      if ( v44 == 69 )
        goto LABEL_152;
      if ( v44 == 79 )
        goto LABEL_457;
      v45 = 4;
      v36 = a5->tm_year < -1900;
      v47 = a5->tm_year + 1900;
      goto LABEL_196;
    }
    if ( v50 > 89 )
    {
      if ( v50 == 108 )
      {
        if ( v44 == 69 )
          goto LABEL_457;
        v45 = 2;
        v46 = v42;
      }
      else
      {
        if ( v50 > 108 )
        {
          if ( v50 == 116 )
          {
            LODWORD(v24) = 0;
            if ( v49 >= 0 )
              LODWORD(v24) = v49;
            v85 = (int)v24;
            v24 = (int)v24;
            if ( (unsigned __int64)(int)v24 <= 1 )
              v24 = 1LL;
            v86 = v24;
            if ( a3 - v67 > v24 )
            {
              if ( a2 )
              {
                if ( v85 > 1 )
                {
                  v87 = v49 - 1LL;
                  if ( v43 == 48 )
                    memset(a2, 48, v87);
                  else
                    memset(a2, 32, v87);
                  a2 += v87;
                }
                *a2++ = 9;
              }
              v67 += v86;
              goto LABEL_477;
            }
            return 0LL;
          }
          if ( v50 > 116 )
          {
            if ( v50 == 120 )
            {
              if ( v44 == 79 )
                goto LABEL_457;
              goto LABEL_152;
            }
            if ( v50 > 120 )
            {
              if ( v50 != 121 )
              {
                if ( v50 != 122 )
                  goto LABEL_457;
                k = 0LL;
                goto LABEL_444;
              }
              if ( v44 == 69 )
                goto LABEL_152;
              v54 = a5->tm_year % 100;
              if ( v54 < 0 )
              {
                if ( a5->tm_year >= -1900 )
                  v30 = v54 + 100;
                else
                  v30 = -v54;
                v54 = v30;
              }
              v45 = 2;
              v46 = v54;
            }
            else if ( v50 == 117 )
            {
              v45 = 1;
              v46 = (a5->tm_wday + 6) % 7 + 1;
            }
            else
            {
              if ( v50 != 119 || v44 == 69 )
                goto LABEL_457;
              v45 = 1;
              v46 = a5->tm_wday;
            }
            goto LABEL_195;
          }
          if ( v50 != 112 )
          {
            if ( v50 > 112 )
            {
              if ( v50 == 114 )
                goto LABEL_152;
              if ( v50 != 115 )
                goto LABEL_457;
              v116 = *a5;
              v74 = mktime(&v116);
              src = (__int64)v122;
              v36 = v74 < 0;
              do
              {
                v57 = (int)v74 % 10;
                v74 /= 10LL;
                --src;
                if ( v36 )
                  v23 = 48 - v57;
                else
                  v23 = v57 + 48;
                *(_BYTE *)src = v23;
              }
              while ( v74 );
              v45 = 1;
              v37 = 0;
              goto LABEL_205;
            }
            if ( v50 != 109 )
            {
              if ( v50 != 110 )
                goto LABEL_457;
              LODWORD(v22) = 0;
              if ( v49 >= 0 )
                LODWORD(v22) = v49;
              v78 = (int)v22;
              v22 = (int)v22;
              if ( (unsigned __int64)(int)v22 <= 1 )
                v22 = 1LL;
              v79 = v22;
              if ( a3 - v67 > v22 )
              {
                if ( a2 )
                {
                  if ( v78 > 1 )
                  {
                    v80 = v49 - 1LL;
                    if ( v43 == 48 )
                      memset(a2, 48, v80);
                    else
                      memset(a2, 32, v80);
                    a2 += v80;
                  }
                  *a2++ = 10;
                }
                v67 += v79;
                goto LABEL_477;
              }
              return 0LL;
            }
            if ( v44 == 69 )
              goto LABEL_457;
            v45 = 2;
            v36 = a5->tm_mon < -1;
            v47 = a5->tm_mon + 1;
            goto LABEL_196;
          }
          goto LABEL_341;
        }
        if ( v50 == 100 )
        {
          if ( v44 == 69 )
            goto LABEL_457;
          v45 = 2;
          v46 = a5->tm_mday;
          goto LABEL_195;
        }
        if ( v50 <= 100 )
        {
          if ( v50 == 97 )
          {
            if ( v44 )
              goto LABEL_457;
            if ( v40 )
            {
              v39 = 1;
              v38 = 0;
            }
            goto LABEL_152;
          }
          if ( v50 <= 97 )
          {
            if ( v50 != 90 )
              goto LABEL_457;
            if ( v40 )
            {
              v39 = 0;
              v38 = 1;
            }
            if ( !v66 )
              v66 = (char *)&unk_419227;
            v88 = strlen(v66);
            LODWORD(v31) = 0;
            if ( v49 >= 0 )
              LODWORD(v31) = v49;
            v89 = (int)v31;
            v31 = (int)v31;
            if ( v88 >= (int)v31 )
              v31 = v88;
            v90 = v31;
            if ( a3 - v67 > v31 )
            {
              if ( a2 )
              {
                if ( v88 < v89 )
                {
                  v91 = v49 - v88;
                  if ( v43 == 48 )
                    memset(a2, 48, v91);
                  else
                    memset(a2, 32, v91);
                  a2 += v91;
                }
                if ( v38 )
                {
                  sub_41153E((__int64)a2, (__int64)v66, v88);
                }
                else if ( v39 )
                {
                  sub_411597((__int64)a2, (__int64)v66, v88);
                }
                else
                {
                  memcpy(a2, v66, v88);
                }
                a2 += v88;
              }
              v67 += v90;
              goto LABEL_477;
            }
            return 0LL;
          }
          if ( v50 != 98 )
          {
            if ( v44 == 79 )
              goto LABEL_457;
            goto LABEL_152;
          }
LABEL_128:
          if ( v40 )
          {
            v39 = 1;
            v38 = 0;
          }
          if ( !v44 )
            goto LABEL_152;
LABEL_457:
          for ( i = 1; a4[1 - i] != 37; ++i )
            ;
          LODWORD(v32) = 0;
          if ( v49 >= 0 )
            LODWORD(v32) = v49;
          v113 = (int)v32;
          v32 = (int)v32;
          if ( i >= (unsigned __int64)(int)v32 )
            v32 = i;
          v114 = v32;
          if ( a3 - v67 > v32 )
          {
            if ( a2 )
            {
              if ( i < v113 )
              {
                v115 = v49 - (__int64)i;
                if ( v43 == 48 )
                  memset(a2, 48, v115);
                else
                  memset(a2, 32, v115);
                a2 += v115;
              }
              if ( v39 )
                sub_411597((__int64)a2, (__int64)&a4[1 - i], i);
              else
                memcpy(a2, &a4[1 - i], i);
              a2 += i;
            }
            v67 += v114;
            goto LABEL_477;
          }
          return 0LL;
        }
        if ( v50 == 104 )
          goto LABEL_128;
        if ( v50 > 104 )
        {
          if ( v50 == 106 )
          {
            if ( v44 == 69 )
              goto LABEL_457;
            v45 = 3;
            v36 = a5->tm_yday < -1;
            v47 = a5->tm_yday + 1;
            goto LABEL_196;
          }
          if ( v50 != 107 || v44 == 69 )
            goto LABEL_457;
          v45 = 2;
          v46 = a5->tm_hour;
        }
        else
        {
          if ( v50 != 101 )
          {
            if ( v50 != 103 )
              goto LABEL_457;
            goto LABEL_373;
          }
          if ( v44 == 69 )
            goto LABEL_457;
          v45 = 2;
          v46 = a5->tm_mday;
        }
      }
      if ( v43 != 48 && v43 != 45 )
        v43 = 95;
      goto LABEL_195;
    }
    if ( v50 == 73 )
    {
      if ( v44 == 69 )
        goto LABEL_457;
      v45 = 2;
      v46 = v42;
      goto LABEL_195;
    }
    if ( v50 > 73 )
    {
      if ( v50 == 83 )
      {
        if ( v44 == 69 )
          goto LABEL_457;
        v45 = 2;
        v46 = a5->tm_sec;
      }
      else if ( v50 > 83 )
      {
        if ( v50 == 86 )
          goto LABEL_373;
        if ( v50 > 86 )
        {
          if ( v50 != 87 )
          {
            if ( v44 == 79 )
              goto LABEL_457;
            goto LABEL_152;
          }
          if ( v44 == 69 )
            goto LABEL_457;
          v45 = 2;
          v46 = (a5->tm_yday - (a5->tm_wday + 6) % 7 + 7) / 7;
          goto LABEL_195;
        }
        if ( v50 == 84 )
        {
          v70 = "%H:%M:%S";
          v12 = sub_411641(v39, 0, -1, (unsigned int)"%H:%M:%S", (_DWORD)a5, a6, a7);
          goto LABEL_138;
        }
        if ( v44 == 69 )
          goto LABEL_457;
        v45 = 2;
        v46 = (a5->tm_yday - a5->tm_wday + 7) / 7;
      }
      else
      {
        if ( v50 != 78 )
        {
          if ( v50 <= 78 )
          {
            if ( v50 != 77 || v44 == 69 )
              goto LABEL_457;
            v45 = 2;
            v46 = a5->tm_min;
            goto LABEL_195;
          }
          if ( v50 != 80 )
          {
            if ( v50 != 82 )
              goto LABEL_457;
            v70 = "%H:%M";
            v12 = sub_411641(v39, 0, -1, (unsigned int)"%H:%M", (_DWORD)a5, a6, a7);
            goto LABEL_138;
          }
          v38 = 1;
          LOBYTE(v50) = 112;
LABEL_341:
          if ( v40 )
          {
            v39 = 0;
            v38 = 1;
          }
          goto LABEL_152;
        }
        if ( v44 == 69 )
          goto LABEL_457;
        v46 = a7;
        if ( v49 == -1 )
        {
          v49 = 9;
        }
        else
        {
          for ( j = v49; j <= 8; ++j )
            v46 /= 10;
        }
        v45 = v49;
      }
LABEL_195:
      v36 = v46 < 0;
      v47 = v46;
      goto LABEL_196;
    }
    if ( v50 == 66 )
    {
      if ( v44 )
        goto LABEL_457;
      if ( v40 )
      {
        v39 = 1;
        v38 = 0;
      }
      goto LABEL_152;
    }
    if ( v50 > 66 )
    {
      if ( v50 != 70 )
      {
        if ( v50 <= 70 )
        {
          if ( v50 != 67 )
          {
            if ( v50 != 68 || v44 )
              goto LABEL_457;
            v70 = "%m/%d/%y";
            v12 = sub_411641(v39, 0, -1, (unsigned int)"%m/%d/%y", (_DWORD)a5, a6, a7);
            goto LABEL_138;
          }
          if ( v44 == 79 )
            goto LABEL_457;
          if ( v44 == 69 )
            goto LABEL_152;
          v56 = a5->tm_year / 100 + 19;
          v14 = a5->tm_year % 100 < 0 && v56 > 0;
          v45 = 2;
          v36 = a5->tm_year < -1900;
          v47 = v56 - v14;
LABEL_196:
          v37 = 0;
          v48 = 0;
          goto LABEL_197;
        }
        if ( v50 != 71 )
        {
          if ( v44 == 69 )
            goto LABEL_457;
          v45 = 2;
          v46 = a5->tm_hour;
          goto LABEL_195;
        }
LABEL_373:
        if ( v44 == 69 )
          goto LABEL_457;
        if ( a5->tm_year >= 0 )
          v25 = -100;
        else
          v25 = 300;
        v58 = a5->tm_year + v25;
        v52 = 0;
        v53 = sub_4115F0(a5->tm_yday, a5->tm_wday);
        if ( v53 >= 0 )
        {
          v27 = (v58 & 3) == 0 && (v58 % 100 || !(v58 % 400));
          v59 = sub_4115F0(a5->tm_yday + -365 - v27, a5->tm_wday);
          if ( v59 >= 0 )
          {
            v52 = 1;
            v53 = v59;
          }
        }
        else
        {
          v52 = -1;
          v26 = (((_BYTE)v58 - 1) & 3) == 0 && ((v58 - 1) % 100 || !((v58 - 1) % 400));
          v53 = sub_4115F0(a5->tm_yday + v26 + 365, a5->tm_wday);
        }
        v28 = *a4;
        if ( v28 == 71 )
        {
          v45 = 4;
          v36 = a5->tm_year < -1900 - v52;
          v47 = a5->tm_year + v52 + 1900;
          goto LABEL_196;
        }
        if ( v28 == 103 )
        {
          v60 = (a5->tm_year % 100 + v52) % 100;
          v45 = 2;
          if ( v60 >= 0 )
          {
            v29 = (a5->tm_year % 100 + v52) % 100;
          }
          else if ( a5->tm_year >= -1900 - v52 )
          {
            v29 = v60 + 100;
          }
          else
          {
            v29 = -v60;
          }
          v46 = v29;
        }
        else
        {
          v45 = 2;
          v46 = v53 / 7 + 1;
        }
        goto LABEL_195;
      }
      if ( v44 )
        goto LABEL_457;
      v70 = "%Y-%m-%d";
      v12 = sub_411641(v39, 0, -1, (unsigned int)"%Y-%m-%d", (_DWORD)a5, a6, a7);
LABEL_138:
      v81 = v12;
      LODWORD(v12) = 0;
      if ( v49 >= 0 )
        LODWORD(v12) = v49;
      v82 = (int)v12;
      v12 = (int)v12;
      if ( v81 >= (int)v12 )
        v12 = v81;
      v83 = v12;
      if ( a3 - v67 <= v12 )
        return 0LL;
      if ( a2 )
      {
        if ( v81 < v82 )
        {
          v84 = v49 - v81;
          if ( v43 == 48 )
            memset(a2, 48, v84);
          else
            memset(a2, 32, v84);
          a2 += v84;
        }
        sub_411641(v39, (_DWORD)a2, a3 - v67, (_DWORD)v70, (_DWORD)a5, a6, a7);
        a2 += v81;
      }
      v67 += v83;
      goto LABEL_477;
    }
    if ( v50 == 37 )
    {
      if ( v44 )
        goto LABEL_457;
      LODWORD(v11) = 0;
      if ( v49 >= 0 )
        LODWORD(v11) = v49;
      v75 = (int)v11;
      v11 = (int)v11;
      if ( (unsigned __int64)(int)v11 <= 1 )
        v11 = 1LL;
      v76 = v11;
      if ( a3 - v67 <= v11 )
        return 0LL;
      if ( a2 )
      {
        if ( v75 > 1 )
        {
          v77 = v49 - 1LL;
          if ( v43 == 48 )
            memset(a2, 48, v77);
          else
            memset(a2, 32, v77);
          a2 += v77;
        }
        *a2++ = *a4;
      }
      v67 += v76;
      goto LABEL_477;
    }
    if ( v50 <= 37 )
    {
      if ( !*a4 )
        --a4;
      goto LABEL_457;
    }
    if ( v50 != 58 )
    {
      if ( v50 != 65 || v44 )
        goto LABEL_457;
      if ( v40 )
      {
        v39 = 1;
        v38 = 0;
      }
LABEL_152:
      format[0] = 32;
      v73 = &v118;
      format[1] = 37;
      if ( v44 )
      {
        v73 = v119;
        v118 = v44;
      }
      *v73 = v50;
      v73[1] = 0;
      v108 = strftime(&v120, 0x400uLL, format, a5);
      if ( v108 )
      {
        v109 = v108 - 1;
        LODWORD(v13) = 0;
        if ( v49 >= 0 )
          LODWORD(v13) = v49;
        v110 = (int)v13;
        v13 = (int)v13;
        if ( v109 >= (int)v13 )
          v13 = v108 - 1;
        v111 = v13;
        if ( a3 - v67 <= v13 )
          return 0LL;
        if ( a2 )
        {
          if ( !v45 && v109 < v110 )
          {
            v112 = v49 - v109;
            if ( v43 == 48 )
              memset(a2, 48, v112);
            else
              memset(a2, 32, v112);
            a2 += v112;
          }
          if ( v38 )
          {
            sub_41153E((__int64)a2, (__int64)v121, v109);
          }
          else if ( v39 )
          {
            sub_411597((__int64)a2, (__int64)v121, v109);
          }
          else
          {
            memcpy(a2, v121, v109);
          }
          a2 += v109;
        }
        v67 += v111;
      }
LABEL_477:
      ++a4;
      continue;
    }
    break;
  }
  for ( k = 1LL; a4[k] == 58; ++k )
    ;
  if ( a4[k] != 122 )
    goto LABEL_457;
  a4 += k;
LABEL_444:
  if ( a5->tm_isdst < 0 )
    goto LABEL_477;
  v61 = a5->tm_gmtoff;
  v62 = v61 / 3600;
  v63 = v61 / 60 % 60;
  v64 = v61 % 60;
  switch ( k )
  {
    case 1LL:
      goto LABEL_451;
    case 0LL:
      v45 = 5;
      v36 = v61 < 0;
      v48 = 0;
      v47 = 100 * v62 + v63;
      goto LABEL_191;
    case 2LL:
      goto LABEL_452;
  }
  if ( k != 3 )
    goto LABEL_457;
  if ( v64 )
  {
LABEL_452:
    v45 = 9;
    v36 = v61 < 0;
    v48 = 20;
    v47 = 100 * v63 + 10000 * v62 + v64;
    goto LABEL_191;
  }
  if ( v63 )
  {
LABEL_451:
    v45 = 6;
    v36 = v61 < 0;
    v48 = 4;
    v47 = 100 * v62 + v63;
    goto LABEL_191;
  }
  v45 = 3;
  v36 = v61 < 0;
  v48 = 0;
  v47 = v61 / 3600;
LABEL_191:
  v37 = 1;
LABEL_197:
  if ( v44 == 79 && !v36 )
    goto LABEL_152;
  src = (__int64)v122;
  if ( v36 )
    v47 = -v47;
  do
  {
    if ( (v48 & 1) != 0 )
      *(_BYTE *)--src = 58;
    v48 >>= 1;
    *(_BYTE *)--src = v47 % 0xA + 48;
    v47 /= 0xAu;
  }
  while ( v47 || v48 );
LABEL_205:
  if ( v45 < v49 )
    v45 = v49;
  if ( v36 )
  {
    v15 = 45;
  }
  else if ( v37 )
  {
    v15 = 43;
  }
  else
  {
    v15 = 0;
  }
  v41 = v15;
  if ( v43 == 45 )
  {
    if ( v15 )
    {
      LODWORD(v16) = 0;
      if ( v49 >= 0 )
        LODWORD(v16) = v49;
      v92 = (int)v16;
      v16 = (int)v16;
      if ( (unsigned __int64)(int)v16 <= 1 )
        v16 = 1LL;
      v93 = v16;
      if ( a3 - v67 <= v16 )
        return 0LL;
      if ( a2 )
      {
        if ( !v45 && v92 > 1 )
        {
          v94 = v49 - 1LL;
          memset(a2, 32, v94);
          a2 += v94;
        }
        *a2++ = v41;
      }
      v67 += v93;
    }
LABEL_285:
    v104 = (unsigned __int64)&v122[-src];
    LODWORD(v21) = 0;
    if ( v49 >= 0 )
      LODWORD(v21) = v49;
    v105 = (int)v21;
    v21 = (int)v21;
    if ( v104 >= (int)v21 )
      v21 = (unsigned __int64)&v122[-src];
    v106 = v21;
    if ( a3 - v67 > v21 )
    {
      if ( a2 )
      {
        if ( !v45 && v104 < v105 )
        {
          v107 = v49 - v104;
          if ( v43 == 48 )
            memset(a2, 48, v107);
          else
            memset(a2, 32, v107);
          a2 += v107;
        }
        if ( v39 )
          sub_411597((__int64)a2, src, v104);
        else
          memcpy(a2, (const void *)src, v104);
        a2 += v104;
      }
      v67 += v106;
      goto LABEL_477;
    }
    result = 0LL;
  }
  else
  {
    v65 = v45 + src - ((unsigned int)&savedregs - 1056 + 23) - (v15 != 0);
    if ( v65 <= 0 )
    {
      if ( !v15 )
        goto LABEL_285;
      LODWORD(v20) = 0;
      if ( v49 >= 0 )
        LODWORD(v20) = v49;
      v101 = (int)v20;
      v20 = (int)v20;
      if ( (unsigned __int64)(int)v20 <= 1 )
        v20 = 1LL;
      v102 = v20;
      if ( a3 - v67 > v20 )
      {
        if ( a2 )
        {
          if ( !v45 && v101 > 1 )
          {
            v103 = v49 - 1LL;
            if ( v43 == 48 )
              memset(a2, 48, v103);
            else
              memset(a2, 32, v103);
            a2 += v103;
          }
          *a2++ = v41;
        }
        v67 += v102;
        goto LABEL_285;
      }
      result = 0LL;
    }
    else
    {
      if ( v43 != 95 )
      {
        if ( v45 >= (unsigned __int64)(a3 - v67) )
          return 0LL;
        if ( v15 )
        {
          LODWORD(v19) = 0;
          if ( v49 >= 0 )
            LODWORD(v19) = v49;
          v98 = (int)v19;
          v19 = (int)v19;
          if ( (unsigned __int64)(int)v19 <= 1 )
            v19 = 1LL;
          v99 = v19;
          if ( a3 - v67 <= v19 )
            return 0LL;
          if ( a2 )
          {
            if ( !v45 && v98 > 1 )
            {
              v100 = v49 - 1LL;
              if ( v43 == 48 )
                memset(a2, 48, v100);
              else
                memset(a2, 32, v100);
              a2 += v100;
            }
            *a2++ = v41;
          }
          v67 += v99;
        }
        if ( a2 )
        {
          memset(a2, 48, v65);
          a2 += v65;
        }
        v67 += v65;
        v49 = 0;
        goto LABEL_285;
      }
      if ( v65 < (unsigned __int64)(a3 - v67) )
      {
        if ( a2 )
        {
          memset(a2, 32, v65);
          a2 += v65;
        }
        v67 += v65;
        if ( v49 <= v65 )
          v17 = 0;
        else
          v17 = v49 - v65;
        v49 = v17;
        if ( !v41 )
          goto LABEL_285;
        LODWORD(v18) = 0;
        if ( v49 >= 0 )
          LODWORD(v18) = v49;
        v95 = (int)v18;
        v18 = (int)v18;
        if ( (unsigned __int64)(int)v18 <= 1 )
          v18 = 1LL;
        v96 = v18;
        if ( a3 - v67 > v18 )
        {
          if ( a2 )
          {
            if ( !v45 && v95 > 1 )
            {
              v97 = v49 - 1LL;
              memset(a2, 32, v97);
              a2 += v97;
            }
            *a2++ = v41;
          }
          v67 += v96;
          goto LABEL_285;
        }
        result = 0LL;
      }
      else
      {
        result = 0LL;
      }
    }
  }
  return result;
}
