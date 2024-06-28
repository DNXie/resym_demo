#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40C3AE(unsigned int *a1, unsigned __int64 *a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  unsigned __int64 v27; // [rsp+10h] [rbp-10h]
  unsigned __int64 v28; // [rsp+18h] [rbp-8h]

  v27 = 0LL;
  v28 = a2[1];
  while ( *a2 > v27 )
  {
    v2 = *(_DWORD *)v28;
    if ( *(_DWORD *)v28 == 11 )
    {
      if ( a1[1] >= 0xB0 )
      {
        v13 = (_QWORD *)*((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 1) = v13 + 1;
      }
      else
      {
        v13 = (_QWORD *)(*((_QWORD *)a1 + 2) + a1[1]);
        a1[1] += 16;
      }
      *(_QWORD *)(v28 + 16) = *v13;
    }
    else if ( v2 > 0xB )
    {
      if ( v2 == 17 )
      {
        if ( *a1 >= 0x30 )
        {
          v20 = (_QWORD *)*((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v20 + 1;
        }
        else
        {
          v20 = (_QWORD *)(*((_QWORD *)a1 + 2) + *a1);
          *a1 += 8;
        }
        *(_QWORD *)(v28 + 16) = *v20;
      }
      else if ( v2 > 0x11 )
      {
        if ( v2 == 20 )
        {
          if ( *a1 >= 0x30 )
          {
            v23 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v23 + 1;
          }
          else
          {
            v23 = (_QWORD *)(*((_QWORD *)a1 + 2) + *a1);
            *a1 += 8;
          }
          *(_QWORD *)(v28 + 16) = *v23;
        }
        else if ( v2 > 0x14 )
        {
          if ( v2 == 21 )
          {
            if ( *a1 >= 0x30 )
            {
              v24 = (_QWORD *)*((_QWORD *)a1 + 1);
              *((_QWORD *)a1 + 1) = v24 + 1;
            }
            else
            {
              v24 = (_QWORD *)(*((_QWORD *)a1 + 2) + *a1);
              *a1 += 8;
            }
            *(_QWORD *)(v28 + 16) = *v24;
          }
          else
          {
            if ( v2 != 22 )
              return 0xFFFFFFFFLL;
            if ( *a1 >= 0x30 )
            {
              v25 = (_QWORD *)*((_QWORD *)a1 + 1);
              *((_QWORD *)a1 + 1) = v25 + 1;
            }
            else
            {
              v25 = (_QWORD *)(*((_QWORD *)a1 + 2) + *a1);
              *a1 += 8;
            }
            *(_QWORD *)(v28 + 16) = *v25;
          }
        }
        else if ( v2 == 18 )
        {
          if ( *a1 >= 0x30 )
          {
            v21 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v21 + 1;
          }
          else
          {
            v21 = (_QWORD *)(*((_QWORD *)a1 + 2) + *a1);
            *a1 += 8;
          }
          *(_QWORD *)(v28 + 16) = *v21;
        }
        else
        {
          if ( *a1 >= 0x30 )
          {
            v22 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v22 + 1;
          }
          else
          {
            v22 = (_QWORD *)(*((_QWORD *)a1 + 2) + *a1);
            *a1 += 8;
          }
          *(_QWORD *)(v28 + 16) = *v22;
        }
      }
      else if ( v2 == 14 )
      {
        if ( *a1 >= 0x30 )
        {
          v17 = (_DWORD *)*((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v17 + 2;
        }
        else
        {
          v17 = (_DWORD *)(*((_QWORD *)a1 + 2) + *a1);
          *a1 += 8;
        }
        *(_DWORD *)(v28 + 16) = *v17;
      }
      else if ( v2 > 0xE )
      {
        if ( v2 == 15 )
        {
          if ( *a1 >= 0x30 )
          {
            v18 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v18 + 1;
          }
          else
          {
            v18 = (_QWORD *)(*((_QWORD *)a1 + 2) + *a1);
            *a1 += 8;
          }
          *(_QWORD *)(v28 + 16) = *v18;
          if ( !*(_QWORD *)(v28 + 16) )
            *(_QWORD *)(v28 + 16) = "(NULL)";
        }
        else
        {
          if ( *a1 >= 0x30 )
          {
            v19 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v19 + 1;
          }
          else
          {
            v19 = (_QWORD *)(*((_QWORD *)a1 + 2) + *a1);
            *a1 += 8;
          }
          *(_QWORD *)(v28 + 16) = *v19;
          if ( !*(_QWORD *)(v28 + 16) )
            *(_QWORD *)(v28 + 16) = "(";
        }
      }
      else if ( v2 == 12 )
      {
        v14 = (*((_QWORD *)a1 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF0LL;
        *((_QWORD *)a1 + 1) = v14 + 16;
        v15 = *(_QWORD *)v14;
        LODWORD(v14) = *(_DWORD *)(v14 + 8);
        *(_QWORD *)(v28 + 16) = v15;
        *(_DWORD *)(v28 + 24) = v14;
      }
      else
      {
        if ( *a1 >= 0x30 )
        {
          v16 = (_DWORD *)*((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v16 + 2;
        }
        else
        {
          v16 = (_DWORD *)(*((_QWORD *)a1 + 2) + *a1);
          *a1 += 8;
        }
        *(_DWORD *)(v28 + 16) = *v16;
      }
    }
    else if ( v2 == 5 )
    {
      if ( *a1 >= 0x30 )
      {
        v7 = (_DWORD *)*((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 1) = v7 + 2;
      }
      else
      {
        v7 = (_DWORD *)(*((_QWORD *)a1 + 2) + *a1);
        *a1 += 8;
      }
      *(_DWORD *)(v28 + 16) = *v7;
    }
    else if ( v2 > 5 )
    {
      if ( v2 == 8 )
      {
        if ( *a1 >= 0x30 )
        {
          v10 = (_QWORD *)*((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v10 + 1;
        }
        else
        {
          v10 = (_QWORD *)(*((_QWORD *)a1 + 2) + *a1);
          *a1 += 8;
        }
        *(_QWORD *)(v28 + 16) = *v10;
      }
      else if ( v2 > 8 )
      {
        if ( v2 == 9 )
        {
          if ( *a1 >= 0x30 )
          {
            v11 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v11 + 1;
          }
          else
          {
            v11 = (_QWORD *)(*((_QWORD *)a1 + 2) + *a1);
            *a1 += 8;
          }
          *(_QWORD *)(v28 + 16) = *v11;
        }
        else
        {
          if ( v2 != 10 )
            return 0xFFFFFFFFLL;
          if ( *a1 >= 0x30 )
          {
            v12 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v12 + 1;
          }
          else
          {
            v12 = (_QWORD *)(*((_QWORD *)a1 + 2) + *a1);
            *a1 += 8;
          }
          *(_QWORD *)(v28 + 16) = *v12;
        }
      }
      else if ( v2 == 6 )
      {
        if ( *a1 >= 0x30 )
        {
          v8 = (_DWORD *)*((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v8 + 2;
        }
        else
        {
          v8 = (_DWORD *)(*((_QWORD *)a1 + 2) + *a1);
          *a1 += 8;
        }
        *(_DWORD *)(v28 + 16) = *v8;
      }
      else
      {
        if ( *a1 >= 0x30 )
        {
          v9 = (_QWORD *)*((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v9 + 1;
        }
        else
        {
          v9 = (_QWORD *)(*((_QWORD *)a1 + 2) + *a1);
          *a1 += 8;
        }
        *(_QWORD *)(v28 + 16) = *v9;
      }
    }
    else if ( v2 == 2 )
    {
      if ( *a1 >= 0x30 )
      {
        v4 = (_DWORD *)*((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 1) = v4 + 2;
      }
      else
      {
        v4 = (_DWORD *)(*((_QWORD *)a1 + 2) + *a1);
        *a1 += 8;
      }
      *(_BYTE *)(v28 + 16) = *v4;
    }
    else if ( v2 > 2 )
    {
      if ( v2 == 3 )
      {
        if ( *a1 >= 0x30 )
        {
          v5 = (_DWORD *)*((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v5 + 2;
        }
        else
        {
          v5 = (_DWORD *)(*((_QWORD *)a1 + 2) + *a1);
          *a1 += 8;
        }
        *(_WORD *)(v28 + 16) = *v5;
      }
      else
      {
        if ( *a1 >= 0x30 )
        {
          v6 = (_DWORD *)*((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v6 + 2;
        }
        else
        {
          v6 = (_DWORD *)(*((_QWORD *)a1 + 2) + *a1);
          *a1 += 8;
        }
        *(_WORD *)(v28 + 16) = *v6;
      }
    }
    else
    {
      if ( v2 != 1 )
        return 0xFFFFFFFFLL;
      if ( *a1 >= 0x30 )
      {
        v3 = (_DWORD *)*((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 1) = v3 + 2;
      }
      else
      {
        v3 = (_DWORD *)(*((_QWORD *)a1 + 2) + *a1);
        *a1 += 8;
      }
      *(_BYTE *)(v28 + 16) = *v3;
    }
    ++v27;
    v28 += 32LL;
  }
  return 0LL;
}
