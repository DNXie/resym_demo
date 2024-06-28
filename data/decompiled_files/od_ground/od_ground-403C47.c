#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_403C47()
{
  size_t v0; // rax
  bool v2; // [rsp+Ah] [rbp-46h]
  unsigned __int8 v3; // [rsp+Bh] [rbp-45h]
  int v4; // [rsp+Ch] [rbp-44h]
  unsigned __int64 v5; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-38h]
  size_t v7; // [rsp+20h] [rbp-30h]
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]
  void *ptr[4]; // [rsp+30h] [rbp-20h]

  v2 = 0;
  v3 = 1;
  ptr[0] = (void *)sub_407ADE(2LL, n);
  ptr[1] = (char *)ptr[0] + n;
  v6 = qword_612308;
  if ( byte_612310 )
  {
    while ( v6 < qword_612320 )
    {
      v0 = n;
      if ( qword_612320 - v6 <= n )
        v0 = qword_612320 - v6;
      v7 = v0;
      v3 &= sub_403A0C(v0, (__int64)ptr[v2], &v5);
      if ( v5 < n )
        goto LABEL_15;
      if ( v5 != n )
        __assert_fail("n_bytes_read == bytes_per_block", "../../src/src/od.c", 0x53Fu, "dump");
      sub_4036DE(v6, v5, ptr[!v2], (unsigned __int8 *)ptr[v2]);
      v6 += v5;
      v2 = !v2;
    }
    v5 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v3 &= sub_403A0C(n, (__int64)ptr[v2], &v5);
      if ( v5 < n )
        break;
      if ( v5 != n )
        __assert_fail("n_bytes_read == bytes_per_block", "../../src/src/od.c", 0x54Du, "dump");
      sub_4036DE(v6, v5, ptr[!v2], (unsigned __int8 *)ptr[v2]);
      v6 += v5;
      v2 = !v2;
    }
  }
LABEL_15:
  if ( v5 )
  {
    v4 = sub_403B27();
    v8 = v4 * ((v4 + v5 - 1) / v4);
    memset((char *)ptr[v2] + v5, 0, v8 - v5);
    sub_4036DE(v6, v5, ptr[!v2], (unsigned __int8 *)ptr[v2]);
    v6 += v5;
  }
  qword_612300(v6, 10LL);
  if ( byte_612310 && v6 >= qword_612320 )
    v3 = (unsigned __int8)(v3 & sub_403028(0)) != 0;
  free(ptr[0]);
  return v3;
}
