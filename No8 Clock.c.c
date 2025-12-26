#include <stdio.h> 

int main (){
	
int h,m,s,ms;


		scanf("%d:%d:%d",&h,&m,&s);
		
		
		if(h>=0 && m>=0 && s>=0){
		
			if (h>23){
				
				h=h-24;
				
			}
		
			if (m>59){
				
				m=m-60;
				h=h+1;
				
			}
			
				if (s>59){
				
				s=s-60;
				m=m+1;
				
			}
		
		
		
		
		
		printf("hour : %d\n",h);
		printf("minute : %d\n",m);
		printf("second : %d\n",s);
		
		printf("Next minutes: ");
		scanf("%d",&ms);
		
		
		
		
		if(ms>120){
			
		printf("hour : %d\n",h);
		printf("minute : %d\n",m);
		printf("second : %d\n",s);
			
		}
		else {
			if(ms>60){
			
			int msx,sx;
			msx=ms/60;
			h=h+msx;
			sx=msx*60;
			ms=ms-sx;
			
		}
			
				m=m+ms;
		
		
	
	
		
	
		
		if(h==24){
			
			h=00;
			
		
		}


			if (h>23){
				
				h=h-24;
				
			}
		
			if (m>59){
				
				m=m-60;
				h=h+1;
				
			}
			
				if (s>59){
				
				s=s-60;
				m=m+1;
				
			}
			
			
			
			printf("hour : %d\n",h);
		printf("minute : %d\n",m);
		printf("second : %d\n",s);
			
			
	}
		
	}



		
		
		
		
}
