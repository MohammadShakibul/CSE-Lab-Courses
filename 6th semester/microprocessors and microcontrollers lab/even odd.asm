.model small
.stack 100h
.data

msg1 db "Enter the first number: $"
msg2 db 10,13, "Enter the second number: $"
msg3 db 10,13,"Sum of the numbers : $"
.code  

main proc    
    
mov ax,@data
mov ds,ax
; printing msg1 :
mov ah,9 ;loading 9 to print
mov dx,offset msg1
int 21h ;interput for printing

;taking the first input:
mov ah,1 ;loading for input
int 21h ;interput to take input
mov bl,al ; moving the value of al to bl

; printing msg2 :
mov ah,9 ;loading 9 to print
mov dx,offset msg2
int 21h ;interput for printing

;taking the second input :
mov ah,1 ;loading for input
int 21h ;interput to take input
mov bh,al ; moving the value of al to bh

;printing msg3:
mov ah,9 ;loading 9 to print
mov dx,offset msg3
int 21h ;interput for printing

;code for adding
add bl,bh
sub bl,48

;result the print
mov ah,2
mov dl,bl ;moving the value to disply register
int 21h ;interput for printing

main endp ;ending the procedure
end main