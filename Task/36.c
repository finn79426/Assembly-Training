/*
0804841d <myfunc>:
 804841d:       push   ebp
 804841e:       mov    ebp,esp
 8048420:       sub    esp,0x8
 8048423:       mov    eax,DWORD PTR [ebp+0xc]
 8048426:       mov    DWORD PTR [esp+0x4],eax
 804842a:       mov    DWORD PTR [esp],0x8048500
 8048431:       call   80482f0 <printf@plt>
 8048436:       leave  
 8048437:       ret

08048438 <main>:
8048438:push   ebp
8048439:mov    ebp,esp
804843b:sub    esp,0x10
804843e:mov    DWORD PTR [ebp-0x8],0x7e0
8048445:mov    DWORD PTR [ebp-0x4],0x1
804844c:mov    eax,DWORD PTR [ebp-0x8]
804844f:mov    edx,DWORD PTR [ebp-0x4]
8048452:mov    DWORD PTR [esp],eax
8048455:mov    DWORD PTR [esp+0x4],edx
8048459:call   804841d <myfunc>
804845e:mov    eax,0x0
8048463:leave  
8048464:ret  
 */

#include <stdio.h>

void myfunc(){

}

int main(){

}
