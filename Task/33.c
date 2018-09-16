/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0x2c
80483f3:mov    DWORD PTR [ebp-0x4],0x0
80483fa:jmp    804840a <main+0x1d>
80483fc:mov    eax,DWORD PTR [ebp-0x4]
80483ff:mov    edx,DWORD PTR [ebp-0x4]
8048402:mov    DWORD PTR [ebp+eax*4-0x2c],edx
8048406:add    DWORD PTR [ebp-0x4],0x1
804840a:cmp    DWORD PTR [ebp-0x4],0x9
804840e:jle    80483fc <main+0xf>
8048410:mov    eax,0x0
8048415:leave  
8048416:ret    
 */

int main(){
}
