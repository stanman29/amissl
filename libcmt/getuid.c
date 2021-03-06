#include <proto/exec.h>
#include <utility/tagitem.h>

#define PRAGMAS_USERGROUP_H
#define INLINE_USERGROUP_H
#define INLINE4_USERGROUP_H
#include <proto/usergroup.h>

#if !defined(__amigaos4__) && !defined(__MORPHOS__)
#define USERGROUP_BASE_NAME UserGroupBase
#define _getuid() ({ \
  LONG __getuid__re = \
  ({ \
  register struct Library * const __getuid__bn __asm("a6") = (struct Library *) (USERGROUP_BASE_NAME);\
  register LONG __getuid__re __asm("d0"); \
  __asm volatile ("jsr a6@(-48:W)" \
  : "=r"(__getuid__re) \
  : "r"(__getuid__bn) \
  : "d1", "a0", "a1", "fp0", "fp1", "cc", "memory"); \
  __getuid__re; \
  }); \
  __getuid__re; \
})
#endif

#if !defined(__MORPHOS__)
long (getuid)(void)
#else
uid_t (getuid)(void)
#endif
{
	struct Library *UserGroupBase;
#ifdef __amigaos4__
	struct UserGroupIFace *IUserGroup;
#endif
	long ret = 0;

	if ((UserGroupBase = OpenLibrary("usergroup.library", 1)) || (UserGroupBase = OpenLibrary("AmiTCP:Libs/usergroup.library", 1)))
	{
#if !defined(__amigaos4__)
 #if !defined(__MORPHOS__)
		ret = _getuid();
 #else
    ret = getuid();
 #endif
#else
		if ( (IUserGroup = (struct UserGroupIFace *)GetInterface(UserGroupBase, "main", 1, NULL)) )
		{
			ret = IUserGroup->getuid();
			DropInterface((struct Interface *)IUserGroup);
		}
#endif
		CloseLibrary(UserGroupBase);
	}

	return(ret);
}
