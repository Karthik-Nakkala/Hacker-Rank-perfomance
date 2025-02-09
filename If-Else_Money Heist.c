#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
    scanf("%d %d %d %d %d %d %d %d %d %d",&i0,&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9);
    int a1,a2,a3,p,q,r;
    scanf("%d %d",&a1,&p);
    scanf("%d %d",&a2,&q);
    scanf("%d %d",&a3,&r);
    if(a1==0){
      i0=i0+p;
        if((i0)>9){
            i0=i0-10;
        }     
    }
    else if(a1==1){
        i1=i1+p;
        if((i1)>9){
            i1=i1-10;
        }
    }
    
    else if(a1==2){
        i2=i2+p;
        if((i2)>9){
            i2=i2-10;
        } 
    }
    else if(a1==3){
        i3=i3+p;
        if((i3)>9){
            i3=i3-10;
        }
    }    
    else if(a1==4){
        i4=i4+p;
        if((i4)>9){
            i4=i4-10;
        }
    }    
    else if(a1==5){
        i5=i5+p;
        if((i5)>9){
            i5=i5-10;
        }
    }    
    else if(a1==6){
        i6=i6+p;
        if((i6)>9){
            i6=i6-10;
        }
    }    
    else if(a1==7){
        i7=i7+p;
        if((i7)>9){
            i7=i7-10;
        }
    }
     else if(a1==8){
        i8=i8+p;
        if((i8)>9){
            i8=i8-10;
        } 
     }
     else if(a1==9){
          i9=i9+p;
        if((i9)>9){
            i9=i9-10;
        } 
     }
    if(a2==0){
      i0=i0+q;
        if((i0)>9){
            i0=i0-10;
        }     
    }
    else if(a2==1){
        i1=i1+q;
        if((i1)>9){
            i1=i1-10;
        }
    }
    
    else if(a2==2){
        i2=i2+q;
        if((i2)>9){
            i2=i2-10;
        } 
    }
    else if(a2==3){
        i3=i3+q;
        if((i3)>9){
            i3=i3-10;
        }
    }    
    else if(a2==4){
        i4=i4+q;
        if((i4)>9){
            i4=i4-10;
        }
    }    
    else if(a2==5){
        i5=i5+q;
        if((i5)>9){
            i5=i5-10;
        }
    }    
    else if(a2==6){
        i6=i6+q;
        if((i6)>9){
            i6=i6-10;
        }
    }    
    else if(a2==7){
        i7=i7+q;
        if((i7)>9){
            i7=i7-10;
        }
    }
     else if(a2==8){
        i8=i8+q;
        if((i8)>9){
            i8=i8-10;
        } 
     }
     else if(a2==9){
          i9=i9+q;
        if((i9)>9){
            i9=i9-10;
        } 
     }
    if(a3==0){
      i0=i0+r;
        if((i0)>9){
            i0=i0-10;
        }     
    }
    else if(a3==1){
        i1=i1+r;
        if((i1)>9){
            i1=i1-10;
        }
    }
    
    else if(a3==2){
        i2=i2+r;
        if((i2)>9){
            i2=i2-10;
        } 
    }
    else if(a3==3){
        i3=i3+r;
        if((i3)>9){
            i3=i3-10;
        }
    }    
    else if(a3==4){
        i4=i4+r;
        if((i4)>9){
            i4=i4-10;
        }
    }    
    else if(a3==5){
        i5=i5+r;
        if((i5)>9){
            i5=i5-10;
        }
    }    
    else if(a3==6){
        i6=i6+r;
        if((i6)>9){
            i6=i6-10;
        }
    }    
    else if(a3==7){
        i7=i7+r;
        if((i7)>9){
            i7=i7-10;
        }
    }
     else if(a3==8){
        i8=i8+r;
        if((i8)>9){
            i8=i8-10;
        } 
     }
     else if(a3==9){
          i9=i9+r;
        if((i9)>9){
            i9=i9-10;
        } 
     }
        
  
    printf("%d %d %d %d %d %d %d %d %d %d",i0,i1,i2,i3,i4,i5,i6,i7,i8,i9);
    
    
    return 0;
}