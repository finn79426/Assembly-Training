/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x198
80483f6:mov    DWORD PTR [ebp-0x4],0x0
80483fd:jmp    8048432 <main+0x45>
80483ff:mov    DWORD PTR [ebp-0x8],0x0
8048406:jmp    8048428 <main+0x3b>
8048408:mov    edx,DWORD PTR [ebp-0x4]
804840b:mov    eax,edx
804840d:shl    eax,0x2
8048410:add    eax,edx
8048412:add    eax,eax
8048414:mov    edx,DWORD PTR [ebp-0x8]
8048417:add    eax,edx
8048419:mov    DWORD PTR [ebp+eax*4-0x198],0xa
8048424:add    DWORD PTR [ebp-0x8],0x1
8048428:cmp    DWORD PTR [ebp-0x8],0x9
804842c:jle    8048408 <main+0x1b>
804842e:add    DWORD PTR [ebp-0x4],0x1
8048432:cmp    DWORD PTR [ebp-0x4],0x9
8048436:jle    80483ff <main+0x12>
8048438:mov    eax,0x0
804843d:leave
804843e:ret
 */

int main(){
}
