Multiplication:

data segment
num1 db 04h
num2 db 03h
result dw ?
data ends
code segment
assume cs:code, ds:data
start: mov ax, data
       mov ds, ax
       mov al, num1
       mov bl, num2
       mul bl
       mov result, ax
       mov ah, 4ch
       int 21h
       code ends
       end start


Division:

data segment
num1 db 04h
num2 db 02h
quo db ?
rem db ?
data ends
code segment
assume cs:code, ds:data
start: mov ax, data
       mov ds, ax
       mov ax, num1
       mov bl, num2
       div bl
       mov quo, al
       mov rem, ah
       mov ah, 4ch
       int 21h
       code ends
       end start 