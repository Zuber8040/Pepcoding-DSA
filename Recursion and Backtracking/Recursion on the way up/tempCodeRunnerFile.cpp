  if(sr==dc and sc==dc){
       cout<<psf<<"\n";
       return;
   }
   if(sc+1<=dc){
      printMazePaths(sr,sc+1,dr,dc,"h"+psf);
   }
   if(sr+1<=dr){
       printMazePaths(sr,sc+1,dr,dc,"v"+psf);
   }