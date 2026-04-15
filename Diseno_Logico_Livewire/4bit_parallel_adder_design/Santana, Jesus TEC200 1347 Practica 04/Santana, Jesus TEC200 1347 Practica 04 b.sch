*version 9.1 98679619
u 157
DSTM? 2
U? 7
? 12
@libraries
@analysis
.TRAN 1 0 0 0
+0 0ns
+1 80ns
@targets
@attributes
@translators
a 0 u 13 0 0 0 hln 100 PSPICE=PSPICE
a 0 u 13 0 0 0 hln 100 XILINX=XILINX
@setup
unconnectedPins 0
connectViaLabel 0
connectViaLocalLabels 0
NoStim4ExtIFPortsWarnings 1
AutoGenStim4ExtIFPorts 1
@index
pageloc 1 0 4594 
@status
c 125:09:22:22:42:06;1761187326
n 0 125:09:22:22:23:20;1761186200 e 
s 0 125:09:22:22:35:21;1761186921 e 
*page 1 0 970 720 iA
@ports
port 100 if_out 570 190 h
a 1 xr 3 0 31 8 hcn 100 LABEL=S
port 101 if_out 570 300 h
a 1 xr 3 0 31 8 hcn 100 LABEL=Cout
port 97 if_in 170 170 h
a 1 xr 3 0 19 8 hcn 100 LABEL=X
port 98 if_in 170 190 h
a 1 xr 3 0 19 8 hcn 100 LABEL=Y
port 99 if_in 160 210 h
a 1 xr 3 0 19 8 hcn 100 LABEL=Cin
@parts
part 3 7486 420 180 h
a 0 sp 11 0 40 50 hln 100 PART=7486
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=U2
a 0 ap 9 0 40 0 hln 100 REFDES=U2
part 7 7432 480 290 h
a 0 sp 11 0 40 50 hln 100 PART=7432
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=U6
a 0 ap 9 0 40 0 hln 100 REFDES=U6
part 2 7486 250 170 h
a 0 sp 11 0 40 50 hln 100 PART=7486
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=U1
a 0 ap 9 0 40 0 hln 100 REFDES=U1
part 4 7408 250 260 h
a 0 sp 11 0 40 50 hln 100 PART=7408
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=U3
a 0 ap 9 0 40 0 hln 100 REFDES=U3
part 6 7432 250 340 h
a 0 sp 11 0 40 50 hln 100 PART=7432
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=U5
a 0 ap 9 0 40 0 hln 100 REFDES=U5
part 5 7408 360 350 h
a 0 sp 11 0 40 50 hln 100 PART=7408
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=U4
a 0 ap 9 0 40 0 hln 100 REFDES=U4
part 88 nodeMarker 240 170 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=Y
a 0 a 0 0 4 22 hlb 100 LABEL=8
part 90 nodeMarker 240 190 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=Y
a 0 a 0 0 4 22 hlb 100 LABEL=9
part 86 nodeMarker 240 210 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=Cin
a 0 a 0 0 4 22 hlb 100 LABEL=7
@conn
w 22
a 0 up 0:33 0 0 0 hln 100 LVL=
s 320 180 420 180 21
a 0 up 33 0 370 179 hct 100 LVL=
w 43
a 0 up 0:33 0 0 0 hln 100 LVL=
s 320 350 360 350 42
a 0 up 33 0 340 349 hct 100 LVL=
w 52
a 0 up 0:33 0 0 0 hln 100 LVL=
s 320 270 450 270 51
a 0 up 33 0 385 269 hct 100 LVL=
s 450 290 480 290 55
s 450 270 450 290 53
w 60
a 0 up 0:33 0 0 0 hln 100 LVL=
s 430 360 450 360 59
s 450 360 450 310 61
a 0 up 33 0 452 335 hlt 100 LVL=
s 450 310 480 310 63
w 73
a 0 sr 0 0 0 0 hln 100 LABEL=S
a 0 up 0:33 0 0 0 hln 100 LVL=
s 490 190 570 190 72
a 0 sr 3 0 530 188 hcn 100 LABEL=S
a 0 up 33 0 530 189 hct 100 LVL=
w 76
a 0 sr 0 0 0 0 hln 100 LABEL=Cout
a 0 up 0:33 0 0 0 hln 100 LVL=
s 550 300 570 300 75
a 0 sr 3 0 558 312 hcn 100 LABEL=Cout
a 0 up 33 0 558 313 hct 100 LVL=
w 19
a 0 sr 0:3 0 210 188 hcn 100 LABEL=Y
a 0 up 0:33 0 0 0 hln 100 LVL=
s 240 190 190 190 91
a 0 sr 3 0 210 188 hcn 100 LABEL=Y
s 250 190 240 190 18
a 0 up 33 0 225 189 hct 100 LVL=
s 190 190 180 190 143
s 190 190 190 280 141
s 190 280 250 280 144
a 0 up 33 0 225 279 hct 100 LVL=
a 0 sr 3 0 225 278 hcn 100 LABEL=Y
s 180 190 170 190 148
s 180 190 180 360 146
s 180 360 250 360 149
a 0 up 33 0 225 359 hct 100 LVL=
a 0 sr 3 0 225 358 hcn 100 LABEL=Y
w 24
a 0 sr 0:3 0 204 208 hcn 100 LABEL=Cin
a 0 up 0:33 0 0 0 hln 100 LVL=
s 240 210 170 210 87
a 0 sr 3 0 204 208 hcn 100 LABEL=Cin
s 320 210 240 210 27
a 0 up 33 0 224 209 hct 100 LVL=
s 420 200 320 200 23
s 320 200 320 210 25
s 170 210 160 210 154
s 170 210 170 390 152
s 360 370 340 370 44
s 340 370 340 390 46
s 170 390 340 390 155
a 0 up 33 0 224 387 hct 100 LVL=
a 0 sr 3 0 224 386 hcn 100 LABEL=Cin
w 37
a 0 sr 0 0 0 0 hln 100 LABEL=X
a 0 up 0:33 0 0 0 hln 100 LVL=
s 250 340 210 340 36
a 0 sr 3 0 225 338 hcn 100 LABEL=X
a 0 up 33 0 225 339 hct 100 LVL=
s 250 260 220 260 30
a 0 sr 3 0 225 258 hcn 100 LABEL=X
a 0 up 33 0 225 259 hct 100 LVL=
s 240 170 220 170 89
a 0 sr 3 0 225 168 hcn 100 LABEL=X
s 250 170 240 170 15
a 0 up 33 0 225 169 hct 100 LVL=
s 220 170 210 170 105
s 220 170 220 260 102
s 210 170 210 340 106
s 210 170 170 170 109
@junction
j 480 290
+ p 7 A
+ w 52
j 480 310
+ p 7 B
+ w 60
j 550 300
+ p 7 Y
+ w 76
j 570 190
+ s 100
+ w 73
j 570 300
+ s 101
+ w 76
j 360 350
+ p 5 A
+ w 43
j 430 360
+ p 5 Y
+ w 60
j 420 180
+ p 3 A
+ w 22
j 490 190
+ p 3 Y
+ w 73
j 420 200
+ p 3 B
+ w 24
j 240 210
+ p 86 pin1
+ w 24
j 250 170
+ p 2 A
+ w 37
j 250 190
+ p 2 B
+ w 19
j 320 180
+ p 2 Y
+ w 22
j 250 260
+ p 4 A
+ w 37
j 320 270
+ p 4 Y
+ w 52
j 250 340
+ p 6 A
+ w 37
j 320 350
+ p 6 Y
+ w 43
j 170 190
+ s 98
+ w 19
j 170 170
+ s 97
+ w 37
j 240 170
+ p 88 pin1
+ w 37
j 220 170
+ w 37
+ w 37
j 210 170
+ w 37
+ w 37
j 240 190
+ p 90 pin1
+ w 19
j 190 190
+ w 19
+ w 19
j 250 280
+ p 4 B
+ w 19
j 180 190
+ w 19
+ w 19
j 250 360
+ p 6 B
+ w 19
j 160 210
+ s 99
+ w 24
j 170 210
+ w 24
+ w 24
j 360 370
+ p 5 B
+ w 24
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
