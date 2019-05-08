/*
080483ed <main>:
80483ed:push   ebp
80483ee:mov    ebp,esp
80483f0:sub    esp,0xc
80483f3:mov    DWORD PTR [ebp-0x4],0x5
80483fa:mov    DWORD PTR [ebp-0x8],0x5
8048401:mov    DWORD PTR [ebp-0xc],0x0
8048408:mov    eax,DWORD PTR [ebp-0x4]
804840b:cdq
804840c:idiv   DWORD PTR [ebp-0x8]
804840f:mov    DWORD PTR [ebp-0xc],eax
8048412:mov    eax,0x0
8048417:leave
8048418:ret
 */

int main(){
}