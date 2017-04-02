//  Spatial pnemonic to help calculate mapping
//  f=8   j=4
//  d=16  k=2
//  s=32  l=1

letters = {
  //Six keys that do something
  1:["l","L","9","(","\\","|"],
  2:["k","K","8","*","]","}"],
  4:["j","J","7","&","=","+"],
  8:["f","F","4","$","-","_"],
  16:["d","D","3","#","[","{"],
  32:["s","S","2","@","'","\""],
  // q,a,z
  24:["q","Q"],
  40:["a","A","1","!"],
  48:["z","Z"],
  // t,g,b
  13:["t","T"],
  21:["g","G","5","%"],
  37:["b","B"],
  // y,h,n
  44:["y","Y"],
  42:["h","H","6","^"],
  41:["n","N"],
  // p,;,/
  6:["p","P"],
  5:[";",":","0",")"],
  3:["/","?"],
  // w,e,r
  38:["w","W"],
  22:["e","E"],
  14:["r","R"],
  // u,i,o
  28:["u","U"],
  26:["i","I"],
  25:["o","O"],
  // x,c,v
  35:["x","X"],
  19:["c","C"],
  11:["v","V"],
  // m,',',.
  52:["m","M"],
  50:[",","<"],
  49:[".",">"],
  // tab, space, enter
  56:["\t","\t"],
  33:[" "," "],
  39:["\n","\n"],
  // `,~
  10:["","","","","`","~"]
}
