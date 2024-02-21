#include<iostream>
using namespace std;
class weather_report
{
	private:
		int dom[30];
		float hightemp[30],lowtemp[30],amount_rain[30],amount_snow[30];
	public:
		void get_data(int n)
		{ 
		  for(int i;i<n;i++)
		  {
		  
           cout<<"ENTER THE DAY OF MONTH : ";
		    cin>>dom[i];          
		   cout<<"ENTER THE LOW TEMP CELCIUS : ";
           cin>>lowtemp[i];
		   cout<<"ENTER THE HIGH TEMP IN CELCIUS: ";
		   cin>>hightemp[i];  
		    cout<<"ENTER THE AMOUNT OF RAIN IN MM : ";
		   cin>>amount_rain[i];  
		    cout<<"ENTER THE AMOUNT OF SNOW IN INCH : ";
		   cin>>amount_snow[i];  
		   }
		}
		void low_temp_avg(int n)
		{
			float avg_ltemp;
			float sum_ltemp;
			for(int i=0;i<n;i++)
			{
			sum_ltemp=sum_ltemp+lowtemp[i];
			}
			avg_ltemp=sum_ltemp/n;
			cout<<"\nAVG LOW TEMP : "<<avg_ltemp<<"DegCel OF "<<n<<"DAYS";
		}
		void high_temp_avg(int n)
		{
			float avg_Htemp;
			float sum_Htemp;
			for(int i=0;i<n;i++)
			{
			sum_Htemp=sum_Htemp+hightemp[i];
			}
			avg_Htemp=sum_Htemp/n;
			cout<<"\nAVG HIGH TEMP : "<<avg_Htemp<<"DegCel OF "<<n<<"DAYS";
		}
		void avg_rain(int n )
		{
			float avg_rain;
			float sum_rain;
			for(int i=0;i<n;i++)
			{
			sum_rain=sum_rain+amount_rain[i];
			}
			avg_rain=sum_rain/n;
			cout<<"\nAVG RAIN : "<<avg_rain<<"mm In "<<n<<"DAYS";
		}
		void avg_snow(int n )
		{
			float avg_snow;
			float sum_snow;
			for(int i=0;i<n;i++)
			{
			sum_snow=sum_snow+amount_snow[i];
			}
			avg_snow=sum_snow/n;
			cout<<"\nAVG RAIN : "<<avg_snow<<"mm In "<<n<<"DAYS";
		}
		void month_report(int n)
		{
		    low_temp_avg(n);
		    high_temp_avg(n);
		    avg_rain(n);
		    avg_snow(n);
		}
		
};
int main(){
	weather_report m1;
	 
	

	     int ch;
	     int n;
		 while(ch)
	        {
	        	cout<<"\n**** MENU ****";
            	cout<<"\n1 : ENTER THE DATA  ";
	            cout<<"\n2 : MONTHLY REPORT ";
				
					cout<<"\nENTER THE CHOICE : ";
				    cin>>ch;
	          switch(ch){
	            case 1:  
	            
	            cout<<"HOW MANY DAYS YOU WANT TO ENTER DATA : ";
	            cin>>n;
					  for(int i=0;i<n;i++)
					  {
				    	m1.get_data(n);
				    
					  }   
				break;	
				case 2 :
					    m1.month_report(n);
			             break;		
			  }
					
			}
	      
}
