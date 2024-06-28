#include "/share/binary_recovery/clang-parser/defs.hh"
// attributes: thunk
int __fastcall __cxa_atexit(void (__fastcall *lpfunc)(void *), void *obj, void *lpdso_handle)
{
  return _cxa_atexit(lpfunc, obj, lpdso_handle);
}
