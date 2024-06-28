#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *sub_4046DB()
{
  _QWORD *ptr; // [rsp+8h] [rbp-8h]

  ptr = malloc(0x18uLL);
  if ( ptr )
  {
    *ptr = sub_409151(11LL, 0LL, sub_40460C, sub_404677, sub_4046A9);
    if ( !*ptr )
    {
      free(ptr);
      return 0LL;
    }
    ptr[1] = 0LL;
    ptr[2] = 0LL;
  }
  return ptr;
}
