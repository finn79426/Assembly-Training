/*
080483ed <myfunc>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:mov    eax,DWORD PTR [ebp+0xc]
80483f3:mov    edx,DWORD PTR [ebp+0x8]
80483f6:add    eax,edx
80483f8:pop    ebp
80483f9:ret

080483fa <main>:
80483fa:push   ebp
80483fb:mov    ebp,esp
80483fd:sub    esp,0x10	// 16 byte
8048400:mov    DWORD PTR [ebp-0x4],0x80483ed
8048407:mov    DWORD PTR [esp+0x4],0x5
804840f:mov    DWORD PTR [esp],0x5
8048416:mov    eax,DWORD PTR [ebp-0x4]
8048419:call   eax
804841b:mov    DWORD PTR [ebp-0x8],eax
804841e:mov    eax,0x0
8048423:leave
8048424:ret
 */

int myfunc(){
}

int main(){
}
