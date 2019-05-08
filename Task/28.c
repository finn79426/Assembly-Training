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
80483fd:sub    esp,0xc
8048400:mov    DWORD PTR [esp+0x4],0x5
8048408:mov    DWORD PTR [esp],0x5
804840f:call   80483ed <myfunc>
8048414:mov    DWORD PTR [ebp-0x4],eax
8048417:mov    eax,0x0
804841c:leave
804841d:ret
*/

int myfunc(){
}

int main(){
}
