ALP to find the length of a string:

data segment
str1 db "GOOD$"
len db ?
data ends
code segment
assume cs:code, ds:data
start: mov ax, data
       mov ds, ax
       lea si, str1
       mov al, "$"
    up:cmp al, [si]
       jz down
       inc len
       inc si
       jmp up
  down:mov ah, 4ch
       int 21h
       code ends
       end start           


ALP to reverse a string



data segment
str1 db "MIT$"
str2 db 10h DUP("$")
count db ?
data ends
code segment
assume cs:code, ds:data
start: mov ax, data
       mov ds, ax
       lea si, str1
    up:mov al, [si]
       cmp al, "$"
       jz down
       inc count
       inc si
       jmp up
  down:lea di, str2
   up1:dec si
       mov al, [si]
       mov [di], al
       inc di
       dec count
       jnz up1
       lea dx, str2
       mov ah, 09h
       int 21h
       mov ah, 4ch
       int 21h
       code ends
       end start               


ALP to compare two strings

data segment
msg db 10,13, "Enter string1: $"
msg1 db 10,13, "Enter string2: $"
msg2 db 10,13, "Strings are equal. $"
msg3 db 10,13, "Strings are not equal. $"
str1 db 25h DUP("$")
str2 db 25h DUP ("$")
data ends
code segment
assume cs:code, ds:data, es:data
start: mov ax, data
       mov ds, ax
       mov es, ax
       lea dx, msg
       mov ah, 09h
       int 21h
       lea dx, str1
       mov ah, 0Ah
       int 21h
       lea dx, msg1
       mov ah, 09h
       int 21h
       lea dx, str2
       mov ah, 0Ah
       int 21h
       lea si, str1
       lea di, str2
       mov cl, length str1
       mov ch, length str2
       cmp cl, ch
       jnz stop
       mov ch, 00h
       cld
       repe cmpsb
       jnz stop
       lea dx, msg2
       mov ah, 09h
       int 21h
       jmp exit
  stop:lea dx, msg3
       mov ah, 09h
       int 21h
  exit:mov ah,4ch
       int 21h
       code ends
       end start       