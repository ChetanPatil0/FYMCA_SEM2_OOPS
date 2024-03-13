#include<iostream>
#include<cstring>
using namespace std;
class class1{
	protected:
	string name[20];
	string dob[20];
	string b_group[20];
};
class class2{
	protected:
	int height[20];
	int weight[20];
};
class class3:public class1,class2{
	protected:
	int tel_no[20];
	string drive_lic[20];
	public:
	void get_data(int n){
		cout<<"ENTER NAME : ";
		cin>>name[n];
		cout<<"ENTER DOB (DD/MM/YYYY): ";
		cin>>dob[n];
		cout<<"ENTER BLOOD GROUP : ";
		cin>>b_group[n];
		cout<<"ENTER HEIGHT: ";
		cin>>height[n];
		cout<<"ENTER WEIGHT : ";
		cin>>weight[n];	
		cout<<"ENTER PHONE NO : ";
		cin>>tel_no[n];
	    cout<<"ENTER DRIVING LICENECE NO : ";
	    cin>>drive_lic[n];

       }
    void dis(int n)
    {
    	for(int i=0;i<n;i++)
    	{
		
    	cout<<name[i]<<" | "<<dob[i]<<" | "<<b_group[i]<<" | "<<height[i]<<"  | "<<weight[i]<<" | "<<tel_no[i]<<" | "<<drive_lic[i];
        cout<<endl;
         }
	}
	void search(int n ,string data)
	{
		 for(int i=0;i<n;i++)
    	{
		 if(name[i] == data){
		 	cout<<"DATA FOUND !";
        	cout<<name[i]<<" | "<<dob[i]<<" | "<<b_group[i]<<" | "<<height[i]<<"  | "<<weight[i]<<" | "<<tel_no[i]<<" | "<<drive_lic[i];
            cout<<endl;
     	}
    	
     	}
    cout<<"DATA NOT FOUND !";
	}
	void modify(int n,string data)
	{
	  for(int i=0;i<n;i++)
    	{
		 if(name[i] == data)
		 {
		 	int ch;
	cout<<"\nSelect the field to be modified:\n1)Height\n2)Weight\n3)Name\n4)Mobile no."<<endl;
	cin>>ch;
	switch(ch)
	{
	case 1:
		cout<<"\nEnter modified height(cms):"<<endl;
		cin>>height[i];
		break;
	case 2:
		cout<<"\nEnter modified weight(kgs):"<<endl;
		cin>>weight[i];
		break;
	case 3:
		cout<<"\nEnter modified Name:"<<endl;
	    cin>>name[i];
		break;
	case 4:
		cout<<"\nEnter modified mobile no."<<endl;
		cin>>tel_no[i];
		break;
	}	
   	cout<<"\nRecord successfully modified:"<<endl;
		 }
		 else{
		 	
		 }
     	}
	}

};
int main()
{
	class3 g1;
	int n=0,ch;
   	string data;     
	   string name;

	while(1)
	{
	cout<<"\n*** MENU ***";
	cout<<"\n1: DISPLAY";
	cout<<"\n2: INSERT\n";
	cout<<"\n3: SEARCH\n";
	cout<<"\n4: MODIFY\n";
	cout<<"ENTER THE CHOICE : ";
	cin>>ch;
	switch(ch)
  	 {
		 case 1: 
		 	cout<<"NAME"<<" | "<<"DOB"<<" | "<<"BLOOD GRP"<<" | "<<"HEIGHT"<<" | "<<"WEIGHT"<<" | "<<"PHONE NO"<<" | "<<"LIC NO"<<endl;
           cout<<"--------------------------------------------------------------------------------------------------------------------------"<<endl;
		    g1.dis(n);
         break;
		case 2:	  
		    	g1.get_data(n);
		    	n++;
		    
			break;
    case 3:
        
        	cout<<"ENTER NAME FOR SEARCH : ";
        	cin>>data;
        	g1.search(n,data);
        	break;
     case 4:
      	   cout<<"NAME"<<" | "<<"DOB"<<" | "<<"BLOOD GRP"<<" | "<<"HEIGHT"<<" | "<<"WEIGHT"<<" | "<<"PHONE NO"<<" | "<<"LIC NO"<<endl;
           cout<<"--------------------------------------------------------------------------------------------------------------------------"<<endl;
     	    
     		cout<<"ENTER NAME FOR MODIFY : ";
     		cin>>name;
     			g1.modify(n,name);
     	break;
	 }
}
	return 0;
}
