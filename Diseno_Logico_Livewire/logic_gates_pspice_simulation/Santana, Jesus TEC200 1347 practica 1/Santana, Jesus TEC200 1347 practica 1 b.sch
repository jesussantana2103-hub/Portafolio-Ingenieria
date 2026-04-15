*version 9.1 227787606
u 143
U? 11
DSTM? 3
? 11
R? 2
V? 3
@libraries
@analysis
.TRAN 1 0 0 0
+0 0ns
+1 40us
.STMLIB Santana, Jesus TEC200 1347 practica 1 b.stl
@targets
@attributes
@translators
a 0 u 13 0 0 0 hln 100 PCBOARDS=PCB
a 0 u 13 0 0 0 hln 100 PSPICE=PSPICE
a 0 u 13 0 0 0 hln 100 XILINX=XILINX
@setup
unconnectedPins 0
connectViaLabel 0
connectViaLocalLabels 0
NoStim4ExtIFPortsWarnings 1
AutoGenStim4ExtIFPorts 1
@index
pageloc 1 0 10559 
@status
n 0 125:08:13:11:12:27;1757776347 e 
s 2833 125:08:13:11:12:30;1757776350 e 
c 125:08:13:11:12:45;1757776365
*page 1 0 970 720 iA
@ports
port 108 egnd 520 340 h
a 1 s 0 0 10 28 hcn 100 LABEL=0
@parts
part 4 7404 260 50 h
a 0 sp 11 0 40 40 hln 100 PART=7404
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DIP14
a 0 s 0:13 0 0 0 hln 100 GATE=A
a 0 a 0:13 0 0 0 hln 100 PKGREF=U3
a 0 ap 9 0 28 8 hln 100 REFDES=U3A
part 5 7408 260 90 h
a 0 sp 11 0 40 50 hln 100 PART=7408
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DIP14
a 0 s 0:13 0 0 0 hln 100 GATE=A
a 0 a 0:13 0 0 0 hln 100 PKGREF=U4
a 0 ap 9 0 40 0 hln 100 REFDES=U4A
part 2 7400 260 150 h
a 0 sp 11 0 40 50 hln 100 PART=7400
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DIP14
a 0 s 0:13 0 0 0 hln 100 GATE=A
a 0 a 0:13 0 0 0 hln 100 PKGREF=U1
a 0 ap 9 0 40 0 hln 100 REFDES=U1A
part 6 7432 260 210 h
a 0 sp 11 0 40 50 hln 100 PART=7432
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DIP14
a 0 s 0:13 0 0 0 hln 100 GATE=A
a 0 a 0:13 0 0 0 hln 100 PKGREF=U5
a 0 ap 9 0 40 0 hln 100 REFDES=U5A
part 7 7433 260 270 h
a 0 sp 11 0 40 50 hln 100 PART=7433
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DIP14
a 0 s 0:13 0 0 0 hln 100 GATE=A
a 0 a 0:13 0 0 0 hln 100 PKGREF=U6
a 0 ap 9 0 40 0 hln 100 REFDES=U6A
part 9 7404 410 340 h
a 0 sp 11 0 40 40 hln 100 PART=7404
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DIP14
a 0 s 0:13 0 0 0 hln 100 GATE=A
a 0 a 0:13 0 0 0 hln 100 PKGREF=U8
a 0 ap 9 0 28 8 hln 100 REFDES=U8A
part 8 7486 260 330 h
a 0 sp 11 0 40 50 hln 100 PART=7486
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DIP14
a 0 s 0:13 0 0 0 hln 100 GATE=A
a 0 a 0:13 0 0 0 hln 100 PKGREF=U7
a 0 ap 9 0 40 0 hln 100 REFDES=U7A
part 105 r 380 280 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
part 116 7404 340 450 h
a 0 sp 11 0 40 40 hln 100 PART=7404
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DIP14
a 0 s 0:13 0 0 0 hln 100 GATE=A
a 0 a 0:13 0 0 0 hln 100 PKGREF=U10
a 0 ap 9 0 28 8 hln 100 REFDES=U10A
part 115 7404 270 400 h
a 0 sp 11 0 40 40 hln 100 PART=7404
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=DIP14
a 0 s 0:13 0 0 0 hln 100 GATE=A
a 0 a 0:13 0 0 0 hln 100 PKGREF=U9
a 0 ap 9 0 28 8 hln 100 REFDES=U9A
part 113 stim4 130 20 h
a 0 u 0 0 0 70 hln 100 TIMESTEP=10us
a 0 u 0 0 0 90 hln 100 COMMAND2=label=bucle
a 0 u 0 0 0 100 hln 100 COMMAND3=1c incrementa by 0001
a 0 u 0 0 0 110 hln 100 COMMAND4=2c goto bucle until ge 0011
a 0 a 0:13 0 0 0 hln 100 PKGREF=DSTM2
a 0 ap 9 0 1 -2 hln 100 REFDES=DSTM2
part 140 vdc 520 280 h
a 0 sp 0 0 22 37 hln 100 PART=vdc
a 0 x 0:13 0 0 0 hln 100 PKGREF=V1
a 1 xp 9 0 24 7 hcn 100 REFDES=V1
a 1 u 13 0 -11 18 hcn 100 DC=5V
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
a 1 s 13 0 300 95 hrn 100 PAGENO=1
part 86 nodeMarker 240 90 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=2
part 88 nodeMarker 240 110 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=3
part 90 nodeMarker 340 50 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=4
part 92 nodeMarker 340 100 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=5
part 94 nodeMarker 340 160 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=6
part 96 nodeMarker 340 220 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=7
part 102 nodeMarker 470 340 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=10
part 98 nodeMarker 340 280 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=8
part 84 nodeMarker 220 30 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=1
part 100 nodeMarker 350 340 h
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=XOR
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 s 0 0 0 0 hln 100 PROBEVAR=
a 0 a 0 0 4 22 hlb 100 LABEL=9
@conn
w 55
a 0 sr 0 0 0 0 hln 100 LABEL=NOT
a 0 up 0:33 0 0 0 hln 100 LVL=
s 310 50 340 50 62
a 0 sr 3 0 325 48 hcn 100 LABEL=NOT
a 0 up 33 0 325 49 hct 100 LVL=
s 340 50 350 50 91
w 59
a 0 sr 0 0 0 0 hln 100 LABEL=AND
a 0 up 0:33 0 0 0 hln 100 LVL=
s 340 100 350 100 93
a 0 sr 3 0 340 98 hcn 100 LABEL=AND
s 330 100 340 100 60
a 0 up 33 0 340 99 hct 100 LVL=
w 65
a 0 sr 0 0 0 0 hln 100 LABEL=NAND
a 0 up 0:33 0 0 0 hln 100 LVL=
s 340 160 350 160 95
a 0 sr 3 0 340 158 hcn 100 LABEL=NAND
s 330 160 340 160 64
a 0 up 33 0 340 159 hct 100 LVL=
w 67
a 0 sr 0 0 0 0 hln 100 LABEL=OR
a 0 up 0:33 0 0 0 hln 100 LVL=
s 340 220 350 220 97
a 0 sr 3 0 340 218 hcn 100 LABEL=OR
s 330 220 340 220 66
a 0 up 33 0 340 219 hct 100 LVL=
w 71
a 0 sr 0 0 0 0 hln 100 LABEL=XNOR
a 0 up 0:33 0 0 0 hln 100 LVL=
s 470 340 480 340 103
a 0 sr 3 0 470 338 hcn 100 LABEL=XNOR
s 460 340 470 340 70
a 0 up 33 0 470 339 hct 100 LVL=
w 69
a 0 sr 0 0 0 0 hln 100 LABEL=NOR
a 0 up 0:33 0 0 0 hln 100 LVL=
a 0 up 0:33 0 0 0 hln 100 V=
s 340 280 380 280 99
a 0 sr 3 0 355 278 hcn 100 LABEL=NOR
a 0 up 33 0 355 279 hct 100 V=
s 330 280 340 280 68
a 0 up 33 0 340 279 hct 100 LVL=
w 128
a 0 sr 0 0 0 0 hln 100 LABEL=y
s 340 450 220 450 120
a 0 sr 3 0 280 448 hcn 100 LABEL=y
w 50
a 0 sr 0 0 0 0 hln 100 LABEL=B
a 0 up 0:33 0 0 0 hln 100 LVL=
s 260 350 220 350 49
a 0 sr 3 0 240 348 hcn 100 LABEL=B
a 0 up 33 0 240 349 hct 100 LVL=
w 47
a 0 sr 0 0 0 0 hln 100 LABEL=A
a 0 up 0:33 0 0 0 hln 100 LVL=
s 260 330 220 330 46
a 0 sr 3 0 240 328 hcn 100 LABEL=A
a 0 up 33 0 240 329 hct 100 LVL=
w 44
a 0 sr 0 0 0 0 hln 100 LABEL=B
a 0 up 0:33 0 0 0 hln 100 LVL=
s 260 290 220 290 43
a 0 sr 3 0 240 288 hcn 100 LABEL=B
a 0 up 33 0 240 289 hct 100 LVL=
w 20
a 0 sr 0 0 0 0 hln 100 LABEL=A
a 0 up 0:33 0 0 0 hln 100 LVL=
s 260 50 220 50 19
a 0 sr 3 0 240 48 hcn 100 LABEL=A
a 0 up 33 0 240 49 hct 100 LVL=
w 23
a 0 sr 0 0 0 0 hln 100 LABEL=A
a 0 up 0:33 0 0 0 hln 100 LVL=
s 240 90 220 90 87
a 0 sr 3 0 240 88 hcn 100 LABEL=A
s 260 90 240 90 22
a 0 up 33 0 240 89 hct 100 LVL=
w 26
a 0 sr 0 0 0 0 hln 100 LABEL=B
a 0 up 0:33 0 0 0 hln 100 LVL=
s 240 110 220 110 89
a 0 sr 3 0 240 108 hcn 100 LABEL=B
s 260 110 240 110 25
a 0 up 33 0 240 109 hct 100 LVL=
w 29
a 0 sr 0 0 0 0 hln 100 LABEL=A
a 0 up 0:33 0 0 0 hln 100 LVL=
s 260 150 220 150 28
a 0 sr 3 0 240 148 hcn 100 LABEL=A
a 0 up 33 0 240 149 hct 100 LVL=
w 32
a 0 sr 0 0 0 0 hln 100 LABEL=B
a 0 up 0:33 0 0 0 hln 100 LVL=
s 260 170 220 170 31
a 0 sr 3 0 240 168 hcn 100 LABEL=B
a 0 up 33 0 240 169 hct 100 LVL=
w 35
a 0 sr 0 0 0 0 hln 100 LABEL=A
a 0 up 0:33 0 0 0 hln 100 LVL=
s 260 210 220 210 34
a 0 sr 3 0 240 208 hcn 100 LABEL=A
a 0 up 33 0 240 209 hct 100 LVL=
w 38
a 0 sr 0 0 0 0 hln 100 LABEL=B
a 0 up 0:33 0 0 0 hln 100 LVL=
s 260 230 220 230 37
a 0 sr 3 0 240 228 hcn 100 LABEL=B
a 0 up 33 0 240 229 hct 100 LVL=
w 41
a 0 sr 0 0 0 0 hln 100 LABEL=A
a 0 up 0:33 0 0 0 hln 100 LVL=
s 260 270 220 270 40
a 0 sr 3 0 240 268 hcn 100 LABEL=A
a 0 up 33 0 240 269 hct 100 LVL=
w 132
a 0 sr 0 0 0 0 hln 100 LABEL=x
s 270 400 220 400 117
a 0 sr 3 0 245 398 hcn 100 LABEL=x
w 53
a 0 sr 0 0 0 0 hln 100 LABEL=XOR
a 0 up 0:33 0 0 0 hln 100 LVL=
s 350 340 330 340 139
a 0 sr 3 0 350 338 hcn 100 LABEL=XOR
s 410 340 350 340 78
a 0 up 33 0 350 339 hct 100 LVL=
w 112
s 520 320 520 340 111
w 110
a 0 up 0:33 0 0 0 hln 100 V=
s 420 280 520 280 109
a 0 up 33 0 470 279 hct 100 V=
b 12
a 0 sr 0:3 0 175 18 hcn 100 LABEL=x,y,A,B
s 220 20 130 20 13
a 0 sr 3 0 175 18 hcn 100 LABEL=x,y,A,B
s 220 330 220 350 48
s 220 290 220 330 45
s 220 270 220 290 42
s 220 230 220 270 39
s 220 210 220 230 36
s 220 170 220 210 33
s 220 150 220 170 30
s 220 110 220 150 27
s 220 90 220 110 24
s 220 50 220 90 21
s 220 30 220 50 85
s 220 20 220 30 15
s 220 350 220 400 137
s 220 400 220 450 138
@junction
j 260 50
+ p 4 A
+ w 20
j 260 90
+ p 5 A
+ w 23
j 260 110
+ p 5 B
+ w 26
j 260 150
+ p 2 A
+ w 29
j 260 170
+ p 2 B
+ w 32
j 260 210
+ p 6 A
+ w 35
j 260 230
+ p 6 B
+ w 38
j 310 50
+ p 4 Y
+ w 55
j 330 100
+ p 5 Y
+ w 59
j 330 160
+ p 2 Y
+ w 65
j 330 220
+ p 6 Y
+ w 67
j 260 270
+ p 7 A
+ w 41
j 260 290
+ p 7 B
+ w 44
j 260 350
+ p 8 B
+ w 50
j 260 330
+ p 8 A
+ w 47
j 460 340
+ p 9 Y
+ w 71
j 330 340
+ p 8 Y
+ w 53
j 410 340
+ p 9 A
+ w 53
j 240 90
+ p 86 pin1
+ w 23
j 240 110
+ p 88 pin1
+ w 26
j 340 50
+ p 90 pin1
+ w 55
j 340 100
+ p 92 pin1
+ w 59
j 340 160
+ p 94 pin1
+ w 65
j 340 220
+ p 96 pin1
+ w 67
j 470 340
+ p 102 pin1
+ w 71
j 330 280
+ p 7 Y
+ w 69
j 340 280
+ p 98 pin1
+ w 69
j 380 280
+ p 105 1
+ w 69
j 420 280
+ p 105 2
+ w 110
j 520 340
+ s 108
+ w 112
j 340 450
+ p 116 A
+ w 128
j 220 350
+ w 50
+ b 12
 B
j 220 330
+ w 47
+ b 12
 A
j 220 290
+ w 44
+ b 12
 B
j 220 50
+ w 20
+ b 12
 A
j 220 90
+ w 23
+ b 12
 A
j 220 110
+ w 26
+ b 12
 B
j 220 150
+ w 29
+ b 12
 A
j 220 170
+ w 32
+ b 12
 B
j 220 210
+ w 35
+ b 12
 A
j 220 230
+ w 38
+ b 12
 B
j 220 270
+ w 41
+ b 12
 A
j 220 30
+ p 84 pin1
+ b 12
j 130 20
+ P 113 pin[0-3]
 pin[0]
 pin[1]
 pin[2]
 pin[3]
+ b 12
 x
 y
 A
 B
j 220 450
+ w 128
+ b 12
 y
j 270 400
+ p 115 A
+ w 132
j 220 400
+ w 132
+ b 12
 x
j 350 340
+ p 100 pin1
+ w 53
j 520 320
+ p 140 -
+ w 112
j 520 280
+ p 140 +
+ w 110
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
