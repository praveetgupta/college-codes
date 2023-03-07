Addition:

data segment
num1 db 04h
num2 db 05h
result dw ?
data ends
code segment
assume cs:code, ds:data
start: mov ax, data
       mov ds, ax
       mov al, num1
       mov bl, num2
       add al, bl
       mov result, ax
       mov ah, 4ch
       int 21h
       code ends
       end start 


Subtraction:

data segment
num1 db 05h
num2 db 04h
result dw ?
data ends
code segment
assume cs:code, ds:data
start: mov ax, data
       mov ds, ax
       mov al, num1
       mov bl, num2
       sub al, bl
       mov result, ax
       mov ah, 4ch
       int 21h
       code ends
       end start 