#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_416584(unsigned __int8 *a1, unsigned __int8 *a2, int a3, int a4)
{
  __int64 result; // rax
  unsigned __int8 *v5; // [rsp+8h] [rbp-30h]
  unsigned __int8 *v6; // [rsp+10h] [rbp-28h]
  unsigned __int8 v7; // [rsp+22h] [rbp-16h]
  unsigned __int8 v8; // [rsp+22h] [rbp-16h]
  unsigned __int8 v9; // [rsp+23h] [rbp-15h]
  unsigned __int8 v10; // [rsp+23h] [rbp-15h]
  unsigned __int8 v11; // [rsp+23h] [rbp-15h]
  unsigned int v12; // [rsp+24h] [rbp-14h]
  unsigned int v13; // [rsp+24h] [rbp-14h]
  unsigned __int64 v14; // [rsp+28h] [rbp-10h]
  unsigned __int64 v15; // [rsp+28h] [rbp-10h]
  unsigned __int64 v16; // [rsp+30h] [rbp-8h]
  unsigned __int64 v17; // [rsp+30h] [rbp-8h]

  v6 = a1;
  v5 = a2;
  v7 = *a1;
  v9 = *a2;
  if ( *a1 == 45 )
  {
    do
    {
      do
        v8 = *++v6;
      while ( *v6 == 48 );
    }
    while ( v8 == a4 );
    if ( v9 == 45 )
    {
      do
      {
        do
          v10 = *++v5;
        while ( *v5 == 48 );
      }
      while ( v10 == a4 );
      while ( v8 == v10 && (unsigned int)v8 - 48 <= 9 )
      {
        do
          v8 = *++v6;
        while ( *v6 == a4 );
        do
          v10 = *++v5;
        while ( *v5 == a4 );
      }
      if ( v8 == a3 && (unsigned int)v10 - 48 > 9 || v10 == a3 && (unsigned int)v8 - 48 > 9 )
      {
        result = sub_416421(v5, v6, a3);
      }
      else
      {
        v12 = v10 - v8;
        v14 = 0LL;
        while ( (unsigned int)v8 - 48 <= 9 )
        {
          do
            v8 = *++v6;
          while ( *v6 == a4 );
          ++v14;
        }
        v16 = 0LL;
        while ( (unsigned int)v10 - 48 <= 9 )
        {
          do
            v10 = *++v5;
          while ( *v5 == a4 );
          ++v16;
        }
        if ( v14 == v16 )
        {
          if ( v14 )
            result = v12;
          else
            result = 0LL;
        }
        else if ( v14 >= v16 )
        {
          result = 0xFFFFFFFFLL;
        }
        else
        {
          result = 1LL;
        }
      }
    }
    else
    {
      if ( v8 == a3 )
      {
        do
          v8 = *++v6;
        while ( *v6 == 48 );
      }
      if ( (unsigned int)v8 - 48 > 9 )
      {
        while ( v9 == 48 || v9 == a4 )
          v9 = *++v5;
        if ( v9 == a3 )
        {
          do
            v9 = *++v5;
          while ( *v5 == 48 );
        }
        result = (unsigned int)-((unsigned int)v9 - 48 <= 9);
      }
      else
      {
        result = 0xFFFFFFFFLL;
      }
    }
  }
  else if ( v9 == 45 )
  {
    do
    {
      do
        v11 = *++v5;
      while ( *v5 == 48 );
    }
    while ( v11 == a4 );
    if ( v11 == a3 )
    {
      do
        v11 = *++v5;
      while ( *v5 == 48 );
    }
    if ( (unsigned int)v11 - 48 > 9 )
    {
      while ( v7 == 48 || v7 == a4 )
        v7 = *++v6;
      if ( v7 == a3 )
      {
        do
          v7 = *++v6;
        while ( *v6 == 48 );
      }
      result = (unsigned int)v7 - 48 <= 9;
    }
    else
    {
      result = 1LL;
    }
  }
  else
  {
    while ( v7 == 48 || v7 == a4 )
      v7 = *++v6;
    while ( v9 == 48 || v9 == a4 )
      v9 = *++v5;
    while ( v7 == v9 && (unsigned int)v7 - 48 <= 9 )
    {
      do
        v7 = *++v6;
      while ( *v6 == a4 );
      do
        v9 = *++v5;
      while ( *v5 == a4 );
    }
    if ( v7 == a3 && (unsigned int)v9 - 48 > 9 || v9 == a3 && (unsigned int)v7 - 48 > 9 )
    {
      result = sub_416421(v6, v5, a3);
    }
    else
    {
      v13 = v7 - v9;
      v15 = 0LL;
      while ( (unsigned int)v7 - 48 <= 9 )
      {
        do
          v7 = *++v6;
        while ( *v6 == a4 );
        ++v15;
      }
      v17 = 0LL;
      while ( (unsigned int)v9 - 48 <= 9 )
      {
        do
          v9 = *++v5;
        while ( *v5 == a4 );
        ++v17;
      }
      if ( v15 == v17 )
      {
        if ( v15 )
          result = v13;
        else
          result = 0LL;
      }
      else if ( v15 >= v17 )
      {
        result = 1LL;
      }
      else
      {
        result = 0xFFFFFFFFLL;
      }
    }
  }
  return result;
}
