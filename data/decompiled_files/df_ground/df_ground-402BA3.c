#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_402BA3(const char *a1, const char *a2, const char *a3, const char *a4, char a5, char a6, __int64 *a7)
{
  const char *v7; // rax
  const char *v8; // rbx
  int *v9; // rax
  bool v10; // al
  char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // er8
  int v17; // er9
  __int64 v18; // rax
  double v19; // xmm0_8
  unsigned __int64 v20; // rax
  double v21; // xmm0_8
  double v22; // xmm0_8
  unsigned __int64 v23; // rax
  double v24; // xmm0_8
  double v25; // xmm0_8
  double v26; // rax
  double v27; // xmm0_8
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  char v31; // [rsp+0h] [rbp-3C0h]
  const char *v32; // [rsp+20h] [rbp-3A0h]
  const char *v34; // [rsp+38h] [rbp-388h]
  unsigned __int8 v35; // [rsp+4Eh] [rbp-372h]
  bool v36; // [rsp+4Fh] [rbp-371h]
  char *v37; // [rsp+50h] [rbp-370h] BYREF
  __int64 v38; // [rsp+58h] [rbp-368h]
  __int64 v39; // [rsp+60h] [rbp-360h]
  unsigned __int64 v40; // [rsp+68h] [rbp-358h]
  signed __int64 v41; // [rsp+70h] [rbp-350h]
  unsigned __int64 v42; // [rsp+78h] [rbp-348h]
  signed __int64 v43; // [rsp+80h] [rbp-340h]
  double v44; // [rsp+88h] [rbp-338h]
  unsigned __int64 i; // [rsp+90h] [rbp-330h]
  unsigned __int64 v46; // [rsp+98h] [rbp-328h]
  __int64 v47; // [rsp+A0h] [rbp-320h]
  double v48; // [rsp+A8h] [rbp-318h]
  double v49; // [rsp+B0h] [rbp-310h]
  double v50; // [rsp+B8h] [rbp-308h]
  __int64 v51; // [rsp+C0h] [rbp-300h]
  double v52; // [rsp+C8h] [rbp-2F8h]
  __int64 v53; // [rsp+D0h] [rbp-2F0h] BYREF
  unsigned __int64 v54; // [rsp+D8h] [rbp-2E8h]
  unsigned __int64 v55; // [rsp+E0h] [rbp-2E0h]
  __int64 v56; // [rsp+E8h] [rbp-2D8h]
  __int64 v57; // [rsp+F0h] [rbp-2D0h]
  unsigned __int64 v58; // [rsp+F8h] [rbp-2C8h]
  unsigned __int64 v59; // [rsp+100h] [rbp-2C0h]
  char v60[664]; // [rsp+110h] [rbp-2B0h] BYREF
  unsigned __int64 v61; // [rsp+3A8h] [rbp-18h]

  v34 = a1;
  v32 = a4;
  v61 = __readfsqword(0x28u);
  v44 = -1.0;
  if ( (!a6 || !byte_618522)
    && (!a5 || byte_618521 == 1 || byte_618523 == 1)
    && (unsigned __int8)sub_402952(a4) == 1
    && !(unsigned __int8)sub_4029C0(v32) )
  {
    if ( !a3 )
    {
      if ( a2 )
        v7 = a2;
      else
        v7 = a1;
      a3 = v7;
    }
    if ( a7 )
    {
      v53 = *a7;
      v54 = a7[1];
      v55 = a7[2];
      v56 = a7[3];
      v57 = a7[4];
      v58 = a7[5];
      v59 = a7[6];
    }
    else if ( (unsigned int)sub_40A625(a3, a1, &v53) )
    {
      v8 = (const char *)sub_407086(a3);
      v9 = __errno_location();
      error(0, *v9, "%s", v8);
      status = 1;
      return __readfsqword(0x28u) ^ v61;
    }
    if ( v54 || byte_618521 == 1 || byte_618523 == 1 )
    {
      if ( byte_618531 != 1 )
      {
        byte_618531 = 1;
        sub_40256A();
      }
      sub_4023BF();
      if ( !a1 )
        v34 = "-";
      if ( !v32 )
        v32 = "-";
      if ( byte_618520 )
      {
        v39 = 1LL;
        v38 = 1LL;
        v40 = v58;
        v41 = v59;
        v35 = 0;
        v42 = v59;
        if ( sub_402A2E(v58) )
          qword_618588 += v40;
        if ( sub_402A2E(v41) )
          qword_618590 += v41;
      }
      else
      {
        v38 = v53;
        v39 = qword_618528;
        v40 = v54;
        v41 = v56;
        v10 = (_BYTE)v57 && sub_402A2E(v41);
        v35 = v10;
        v42 = v55;
        if ( sub_402A2E(v40) )
          qword_618568 += v40 * v38;
        if ( sub_402A2E(v42) )
          qword_618570 += v42 * v38;
        if ( sub_402A2E(v41) )
          sub_402AD6(&qword_618578, byte_618580, v41 * v38, v35);
      }
      v43 = -1LL;
      v36 = 0;
      if ( sub_402A2E(v40) && sub_402A2E(v42) )
      {
        v43 = v40 - v42;
        v36 = v40 < v42;
      }
      for ( i = 0LL; i <= 6; ++i )
      {
        if ( i == 3 )
        {
          v13 = sub_402A40(v36, v43, (__int64)v60, v38, v39);
          v37 = (char *)sub_4099C1(v13);
        }
        else if ( i > 3 )
        {
          if ( i == 5 )
          {
            if ( sub_402A2E(v43) && sub_402A2E(v41) )
            {
              if ( !v36
                && (unsigned __int64)v43 <= 0x28F5C28F5C28F5CLL
                && v43 + v41
                && v43 + v41 < (unsigned __int64)v43 == v35 )
              {
                v46 = 100 * v43;
                v47 = v43 + v41;
                v15 = 100 * v43 / (unsigned __int64)(v43 + v41);
                v18 = v15 + (100 * v43 % (unsigned __int64)(v43 + v41) != 0);
                if ( v18 < 0 )
                  v19 = (double)(int)(v18 & 1 | ((unsigned __int64)v18 >> 1))
                      + (double)(int)(v18 & 1 | ((unsigned __int64)v18 >> 1));
                else
                  v19 = (double)(int)v18;
                v44 = v19;
              }
              else
              {
                if ( v36 )
                {
                  v20 = -v43;
                  if ( v43 > 0 )
                    v21 = (double)(int)(v20 & 1 | (v20 >> 1)) + (double)(int)(v20 & 1 | (v20 >> 1));
                  else
                    v21 = (double)(int)v20;
                  v22 = -v21;
                }
                else if ( v43 < 0 )
                {
                  v22 = (double)(int)(v43 & 1 | ((unsigned __int64)v43 >> 1))
                      + (double)(int)(v43 & 1 | ((unsigned __int64)v43 >> 1));
                }
                else
                {
                  v22 = (double)(int)v43;
                }
                v48 = v22;
                if ( v35 )
                {
                  v23 = -v41;
                  if ( v41 > 0 )
                    v24 = (double)(int)(v23 & 1 | (v23 >> 1)) + (double)(int)(v23 & 1 | (v23 >> 1));
                  else
                    v24 = (double)(int)v23;
                  v25 = -v24;
                }
                else if ( v41 < 0 )
                {
                  v25 = (double)(int)(v41 & 1 | ((unsigned __int64)v41 >> 1))
                      + (double)(int)(v41 & 1 | ((unsigned __int64)v41 >> 1));
                }
                else
                {
                  v25 = (double)(int)v41;
                }
                v49 = v25;
                v50 = v48 + v25;
                if ( v48 + v25 != 0.0 )
                {
                  v44 = 100.0 * v48 / v50;
                  v51 = (unsigned int)(int)v44;
                  v52 = (double)(int)v44;
                  if ( v44 > v52 - 1.0 && v52 + 1.0 >= v44 )
                  {
                    if ( v44 <= v52 )
                      v26 = 0.0;
                    else
                      v26 = 1.0;
                    v44 = v26 + v52;
                  }
                }
              }
            }
            v27 = v44;
            if ( v44 < 0.0 )
            {
              v37 = strdup("-");
            }
            else
            {
              v27 = v44;
              if ( (unsigned int)sub_40A174(
                                   (unsigned int)&v37,
                                   (unsigned int)"%.0f%%",
                                   (unsigned int)&v37,
                                   v15,
                                   v16,
                                   v17,
                                   v31) == -1 )
                v37 = 0LL;
            }
            if ( !v37 )
              sub_4099EE(v27);
          }
          else if ( i < 5 )
          {
            v14 = sub_402A40(v35, v41, (__int64)v60, v38, v39);
            v37 = (char *)sub_4099C1(v14);
          }
          else if ( a2 )
          {
            v37 = (char *)sub_4099C1(a2);
          }
          else
          {
            v37 = 0LL;
          }
        }
        else if ( i == 1 )
        {
          if ( byte_618550 )
            v11 = (char *)sub_4099C1(v32);
          else
            v11 = 0LL;
          v37 = v11;
        }
        else if ( i > 1 )
        {
          v12 = sub_402A40(0, v40, (__int64)v60, v38, v39);
          v37 = (char *)sub_4099C1(v12);
        }
        else
        {
          v37 = (char *)sub_4099C1(v34);
        }
        if ( v37 )
        {
          v28 = qword_618440[i];
          if ( v28 <= (int)sub_40626C(v37, 0LL) )
            v29 = (int)sub_40626C(v37, 0LL);
          else
            v29 = qword_618440[i];
          qword_618440[i] = v29;
        }
        *(_QWORD *)(*(_QWORD *)(8 * qword_6185A8 - 8 + qword_6185A0) + 8 * i) = v37;
      }
    }
  }
  return __readfsqword(0x28u) ^ v61;
}
